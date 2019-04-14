# PID Controller
The PID controller has 3 components -
* Proportional(P) - Turns the car to keep it on track
* Integral(I) - Corrects systemic bias like steering drift 
* Derivative(D) - Helps to reduce oscillations

As a part of this project, the PID co-efficients have been tuned manually. The starting values(Kp=0.2, Ki=0.004, Kd=3.0) of the co-efficients were taken from the class example and used as a base line to start the training. With these co-efficients the car was unable to stay on track as the Kp value for not sufficient to turn the car in the right direction. After further manual tuning I arrived at the following values -

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

The general observation is that the co-efficient values are inveserly proportional to the speed of the car. The turns could be further smoothened using Twiddle to find the optimal co-efficients

