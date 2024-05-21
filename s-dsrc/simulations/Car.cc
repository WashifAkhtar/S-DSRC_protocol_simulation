void Car::handleMessage(cMessage* msg) {
    if (msg->isSelfMessage()) {
        handleSelfMsg(msg);
    } else {
        if (strcmp(msg->getName(), "accident") == 0) {
            sendDataToCloud();
        } else if (strcmp(msg->getName(), "DataFromCloud") == 0) {
            // Process data from cloud
        }
    }
}

void Car::sendDataToCloud() {
    cMessage* msg = new cMessage("DataToCloud");
    send(msg, "toCloud");
}
