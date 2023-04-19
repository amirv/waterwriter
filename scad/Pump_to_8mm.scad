use <threadlib/threadlib.scad>
use <openscad-model-library/lib/material.scad>;
use <openscad-model-library/lib/water/tube_connector.scad>;

// The parameters of the hose connector
Size=8;
Wall_Thickness = 1;
Size_barb_count = 2;
Shoulder = 0;
Shoulder_height = 4;

// parameters of the pump side
designator = "G1/2";
turns = 8;
Douter = 30;

// middle part
Spacer = 3;

specs = thread_specs(str(designator, "-int"));
Dsupport = specs[2];
            
plastic() {
    union() {
        rotate([180, 0, 0]) {
            difference() {
                cylinder(h = Spacer, r = 15, $fn = 6);
                translate([0,0,-.5]) cylinder(h = Spacer - 1, d1 = Dsupport - 2, d2 = Size - 2*Wall_Thickness);
                translate([0,0,-.5]) cylinder(h = Spacer + 1, d = Size - 2*Wall_Thickness );
            }
            translate([0, 0, Spacer])
                tube_connector(Size, Wall_Thickness, Size_barb_count, Shoulder, Shoulder_height);
        }

        intersection() {
            cylinder(100, d = 30, $fn = 6);
            nut(designator, turns, Douter);
        }
    }
}

