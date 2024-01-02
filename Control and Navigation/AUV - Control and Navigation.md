# AUV - Control and Navigation

# Control and Navigation Subsystem

## Simulations

Simulation is an important aspect of building an Autonomous Underwater Vehicle (AUV). It allows the team to test and validate the robot's design and performance in a controlled environment before deploying it in the actual competition. Simulations also enable us to identify and troubleshoot potential issues before they occur in the field, which can save valuable time and resources.

It helps us test various aspects of the robot's design, such as its hydrodynamics, control algorithms, and sensor systems. By simulating the robot's movement and behavior in different scenarios and environments, we can optimize its design for maximum performance.

Additionally, simulation can be used to test the robot's autonomy and decision-making capabilities. The simulated robot can be programmed to respond to different situations and tasks, such as obstacle avoidance, path planning, and target tracking. This can help the team to build a more robust and capable robot, which can improve its chances of success in the competition.

All the simulations were carried out on Gazebo using Robot Operating System (ROS). The following were the components of the simulation/testing process:

**Environment -** The initial environment consisted of an open ocean with objects such as a shipwreck. This environment was not enough to satisfy the simulations needed, so a pool environment called *sauvc_pool* which contained accurate information about the size of the pool as well as the obstacles and tasks inside the pool was implemented.

**Bluerov2(ffg) -** The bot we chose to simulate was the bluerov2 from [Bluerobotics](https://bluerobotics.com/), as it consisted of a 6-thruster design, and its thrusters would give us an accurate idea of our own thrusters.

**Bluerov in pool -** The bot was integrated into the *sauvc_pool* environment, where it could freely interact with the tasks and obstacles. Since it was operated in ROV (Remotely Operated Vehicle) mode and not AUV mode, the bot had to be controlled with keyboard input.

Simulation Video: [https://drive.google.com/file/d/1jb7FUMZcOFuTcBESvxL-OGILuCvJh7Xp/view?usp=sharing](https://drive.google.com/file/d/1jb7FUMZcOFuTcBESvxL-OGILuCvJh7Xp/view?usp=sharing)

**6 thruster AUV in pool -** Bluerov2 has 6 thrusters, but in our tests, we need to simulate the results for an AUV having anywhere from 1 to 6 thrusters and testing its DOF’s, thrust values, etc. For this, the bluerov2’s URDF files were tweaked to include/exclude thrusters as well as specify the directions they were pointed in.

Simulation Video:

[https://drive.google.com/file/d/1xc2mSkLJA_p5KI65yUyRHvm-LtWhhFbn/view?usp=sharing](https://drive.google.com/file/d/1xc2mSkLJA_p5KI65yUyRHvm-LtWhhFbn/view?usp=sharing)

**ROV in pool** - After this, we imported the STL file of our own SAUVC entry into Gazebo for simulation in place of the bluerov2. The file followed the same format as that of the bluerov2 so that the thruster locations, thrust values, as well as ROV operation is possible for our bot the same way as the bluerov2.

[https://lh7-us.googleusercontent.com/WBFBGcosams34T5hrP6-ARGZfAXHVLQnmqtCJdhinOmKqEfhkR1jED5uM3wtVITclip-tpXp39FElCMyBaaaNxSBE6O4xCdK0QUuMIoffW00Az0-8AMdMMHbHdfVvlCJjdbWI2vMTumQ9GRiAQlgEe0](https://lh7-us.googleusercontent.com/WBFBGcosams34T5hrP6-ARGZfAXHVLQnmqtCJdhinOmKqEfhkR1jED5uM3wtVITclip-tpXp39FElCMyBaaaNxSBE6O4xCdK0QUuMIoffW00Az0-8AMdMMHbHdfVvlCJjdbWI2vMTumQ9GRiAQlgEe0)

[https://lh7-us.googleusercontent.com/1A3CXZuLkuQBjsQwaSw6kbA1lkLNqLfQSdXXZpuEdburpuj0B4QDrTaf_Meo7mArPrfvZ3omyAfqKpm5VkqYNttJbJfpLQaJJ9Qw3mzs6KEbEWazOOj03JUk1Uj0Y6D--oIQPPoJIlmEErJFqogCkgQ](https://lh7-us.googleusercontent.com/1A3CXZuLkuQBjsQwaSw6kbA1lkLNqLfQSdXXZpuEdburpuj0B4QDrTaf_Meo7mArPrfvZ3omyAfqKpm5VkqYNttJbJfpLQaJJ9Qw3mzs6KEbEWazOOj03JUk1Uj0Y6D--oIQPPoJIlmEErJFqogCkgQ)

## Object Detection

Object detection is a computer technology related to computer vision and image processing that deals with detecting instances of semantic objects of a certain class in digital images and videos. One popular algorithm for object detection is YOLO (You Only Look Once). YOLO uses a single neural network to predict bounding boxes and class probabilities directly from full images in one evaluation. It's become popular in real-time object detection because of its speed, as well as its ability to detect a large number of object classes.

Using YOLO for object detection in an underwater environment, however, is a challenging task. The lighting conditions, turbidity, and low visibility can affect the performance of the algorithm. In addition, underwater images may have different characteristics than images taken in an above-water environment, such as color distortion, refraction, and reflection. To overcome these challenges, image pre-processing and training the model on a dataset of underwater images is crucial. This dataset should include a variety of underwater scenarios, lighting conditions, and different types of objects.

In the context of the Singapore Autonomous Underwater Vehicle Challenge (SAUVC), YOLO can be used to detect and classify various objects in the underwater environment. This can help to improve the navigation and control of the autonomous underwater vehicle (AUV). For example, YOLO can be used to detect obstacles and map the environment, which can be used to plan a safe and efficient path for the AUV to follow. YOLO can also be used to identify targets of interest, such as underwater structures or objects of a specific class. Furthermore, object detection information can be used to trigger specific actions or behaviors of the AUV, such as obstacle avoidance, and capturing images or samples of a specific object.

In the SAUVC competition, the vehicle is required to navigate in an unknown and unstructured environment. The object detection algorithm can be used for mission planning and localization and can help the vehicle perform more complex tasks, such as search and recovery.

The following video shows a real-time demonstration of YOLO: [https://drive.google.com/file/d/13KlP3ML55CJQzNvX7uuXz6ovnkqePeDQ/view?usp=sharing](https://drive.google.com/file/d/13KlP3ML55CJQzNvX7uuXz6ovnkqePeDQ/view?usp=sharing)