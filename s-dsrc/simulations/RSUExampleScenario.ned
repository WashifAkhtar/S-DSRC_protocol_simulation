package s_dsrc.simulations;

import org.car2x.veins.nodes.RSU;
import org.car2x.veins.nodes.Scenario;
import org.car2x.veins.nodes.TrafficLight;

network RSUExampleScenario extends Scenario
{
    submodules:
        rsu[1]: RSU {
            @display("p=150,140;i=veins/sign/yellowdiamond;is=vs");
        }
        cloud[1]: RSU {
            @display("p=500,500;i=veins/sign/yellowdiamond;is=vs");
        }
}

