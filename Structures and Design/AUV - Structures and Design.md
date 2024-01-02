# AUV - Structures and Design

The physics underwater is very different compared to the physics on land. There are factors that vary compared to those on land.

- ****************Pressure**************** - Pressure variation is very high underwater. For every ********************one meter******************** rise in ************depth************, the pressure rises by  **************1 atm**************.

![Source: [Research Gate](https://www.researchgate.net/figure/Relationship-of-underwater-depth-gas-volume-and-gas-pressure-Adapted-from-Lynch-and_fig1_331186737). Variation of Pressure with Depth.](AUV%20-%20Structures%20and%20Design/Untitled.png)

Source: [Research Gate](https://www.researchgate.net/figure/Relationship-of-underwater-depth-gas-volume-and-gas-pressure-Adapted-from-Lynch-and_fig1_331186737). Variation of Pressure with Depth.

- ****************Light -**************** The intensity of light decreases rapidly as depth increases. Beyond **100 meters**, the maximum intensity of light available is ****1%****.

![Source : [Research Gate](https://www.researchgate.net/figure/Attenuation-of-light-underwater_fig1_320145382). Shows the Intensity of light absorbed with depth for different colours of light.](AUV%20-%20Structures%20and%20Design/Untitled%201.png)

Source : [Research Gate](https://www.researchgate.net/figure/Attenuation-of-light-underwater_fig1_320145382). Shows the Intensity of light absorbed with depth for different colours of light.

- **********************************Flora and Fauna -********************************** As the depth increases the wide variety of flora and fauna increases, especially on the Ocean bed.

![Source: [Pixabay](https://pixabay.com/photos/dive-underwater-reef-corals-694689/).](AUV%20-%20Structures%20and%20Design/Untitled%202.png)

Source: [Pixabay](https://pixabay.com/photos/dive-underwater-reef-corals-694689/).

There are a lot more factors that change underwater as depth changes, like density, salinity and temperature. There’s also stuff like waves and tides to take into consideration. But, for this project, we are restricting ourselves to only a swimming pool, extended to a small pond. Hence, we are taking these there factors as major. 

Variation in ****************************Pressure determines the Structure of the AUV****************************. This also allows leakage of water into the AUV which will damage the electronics. To prevent this, we need to seal all possible openings or any gaps in the AUV. Hence, all the electronics should be sealed in an air-tight environment. 

Next, the changes in ********************************Light Intensity******************************** is the factor that determines the colour of objects underwater, which plays an important role in object detection used for autonomous path planning. More about this will be updated in Control and Navigation.

### Basic Structure of an AUV/ROV:

A standard structure of an AUV/ROV consists of a canister, which causes all the electronics and the onboard computer, and this canister is supported by an ROV frame. 

![Source: BlueROV.](AUV%20-%20Structures%20and%20Design/Untitled%203.png)

Source: BlueROV.

### Design and Fabrication:

As part of this project, we designed an ROV frame along with an AUV frame. We also fabricated the ROV frame using simple PVC pipes. We plan to finish the ROV first.

![WhatsApp Image 2022-10-22 at 10.54.52 AM.jpeg](AUV%20-%20Structures%20and%20Design/WhatsApp_Image_2022-10-22_at_10.54.52_AM.jpeg)

The picture shows the assembled ROV Frame made from PVC Pipes.

![WhatsApp Image 2022-11-19 at 4.04.37 PM.jpeg](AUV%20-%20Structures%20and%20Design/WhatsApp_Image_2022-11-19_at_4.04.37_PM.jpeg)

The following are the thruster holder and propeller for the AUV/ROV.

![WhatsApp Image 2023-01-12 at 4.04.09 PM.jpeg](AUV%20-%20Structures%20and%20Design/WhatsApp_Image_2023-01-12_at_4.04.09_PM.jpeg)

![WhatsApp Image 2023-01-12 at 4.04.28 PM.jpeg](AUV%20-%20Structures%20and%20Design/WhatsApp_Image_2023-01-12_at_4.04.28_PM.jpeg)

## COMSOL Analysis:

We also made a set of COMSOL Analyses on stress experienced by a Canister during its motion underwater for various shapes.

The analysis of stresses experienced by the canister is critical for canister structural design. It assists us in visualizing and comprehending the motion of the canister and its response to stress and drag in a specific real-world situation. With the help of analysis, the geometry of the canisters can be optimized so that the body experiences the least amount of drag, which is our final aim.

**Drag**

Drag acting on a solid surface depends on multiple factors. The shape and size of the body affect the drag. The velocity of the flow, the viscosity and the angle of inclination of the flow are also all crucial factors affecting the drag. If we think of drag as aerodynamic friction, then the amount of drag depends on the surface roughness of the object; a smooth, waxed surface will produce less drag than a roughened surface. This effect is included in the [drag coefficient](https://www.grc.nasa.gov/www/k-12/VirtualAero/BottleRocket/airplane/dragco.html). It also depends on the velocity of the fluid and body.

**COMSOL Simulation**

Our objective is to compare the drag forces or the stress experienced on the bottom surface for a cuboidal and cylindrical canister with a hemispherical end. Solid Mechanics *(solid)* and Creeping Flow *(SPF)* were the phics modules chosen for this simulation. The Creeping Flow *(spf)* module was selected because the fluid flow (water) had an extremely low Reynolds number. Displacement and stresses can be computed using the Solid Mechanics *(solid)* module. The canister is made of Acrylic Plastic, and the fluid chosen for this simulation is water.

INITIAL VALUES:

Canister (Acrylic plastic):-

Initial velocity in x-direction = u_solid = 1.38 (m/s)

Initial velocity in y-direction = v_solid = -0.1397 (m/s)

Initial velocity in z-direction = w_solid =  0  (m/s)

Fluid (water):-

Initial velocity in x-direction = u_flow = 0 (m/s)

Initial velocity in y-direction = v_flow = 0 (m/s)

Initial velocity in z-direction = w_flow =  0  (m/s)

Pressure = *p* = 101325 (kPa)

Temperature = 293.15 (K)

GRAPHS:-


![](AUV%20-%20Structures%20and%20Design/Graph1.png)

Graph1. Von Mises Stress on the square face of cuboidal canister vs. Time

![](AUV%20-%20Structures%20and%20Design/Graph2.png)

Graph2. Von Mises Stress on the Hemispherical surface of cylindrical canister vs. Time

![](AUV%20-%20Structures%20and%20Design/Graph3.png)

Graph3. Von Mises Stress on the bottom surface of cuboidal canister vs. Time

![](AUV%20-%20Structures%20and%20Design/Graph4.png)

Graph4. Von Mises Stress on the bottom curved surface of cylindrical canister vs. Time

We observe that the cuboidal canister faces less Von Mises stress on the bottom surface. We can also see by comparing Graph.1 and Graph.2 that the Von Mises stress on the frontal face surfaces is significantly less in the case of a cuboidal canister.

The involved Simulations are as follows:

Cuboidal face:

![](AUV%20-%20Structures%20and%20Design/Cube_face_1.gif)
![](AUV%20-%20Structures%20and%20Design/Cube_face_2.png)


Cuboidal Bottom surface:

![](AUV%20-%20Structures%20and%20Design/Cube_Bottom_1.gif)
![](AUV%20-%20Structures%20and%20Design/Cube_Bottom_2.png)

Cuboidal canister:

![](AUV%20-%20Structures%20and%20Design/Cube_Can_1.gif)
![](AUV%20-%20Structures%20and%20Design/Cube_Can_2.png)


Cylinder Bottom surface:

![](AUV%20-%20Structures%20and%20Design/Cylinder_Bottom_1.gif)
![](AUV%20-%20Structures%20and%20Design/Cylinder_Bottom_2.png)


Hemispherical surface:

![](AUV%20-%20Structures%20and%20Design/Cylinder_Face_1.gif)
![](AUV%20-%20Structures%20and%20Design/Cylinder_Face_2.png)

Cylindrical canister:

![](AUV%20-%20Structures%20and%20Design/Cylinder_Can_1.gif)
![](AUV%20-%20Structures%20and%20Design/Cylinder_Can_2.png)

### Active Ballast System
