double patientCalculation(int days, double rate, double medication, double services){
    return (days * rate) + medication + services;
}

double patientCalculation(double medication, double services){
    return medication + services;
}