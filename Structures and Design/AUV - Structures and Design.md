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


[https://lh7-us.googleusercontent.com/SuM53G4O00J6CeAQX-1idNa7fc8pCvkrktAQHQQxb44ouAi4IgnUYUOqlXTeoCjSOq1xdh4hDUtAD8MjU9d7LJHvj0TmyW231tOui-Dm_0llCnkUnaW90mzhoWxIJdWAIwg3zJ2lEMpNoiBIpSEy2HQ](https://lh7-us.googleusercontent.com/SuM53G4O00J6CeAQX-1idNa7fc8pCvkrktAQHQQxb44ouAi4IgnUYUOqlXTeoCjSOq1xdh4hDUtAD8MjU9d7LJHvj0TmyW231tOui-Dm_0llCnkUnaW90mzhoWxIJdWAIwg3zJ2lEMpNoiBIpSEy2HQ)

Graph1. Von Mises Stress on the square face of cuboidal canister vs. Time

[https://lh7-us.googleusercontent.com/ITXVdqs4H5a5t5bDylzGC_FY-ClN9nNcae36hBFYtGWQdEbyhizMfmOmpuDHXpJj_SWu_9VV3MxlM2qTfegJ_bdWU51HbPQzDSranubvX3xvpaTH9-SmwUKhwLDOtAfd5xZSLE8JBOdi106GnS0OD_w](https://lh7-us.googleusercontent.com/ITXVdqs4H5a5t5bDylzGC_FY-ClN9nNcae36hBFYtGWQdEbyhizMfmOmpuDHXpJj_SWu_9VV3MxlM2qTfegJ_bdWU51HbPQzDSranubvX3xvpaTH9-SmwUKhwLDOtAfd5xZSLE8JBOdi106GnS0OD_w)

Graph2. Von Mises Stress on the Hemispherical surface of cylindrical canister vs. Time


[https://lh7-us.googleusercontent.com/c3_3keEzFpkuZ5_NzVXKd8hYCdhlbZtT_KOYs0M587UP9W0wbkB2QvrekfNf8b-CBviiWPFKzbjTxkH9VOuRwsI5LRtBCUB9JRFU4Hc8GlHdw4p_P0ZKDtsMHnEKu4-AH0RxNS8m7tjWscqBGhLsvgw](https://lh7-us.googleusercontent.com/c3_3keEzFpkuZ5_NzVXKd8hYCdhlbZtT_KOYs0M587UP9W0wbkB2QvrekfNf8b-CBviiWPFKzbjTxkH9VOuRwsI5LRtBCUB9JRFU4Hc8GlHdw4p_P0ZKDtsMHnEKu4-AH0RxNS8m7tjWscqBGhLsvgw)

Graph3. Von Mises Stress on the bottom surface of cuboidal canister vs. Time

[https://lh7-us.googleusercontent.com/OCGI1MABwg0b5aSBVIzHCxxjsbukSwkHZNhsXOsECgdPMGfIOiBZJfJN51O_BJSwSXXIt3foAepwU8x9IBh3tz4k8j4zgtAtkl50W8VlBAWZd2amC4yQZhglGtvyc7P4Lu3Um8wX3ch9myWzibXEbZM](https://lh7-us.googleusercontent.com/OCGI1MABwg0b5aSBVIzHCxxjsbukSwkHZNhsXOsECgdPMGfIOiBZJfJN51O_BJSwSXXIt3foAepwU8x9IBh3tz4k8j4zgtAtkl50W8VlBAWZd2amC4yQZhglGtvyc7P4Lu3Um8wX3ch9myWzibXEbZM)

Graph4. Von Mises Stress on the bottom curved surface of cylindrical canister vs. Time

We observe that the cuboidal canister faces less Von Mises stress on the bottom surface. We can also see on comparing Graph.1 and Graph.2 that the Von Mises stress on the frontal face surfaces is significantly less in the case of cuboidal canister.

The involved Simulations are as follows:

Cuboidal face:

[https://lh7-us.googleusercontent.com/cIrDv2GguIbNwND1TveDG57wg3i9WP07XLtrIW5bvmU_HM3kG1rGVZgmQmvwOppLhJOYzOYtvPwOhycjV0p08_CZAUCSZT4MHWIAtRkQY7c4l4xpSkU1KcUEmRR2Z6HIsHnOdPMaTIGH3eSuZp6TM7E](https://lh7-us.googleusercontent.com/cIrDv2GguIbNwND1TveDG57wg3i9WP07XLtrIW5bvmU_HM3kG1rGVZgmQmvwOppLhJOYzOYtvPwOhycjV0p08_CZAUCSZT4MHWIAtRkQY7c4l4xpSkU1KcUEmRR2Z6HIsHnOdPMaTIGH3eSuZp6TM7E)

[https://lh7-us.googleusercontent.com/b6Udap4T7LGWPpUNRT8MAFNPbEwvTs37y1Av0QiaLgMmeNOYe-udXBPnXuVKeMpcKEfdnJ1s7wt7onaZE5VKQMGJks8NlZ8m60Jq6k4XSSSIgR33X3o7t8msM3ef3RqSV_p1Mxgj6L3SjnvB8ekeaEA](https://lh7-us.googleusercontent.com/b6Udap4T7LGWPpUNRT8MAFNPbEwvTs37y1Av0QiaLgMmeNOYe-udXBPnXuVKeMpcKEfdnJ1s7wt7onaZE5VKQMGJks8NlZ8m60Jq6k4XSSSIgR33X3o7t8msM3ef3RqSV_p1Mxgj6L3SjnvB8ekeaEA)

Cuboidal Bottom surface:

[https://lh7-us.googleusercontent.com/_Upr2i0Nc1bvraP5WNUQlGU92dScQkwjbyskRpBl3g39Mea_2oy_2vNiNmK7BOi4KEJCHgUJF31_M_0zlNVeM7utg_nv8n0Ekca4uKXekqGF8AD-uPgJLMdfweC562xFjTyVdjKVEkEeMRg61XFgzQ8](https://lh7-us.googleusercontent.com/_Upr2i0Nc1bvraP5WNUQlGU92dScQkwjbyskRpBl3g39Mea_2oy_2vNiNmK7BOi4KEJCHgUJF31_M_0zlNVeM7utg_nv8n0Ekca4uKXekqGF8AD-uPgJLMdfweC562xFjTyVdjKVEkEeMRg61XFgzQ8)

[https://lh7-us.googleusercontent.com/d6mV2WaVmHzT19B5jMuVTXXiHcZpvyo_A7p5EusrKw6NRJ_qnM9U789GwiEx9j2lzP0qN6t3puPkZCxG_Giv6YALSPv-i3qofeHAuHNthSo2DAk0IeVaTfxjo34Mo9utxUFYMW7ih8sQYK2Xb-KTbuE](https://lh7-us.googleusercontent.com/d6mV2WaVmHzT19B5jMuVTXXiHcZpvyo_A7p5EusrKw6NRJ_qnM9U789GwiEx9j2lzP0qN6t3puPkZCxG_Giv6YALSPv-i3qofeHAuHNthSo2DAk0IeVaTfxjo34Mo9utxUFYMW7ih8sQYK2Xb-KTbuE)

Cuboidal canister:

[https://lh7-us.googleusercontent.com/4HCqbMZ-Gn-HxAEpQAmryD_Eq0_OVA5MvQvA73jSVn6cCnWA5gGzc8vvft-SHyyaBPxAEZegnb4WIlzyNieHQ102t1mbvrXUknGTBuMpk5L_bMmXzDX32So1Wo3R92zW_4xj2rOT8eh9MclYrgw9NzI](https://lh7-us.googleusercontent.com/4HCqbMZ-Gn-HxAEpQAmryD_Eq0_OVA5MvQvA73jSVn6cCnWA5gGzc8vvft-SHyyaBPxAEZegnb4WIlzyNieHQ102t1mbvrXUknGTBuMpk5L_bMmXzDX32So1Wo3R92zW_4xj2rOT8eh9MclYrgw9NzI)

[https://lh7-us.googleusercontent.com/K1Yzz7JrKZ-WKaoQDj10hv7V1a0hO5qQtmp5PnqY2F4c1M9ptJyJZTlne8FI8V5lqu-1Sw60Zy0tezO0QSa7VCUgdw83DLISDglpPGkO17qk5DquAXQBqR6j3kaCN2re9tyxfg0OXeXw32xfQ1wOQPU](https://lh7-us.googleusercontent.com/K1Yzz7JrKZ-WKaoQDj10hv7V1a0hO5qQtmp5PnqY2F4c1M9ptJyJZTlne8FI8V5lqu-1Sw60Zy0tezO0QSa7VCUgdw83DLISDglpPGkO17qk5DquAXQBqR6j3kaCN2re9tyxfg0OXeXw32xfQ1wOQPU)

Cylinder Bottom surface:

[https://lh7-us.googleusercontent.com/bL_YVFt7acK4B5znwIAShoJUb73bDwcnRjk3dpnffqY6P8-acAjeuQDiHWhbGcs6xQXN8OML4a0gaOfZtUsmVuiIS3hJdlyWK9xOUktDF1hENz2gSsSdLPBjiW5Y5ytDtFTXCMZDBWK5UtxaYrJPz_I](https://lh7-us.googleusercontent.com/bL_YVFt7acK4B5znwIAShoJUb73bDwcnRjk3dpnffqY6P8-acAjeuQDiHWhbGcs6xQXN8OML4a0gaOfZtUsmVuiIS3hJdlyWK9xOUktDF1hENz2gSsSdLPBjiW5Y5ytDtFTXCMZDBWK5UtxaYrJPz_I)

[https://lh7-us.googleusercontent.com/PUqyit1DU6I2TdiPwotl9jy3lDZP2cTM-KCGIXPXBDxUkS_p9jPDPNoEHwMUYY2kCxHqtW9K5sbPW-OCynnYDLv50xhoviOC-9Yb-ofbC6fTuOOOB7XF7X9pBonj_MxJEwbCGL_lsnMke1VKXSR2DIM](https://lh7-us.googleusercontent.com/PUqyit1DU6I2TdiPwotl9jy3lDZP2cTM-KCGIXPXBDxUkS_p9jPDPNoEHwMUYY2kCxHqtW9K5sbPW-OCynnYDLv50xhoviOC-9Yb-ofbC6fTuOOOB7XF7X9pBonj_MxJEwbCGL_lsnMke1VKXSR2DIM)

Hemispherical surface:

[https://lh7-us.googleusercontent.com/OT2m2yFZ3y0lfPtWDQivmpGLTYpFYNHcU18DcDiJZDnKVTXWArvgQyC8crj4p5ZTKiqUXAxl5RyqfeplVrYsJDydBis01gTQReOgmU4_ryqz6CWRLZUdyUlcUOVjz6fU6_vYmg_mjufeijokT2d9Ehg](https://lh7-us.googleusercontent.com/OT2m2yFZ3y0lfPtWDQivmpGLTYpFYNHcU18DcDiJZDnKVTXWArvgQyC8crj4p5ZTKiqUXAxl5RyqfeplVrYsJDydBis01gTQReOgmU4_ryqz6CWRLZUdyUlcUOVjz6fU6_vYmg_mjufeijokT2d9Ehg)

[https://lh7-us.googleusercontent.com/d8Tz09mb3nepjhWT5ri2zbg3H_EjB9Lz1K17gnTQcyQ_6U2S9AC4bGaKNUlPLwQTWR6RMTWNGvwZILEfIQQv4Cf20JFj-roCZZWf5PlvJ1SBNxDS001OoN1wEYUHp9x4XRJZpy6KuSWoaBVMY7ZFolY](https://lh7-us.googleusercontent.com/d8Tz09mb3nepjhWT5ri2zbg3H_EjB9Lz1K17gnTQcyQ_6U2S9AC4bGaKNUlPLwQTWR6RMTWNGvwZILEfIQQv4Cf20JFj-roCZZWf5PlvJ1SBNxDS001OoN1wEYUHp9x4XRJZpy6KuSWoaBVMY7ZFolY)

Cylindrical canister:

[https://lh7-us.googleusercontent.com/Vj9uT0qVkE79kJkCcSSPM9ShG7nlhcIRJsE2P0PL9KW4iAK2jYgA6LICHQvXOzWZ-njjoZS9i8YMyh_jjkZt8SuAYpx8k81g2hzmvl61XhiDpsnXutVpStToBbiDXWCZuJnbdTOoImUQetTvMkBlNvs](https://lh7-us.googleusercontent.com/Vj9uT0qVkE79kJkCcSSPM9ShG7nlhcIRJsE2P0PL9KW4iAK2jYgA6LICHQvXOzWZ-njjoZS9i8YMyh_jjkZt8SuAYpx8k81g2hzmvl61XhiDpsnXutVpStToBbiDXWCZuJnbdTOoImUQetTvMkBlNvs)

[https://lh7-us.googleusercontent.com/xUmBuWOmuUeFtuX6NleAD9fnVoCY56dwq1hs0RjwjsDuqxkX7HVBtTToccJwao0CGz74mUe8kRDxvoVu3RG6FyqL6_1sBr6scSEa-6Es5T9t0NAP8zs5GvRkyR3xFGktxkcfEHoxLtKgUCrmo2OSmng](https://lh7-us.googleusercontent.com/xUmBuWOmuUeFtuX6NleAD9fnVoCY56dwq1hs0RjwjsDuqxkX7HVBtTToccJwao0CGz74mUe8kRDxvoVu3RG6FyqL6_1sBr6scSEa-6Es5T9t0NAP8zs5GvRkyR3xFGktxkcfEHoxLtKgUCrmo2OSmng)

### Active Ballast System
