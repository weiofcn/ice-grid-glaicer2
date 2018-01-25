# ice-grid-glaicer2

This is a demo for showing how to integrate Glacier2 into a Grid project. Glacier2 indeed useful in NAT networking environment, but you should aware that there are some drawbacks if all networking data transmit via Glacier2router. All of the code from [Ice Demos for Ice 3.6.4](https://github.com/zeroc-ice/ice-demos/releases/tag/v3.6.4).

# Requirement

1. [https://zeroc.com/downloads/ice/3.6](https://zeroc.com/downloads/ice/3.60

# Usage 

1. ```make```

2. ```cd simpleChat```

3. ```icegridnode --Ice.Config=config.grid```

4. ```icegridadmin --Ice.Config=config.grid -e "application add application_with_replication.xml"```

5. ```./client```
