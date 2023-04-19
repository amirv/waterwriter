include <tsmthread4.scad>
//include <Hose_Connector.scad>

$OD_COMP=-0.25; // Add this to outside diameters, in mm
$ID_COMP=1;     // Add this to inside diameters, in mm
$PE=0.35;       // Pitch Error.  Adjusts tooth thickness.


//imperial() {
    /* 1/2" NPT.  Tested. */
    if (0) difference() {
        union() {
            imperial() translate([0,0,15/64]) 
            thread_npt(DMAJ=0.840+$OD_COMP, PITCH=0.07143, L=0.07143*8);
            imperial() cylinder(d=flat(), h=1/4, $fn=6);
            
            connector_size_A();
        }
        
        imperial() translate([0,0,1/4-1/64]) cylinder(d=5/8, h=2);

        
    }

//}



// Hose A inside diameter or bore
Size_A = 8; 

// Manifold Bore = Size - Wall Thickness thicker walls are stronger but have a smaller bore. 
// Wall_Thickness_n must be less than Size_n

// Wall_Thickness_A must be less than Size_A
Wall_Thickness_A = 1;

// Number of barbs on output - try 3 for larger tubing to reduce overall print height try 4 for smaller tubing
Size_A_barb_count = 3;

Size_A_Bore = Size_A - (Wall_Thickness_A * 2);

module connector_size_A()
{
  difference()
  {
    union()
    {
      for ( i = [1:Size_A_barb_count])
      {
        translate([0, 0, (i - 1) * Size_A * 0.9]) cylinder( h = Size_A , r2 = Size_A * 0.85 / 2, r1 = Size_A * 1.16 / 2, $fa = 0.5, $fs = 0.5 );

      }
    }
    translate([0, 0, -0.1]) cylinder( h = Size_A * Size_A_barb_count , d = Size_A_Bore , $fa = 0.5, $fs = 0.5 );
  }
}



if (1) union() {
    rotate([180,0,0]) difference() {
        imperial() cylinder(d=flat()*(0.840+$OD_COMP + .1), h=0.07143*8, $fn=6);
        translate([0, 0, +2]) imperial() taper(d=0.840+$OD_COMP - .2, h=0.07143*12, off=1/16) cylinder(d=flat()*(0.840+$OD_COMP - .2), h=0.07143*8, $fn=6);
        //translate([0,0, 2]) imperial() taper(d=0.840+$OD_COMP, h=0.07143*6, off=1/8) cylinder(d=0.840+$OD_COMP, h=0.07143*6);
        imperial() translate([0,0,0.07143*2]) thread_npt(DMAJ=0.840+$OD_COMP, PITCH=0.07143, L=0.07143*80);
        //thread_npt(DMAJ=1.900+$ID_COMP, PITCH=1/11.5, L=8/11.5);
    translate([0, 0, -0.1]) taper(d=0.840+$OD_COMP, h=0.07143*6, off=1/8) cylinder( h = Size_A * Size_A_barb_count , d = Size_A_Bore , $fa = 0.5, $fs = 0.5 );
    }

    connector_size_A();
}

if (0) taper(d=10, h=10, off=3) cylinder(d=10, h=10);

if (0) difference() { cylinder(d=10, h=10); taper(in=true, d=5, h=11, off=1) cylinder(d=5, h=10); }

if (0) difference() {
    imperial() cylinder(d=flat()*(0.840+$OD_COMP + .1), h=0.07143*8, $fn=6);
    translate([0,0,-1/8]) imperial() taper(d=0.840+$OD_COMP, h=0.07143*8, off=1/8) cylinder(d=0.840+$OD_COMP, h=0.07143*8);
}