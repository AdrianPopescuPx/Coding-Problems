class ParkingSystem {

    private int bigParkingSpaces;

    private int mediumParkingSpaces;
    
    private int smallParkingSpaces;


    public ParkingSystem(int big, int medium, int small) {
        bigParkingSpaces = big;
        mediumParkingSpaces = medium;
        smallParkingSpaces = small;
    }
    
    public boolean addCar(int carType) {
        if (carType == 1 && bigParkingSpaces > 0) {
            bigParkingSpaces--;
            return true;
        }   else if (carType == 2 && mediumParkingSpaces > 0) {
            mediumParkingSpaces--;
            return true;
        }   else if (carType == 3 && smallParkingSpaces > 0){
            smallParkingSpaces--;
            return true;
        }
        return false;
    }
}