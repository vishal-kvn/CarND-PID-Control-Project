# PID Controller
The PID controller has 3 components -
* Proportional(P) - Turns the car to keep it on track
* Integral(I) - Corrects systemic bias like steering drift 
* Derivative(D) - Helps to reduce oscillations

As a part of this project, the PID co-efficients have been tuned manually. The starting values(Kp=0.2, Ki=0.004, Kd=3.0) of the co-efficients were taken from the class example and used as a base line to start the training. With these co-efficients the car was unable to stay on track as the Kp value for not sufficient to turn the car in the right direction. In order to keep the car on the track during turns, I included a condition that would decrease the throttle if the absolute value of `steer_value` is greater than `0.3`. This prevented the car from over shooting the curve.

The simulator was run on my mac(2.5 GHz Intel Core i7, 16 GB RAM, NVDIA GeForce GT 750M 2048 MB
Intel Iris Pro 1536 MB). After further manual tuning, the following values have been obtained with the simulator running with a `640 x 480` resolution and Graphis Quality as `fastest` -

```
Throttle: 0.3
Kp: 0.4
Ki: 0.004
Kd: 6.0
```

These co-efficients help to keep the car on the track.

On increasing the throttle to 0.7, the following parameters did not keep the car on the track. Tuning the co-efficients for higher speeds resulted in the following co-efficients -

```
Throttle: 0.7
Kp: 0.125
Ki: 0.001
Kd: 3.8
```

The general observation is that the co-efficient values are inveserly proportional to the speed of the car. Another interesting observation was that when I used QuickTime Player to record the video, the Kp, Ki, Kd co-efficients list above do not work. As a result of this I recorded the video of the screen with an external camera. Also, the co-efficients listed above did not work in my workspaces.

Based on these observations, the co-efficient values change based on the hardware of the machine and the resources allocated to the simulator. Twiddle or gradient descent can be used to find the optimal parameters for different settings.

