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
    
    [https://lh7-us.googleusercontent.com/1EejCQKfnEzN_ZKtrIDgy5Wo9pnplEMM6TCJuVnDWBo3smjGaVOQbKRzd_5AkCYQyWiMYlk_igFtdlyXcbvTEGNkekVAMrszvz8u9jZ04kyC5OWiQgmUVhedDqLONc8svlpPi4t0BTFu9LtXNAOgnW4](https://lh7-us.googleusercontent.com/1EejCQKfnEzN_ZKtrIDgy5Wo9pnplEMM6TCJuVnDWBo3smjGaVOQbKRzd_5AkCYQyWiMYlk_igFtdlyXcbvTEGNkekVAMrszvz8u9jZ04kyC5OWiQgmUVhedDqLONc8svlpPi4t0BTFu9LtXNAOgnW4)
    
    [https://lh7-us.googleusercontent.com/Kakl96IOx7tYqGm5s8ZW9ck3WiIfR-FUzX1FkRJC-GJDWCogIh3-hwDass7ZWIQNh6xEDCi2zp4pP_dNvxofebTeQ9OAvFJaSpyY8zXGvVIRjbUtivodbudC73p7qY8UgXmdaA34t6MYTLmQl7N1EgU](https://lh7-us.googleusercontent.com/Kakl96IOx7tYqGm5s8ZW9ck3WiIfR-FUzX1FkRJC-GJDWCogIh3-hwDass7ZWIQNh6xEDCi2zp4pP_dNvxofebTeQ9OAvFJaSpyY8zXGvVIRjbUtivodbudC73p7qY8UgXmdaA34t6MYTLmQl7N1EgU)
    
2. **BR4114:The BR4114 is typically used in multirotor applications just like the A2212. But since it has a lower *Kv* rating as mentioned below, it can be used in applications where larger torques are needed.We tested the motors using the 4S LIPO battery and controlled the speed using a 30A ESC. The specifications of BR4114 are as follows:**
    
    [https://lh7-us.googleusercontent.com/nht-auylpncEwD42ACeQdR0bkPHA-2SUT4kHULD53mj4OfF94Y3JgHRcrDpHNtd5jsDa4UUHOL2X6o8vUNl97Y6qve6mKnvTT4_iAe2rlqt8YfDa5ReIms1uIQ2NPuayNNKuHEe8Yg05KE4XFZg26kY](https://lh7-us.googleusercontent.com/nht-auylpncEwD42ACeQdR0bkPHA-2SUT4kHULD53mj4OfF94Y3JgHRcrDpHNtd5jsDa4UUHOL2X6o8vUNl97Y6qve6mKnvTT4_iAe2rlqt8YfDa5ReIms1uIQ2NPuayNNKuHEe8Yg05KE4XFZg26kY)
    
    [https://lh7-us.googleusercontent.com/mHtgMuPscc2JqAkGoZL1-M_Yjdvqblihs5QiBDhgQaHsQp1ramFPh3S_KZvPa6UZGuA3Mb2n2IoTtA6cGpCBQtaSSqajJ8A1rnodbkirwrzJZMpIUmCYKZbT0MBuecY3uyHYhw5EmvmVD1h5JrVhbMs](https://lh7-us.googleusercontent.com/mHtgMuPscc2JqAkGoZL1-M_Yjdvqblihs5QiBDhgQaHsQp1ramFPh3S_KZvPa6UZGuA3Mb2n2IoTtA6cGpCBQtaSSqajJ8A1rnodbkirwrzJZMpIUmCYKZbT0MBuecY3uyHYhw5EmvmVD1h5JrVhbMs)
    

The main issues encountered with the BLDC motor were:

- The ratio of thrust output given to the input power taken was very poor and hence inefficient.
- We need to make the BLDC motors waterproof. They may work in fresh waters but if the water contains salt, it may corrode and the efficiency may reduce drastically. Instead we decided to use a Bilge pump which can be placed in water directly because they are sealed properly.

### Bilge pumps

Bilge pumps are pretty solid alternatives to the BLDC motors since they are already sealed and waterproof. We tested the bilge pumps using the variable DC power supply.

[https://lh7-us.googleusercontent.com/atcWX5br1CmOlY0G1Ecu5SavzxyOJfqK28PAlpgoIwru6LeCmp1OoG26h-DSJgFf9UgG5lw_0RN0aASY08nUgjyurxdsYBMwGwjUhDRfmn9m3xcxwO6LRDPD_YXQBnEeaZ7Cyw6gJ0XbjpN_NsC8ZlE](https://lh7-us.googleusercontent.com/atcWX5br1CmOlY0G1Ecu5SavzxyOJfqK28PAlpgoIwru6LeCmp1OoG26h-DSJgFf9UgG5lw_0RN0aASY08nUgjyurxdsYBMwGwjUhDRfmn9m3xcxwO6LRDPD_YXQBnEeaZ7Cyw6gJ0XbjpN_NsC8ZlE)

It operates at a 12V DC power supply and pushes the water out at the rate of 750GPH (Gallons per hour flow rate).

Specifications of the Bilge pump:

Voltage: 12.0 V DC

Current: 3.0 A

Flow rate: 750 GPH

We can clearly see that the power requirement of the bilge pump is less than BLDC motors and the water that is being pushed out is relatively high.

## Thruster Stand

Our experimental setup involves the following two circuits joined together. Circuit 1 consists of a Load Cell connected to Arduino through an Amplifier ( HX711). This setup helps us to measure the force exerted by any object within the load cell’s range, in our case, 20kg. Circuit 2 is used to control the BLDC (Brushless DC) Motor. For our case, we used a BLDC as a thruster. The circuit should be changed somewhat if we use other motors like DC motors.

[https://lh7-us.googleusercontent.com/WCQlbpx21ogl8gWuR2Qo8dexPOyn_O1_YIZhoLrMIIo16Qjj1BsVFhVZNmBt5npvWweUOjZ0T8PuTyz_0Vxr8zlo4Hdfp9Jsz87yo6v9U6qihMgvnEbxikYk0RhuscJNxaHO9mPugTlLQOTytCNaD8s](https://lh7-us.googleusercontent.com/WCQlbpx21ogl8gWuR2Qo8dexPOyn_O1_YIZhoLrMIIo16Qjj1BsVFhVZNmBt5npvWweUOjZ0T8PuTyz_0Vxr8zlo4Hdfp9Jsz87yo6v9U6qihMgvnEbxikYk0RhuscJNxaHO9mPugTlLQOTytCNaD8s)

**Circuit 1**

[https://lh7-us.googleusercontent.com/4ko1FvfGuf0XdWmeV8-DKFf_WTPZkSZZBagybdzvR6WElM9YoUry2CKhch3lPMU5VaI03nuZ7cF5FWHoffx2EbOni15BV_CWYOyP1gFZzqDJslm8xe2Z3hoUV5a4mdZxhLsYhQixTzTFDR6Oe4iWZAw](https://lh7-us.googleusercontent.com/4ko1FvfGuf0XdWmeV8-DKFf_WTPZkSZZBagybdzvR6WElM9YoUry2CKhch3lPMU5VaI03nuZ7cF5FWHoffx2EbOni15BV_CWYOyP1gFZzqDJslm8xe2Z3hoUV5a4mdZxhLsYhQixTzTFDR6Oe4iWZAw)

**Circuit 2**

[**Before the Impact of the L–Shaped Rod**     ](https://lh7-us.googleusercontent.com/wOea665ipaQkBNCEwWVNIrbQ-Mo4RBSTPs4E687M9_V1gPXgr1C43wPTvySuf47DDWHcD-8NVbYpzoLj3E2oJe3ejUPkfycodOGFGm24ONXJmEu8s86JMA9mbP0LrZJww57tdATODjRt8USra7MgfQU)

**Before the Impact of the L–Shaped Rod**     

[    **After the Impact of the L–Shaped Rod**](https://lh7-us.googleusercontent.com/p1cx911365YgKUmnh8wnB6JkuTqpAnt__Uc4ZR77sAiB2Rjnx7V3KLx6uC_NyCt5PhxCfrkcOnf-POkpgozew9V_nC4Dqvmii7olFrSNXGXY7kVxfBJ3TtEqw3bTDXP4ur94gcarqywNh2uXoE3IBFw)

    **After the Impact of the L–Shaped Rod**

          ****

[https://lh7-us.googleusercontent.com/WbjG17ic7CcDC5r3UiaYMQMjMOfLT5gDWiTwbwdnL3VjYZTJbGGq_wNLV8o0ZpiD4RnK74mlL-HTS9r9QxpJXTaQk6CEY2T9tysaMyopT7k9eQWJAdfDdNIXVET3-5oLTH8vIVsrkQM_KAAOPb8d8lU](https://lh7-us.googleusercontent.com/WbjG17ic7CcDC5r3UiaYMQMjMOfLT5gDWiTwbwdnL3VjYZTJbGGq_wNLV8o0ZpiD4RnK74mlL-HTS9r9QxpJXTaQk6CEY2T9tysaMyopT7k9eQWJAdfDdNIXVET3-5oLTH8vIVsrkQM_KAAOPb8d8lU)

[https://lh7-us.googleusercontent.com/PvNTKWQR9uwuh0FwkpB3_AK0zMeeEovFGP9RjKwTC3uGJX0Tdb9_rb0QNFrwJA7bux3lhmxBbYtBbhK1Ry1AeO3vHfBPqqSYfleo-tumC7bYpGEwKrv6sCmjNUVd-74YiHaQFigLTH68IRLD6v6Pd6k](https://lh7-us.googleusercontent.com/PvNTKWQR9uwuh0FwkpB3_AK0zMeeEovFGP9RjKwTC3uGJX0Tdb9_rb0QNFrwJA7bux3lhmxBbYtBbhK1Ry1AeO3vHfBPqqSYfleo-tumC7bYpGEwKrv6sCmjNUVd-74YiHaQFigLTH68IRLD6v6Pd6k)

**BLDC mounted to the thruster stand**

The L–Shaped rod has one degree of freedom, rotational motion along the axis passing the intersection. Due to this, when the thruster is powered, the thrust generated will rotate it. This rotation will make it have an impact on the load cell.

The reading that we get from the Load cell will be that of the normal reaction of the L-shaped rod and load cell. To get the thrust value, we must balance the torques about the point of intersection, i.e. from the axis of rotation.

Here for testing purposes we measured the Thrust generated by a thruster used in Drones. Then we made a plot of these values with an alias of RPM which we gave through the code called apparent RPM, where 1000 means minimum RPM and 2000 means maximum RPM.

[https://lh7-us.googleusercontent.com/8QJ0vRyXCRqwVwdswVB-ErJLZgv7wj7ii3fiLcKm-7lFVhCsDIO7dZwgvrBTJlYashHxYimW5wLY7HYeozwSa8rvENlXQ-v035DmIx3NsDWKnfJeiuAZrUj10EFWa7j3o4ynjpaM97DSPEdRBtluy4g](https://lh7-us.googleusercontent.com/8QJ0vRyXCRqwVwdswVB-ErJLZgv7wj7ii3fiLcKm-7lFVhCsDIO7dZwgvrBTJlYashHxYimW5wLY7HYeozwSa8rvENlXQ-v035DmIx3NsDWKnfJeiuAZrUj10EFWa7j3o4ynjpaM97DSPEdRBtluy4g)

[https://lh7-us.googleusercontent.com/Ai8Z6CVc5FMza-F3gR9AO3wJcaU7qYUtcwX-bey5AHyygqZ4YM3TFfznPr8FBWhC9QKsEert9J1YGXbGtfMpiyIzQ-_k9vim5YW4jXF82sKnbT7Tlt0IQUPd_c6muXz128sSttr6gZsAL1dgaXl6-2s](https://lh7-us.googleusercontent.com/Ai8Z6CVc5FMza-F3gR9AO3wJcaU7qYUtcwX-bey5AHyygqZ4YM3TFfznPr8FBWhC9QKsEert9J1YGXbGtfMpiyIzQ-_k9vim5YW4jXF82sKnbT7Tlt0IQUPd_c6muXz128sSttr6gZsAL1dgaXl6-2s)