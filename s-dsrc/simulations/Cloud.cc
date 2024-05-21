void Cloud::handleMessage(cMessage* msg) {
    if (strcmp(msg->getName(), "DataToCloud") == 0) {
        cMessage* response = new cMessage("DataFromCloud");
        send(response, "out");
    }
}
