use <threadlib/threadlib.scad>

include <openscad-model-library/lib/material.scad>;
include <openscad-model-library/lib/water/tube_connector.scad>;

Size=8;
Wall_Thickness = 1;
Size_barb_count = 2;
Shoulder = 0;
Shoulder_height = 4;

Spacer = 10;
plastic() {
    union() {


        rotate([180, 0, 0]) {
            difference() {
                cylinder(h = Spacer, r = 15);
                cylinder(h = Spacer + 1, r = Size/2 - Wall_Thickness );
                translate([0,0,-3]) sphere(r = 10);

            }
            translate([0, 0, Spacer])
                tube_connector(Size, Wall_Thickness, Size_barb_count, Shoulder, Shoulder_height);
        }

 


        nut("G1/2", 8, Douter=30);
    }

}

