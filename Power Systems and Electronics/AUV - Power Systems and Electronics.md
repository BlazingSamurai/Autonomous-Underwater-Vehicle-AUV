# AUV - Power Systems and Electronics

# Electronics and Power Systems Subsystem

The most important part of Power Systems in this project is the ‘Thruster’ and based on that, we will be able to decide the power supply. The electronic components that we are working on are used for purposes like maintaining the balance of the bot and environment sensing.

## Different Motors as proposals for ROV thrusters:

### BLDC Motors

We had planned to go with the BLDC motors as our ROV thrusters. BLDC motors are brushless and hence there is less loss of power. Also the speed of the motors is higher and they have been used by some other participants of SAUVC. We tested 2 BLDC motors - BR4114 and A2212.

Before diving into the motor specifications it is very important to understand the *Kv* (not to be misunderstood with kilovolt) rating of a motor. The *Kv* rating of a BLDC motor is the ratio of the motor’s unloaded rpm to the peak voltage on the wires connected to the coils. It provides a basic idea of how much the motor RPM would be given an input voltage.

A motor with higher *Kv* rating has few winds of thick wire that carry more amps at few volts and spin small props at high revolutions. On the other hand, a motor with a low *Kv* rating has more winds of thinner wire that will carry more volts at fewer amps and thus produce higher torque and swing larger propellers.

### ESCs

An ESC (Electronic Speed Controller) is a device that is used to control and adjust the speed of BLDC motors. It is used in conjunction with the BLDC motors for various applications like in drones, etc. Therefore the required specifications of the ESC we need to use are highly dependent on the BLDC motor we choose for our job.

1. **A2212:The A2212 motor is a 3-phase outrunner-type BLDC motor that is commonly used in drones and other multirotor applications. Its specifications are as follows:**

![unnamed.jpg](AUV%20-%20Power%20Systems%20and%20Electronics%20e4186aea146e466c89c7e59233864d93/unnamed.jpg)

![unnamed (7).jpg](AUV%20-%20Power%20Systems%20and%20Electronics%20e4186aea146e466c89c7e59233864d93/unnamed_(7).jpg)

1. **BR4114:The BR4114 is typically used in multirotor applications just like the A2212. But since it has a lower *Kv* rating as mentioned below, it can be used in applications where larger torques are needed.We tested the motors using the 4S LIPO battery and controlled the speed using a 30A ESC. The specifications of BR4114 are as follows:**

![unnamed (1).jpg](AUV%20-%20Power%20Systems%20and%20Electronics%20e4186aea146e466c89c7e59233864d93/unnamed_(1).jpg)

![unnamed (2).jpg](AUV%20-%20Power%20Systems%20and%20Electronics%20e4186aea146e466c89c7e59233864d93/unnamed_(2).jpg)

The main issues encountered with the BLDC motor were:

- The ratio of thrust output given to the input power taken was very poor and hence inefficient.
- We need to make the BLDC motors waterproof. They may work in fresh waters but if the water contains salt, it may corrode and the efficiency may reduce drastically. Instead we decided to use a Bilge pump which can be placed in water directly because they are sealed properly.

### Bilge pumps

Bilge pumps are pretty solid alternatives to the BLDC motors since they are already sealed and waterproof. We tested the bilge pumps using the variable DC power supply.

![unnamed.png](AUV%20-%20Power%20Systems%20and%20Electronics%20e4186aea146e466c89c7e59233864d93/unnamed.png)

It operates at a 12V DC power supply and pushes the water out at the rate of 750GPH (Gallons per hour flow rate).

Specifications of the Bilge pump:

Voltage: 12.0 V DC

Current: 3.0 A

Flow rate: 750 GPH

We can clearly see that the power requirement of the bilge pump is less than BLDC motors and the water that is being pushed out is relatively high.

## Thruster Stand

Our experimental setup involves the following two circuits joined together. Circuit 1 consists of a Load Cell connected to Arduino through an Amplifier ( HX711). This setup helps us to measure the force exerted by any object within the load cell’s range, in our case, 20kg. Circuit 2 is used to control the BLDC (Brushless DC) Motor. For our case, we used a BLDC as a thruster. The circuit should be changed somewhat if we use other motors like DC motors.

![unnamed (1).png](AUV%20-%20Power%20Systems%20and%20Electronics%20e4186aea146e466c89c7e59233864d93/unnamed_(1).png)

                                        **Circuit 1**

![unnamed (2).png](AUV%20-%20Power%20Systems%20and%20Electronics%20e4186aea146e466c89c7e59233864d93/unnamed_(2).png)

                                    **Circuit 2**

![                          **Before the Impact of the L–Shaped Rod**     ](AUV%20-%20Power%20Systems%20and%20Electronics%20e4186aea146e466c89c7e59233864d93/unnamed_(3).jpg)

                          **Before the Impact of the L–Shaped Rod**     

![                          **After the Impact of the L–Shaped Rod**](AUV%20-%20Power%20Systems%20and%20Electronics%20e4186aea146e466c89c7e59233864d93/unnamed_(4).jpg)

                          **After the Impact of the L–Shaped Rod**

          ****

![unnamed (5).jpg](AUV%20-%20Power%20Systems%20and%20Electronics%20e4186aea146e466c89c7e59233864d93/unnamed_(5).jpg)

![unnamed (6).jpg](AUV%20-%20Power%20Systems%20and%20Electronics%20e4186aea146e466c89c7e59233864d93/unnamed_(6).jpg)

**BLDC mounted to the thruster stand**

The L–Shaped rod has one degree of freedom, rotational motion along the axis passing the intersection. Due to this, when the thruster is powered, the thrust generated will rotate it. This rotation will make it have an impact on the load cell.

The reading that we get from the Load cell will be that of the normal reaction of the L-shaped rod and load cell. To get the thrust value, we must balance the torques about the point of intersection, i.e. from the axis of rotation.

Here for testing purposes we measured the Thrust generated by a thruster used in Drones. Then we made a plot of these values with an alias of RPM which we gave through the code called apparent RPM, where 1000 means minimum RPM and 2000 means maximum RPM.

![unnamed (3).png](AUV%20-%20Power%20Systems%20and%20Electronics%20e4186aea146e466c89c7e59233864d93/unnamed_(3).png)

![unnamed (4).png](AUV%20-%20Power%20Systems%20and%20Electronics%20e4186aea146e466c89c7e59233864d93/unnamed_(4).png)

### Magneto Hydraulic Drive (MHDs)