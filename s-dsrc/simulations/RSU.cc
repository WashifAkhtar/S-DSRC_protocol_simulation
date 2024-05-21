void RSU::handleMessage(cMessage* msg) {
    if (strcmp(msg->getName(), "DataToCloud") == 0) {
        // Forward data to cloud
        cMessage* response = new cMessage("DataFromCloud");
        send(response, "toCloud");
    } else if (strcmp(msg->getName(), "DataFromCloud") == 0) {
        // Process data from cloud
    }
}

void RSU::sendDataToCloud() {
    cMessage* msg = new cMessage("DataToCloud");
    send(msg, "toCloud");
}
