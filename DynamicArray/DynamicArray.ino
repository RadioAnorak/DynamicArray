int* dynamicArray;
int length;

void setup() {

  Serial.begin(115200);

}

void loop() {

  // Set to change the size the array will reach
  for(int i = 1; i <= 1000; i++){

    length = i;

    // Create the array

    dynamicArray = new int[length];

    // Assign numbers to the array

    for(int j = 0; j < length; j++){

      dynamicArray[j] = j;

    }

    // Print the array to prove the variables are stored

    for(int z = 0; z < length; z++){

      // MOD to stop it overflowing the size of the serial monitor
      if(z % 100 == 0){

        Serial.print(dynamicArray[z], DEC);
        Serial.print(" ");

      }
      

    }

    Serial.println();
    
    delete[] dynamicArray; //delete when not in use anymore

    // Delay to see the array coming through a bit nicer visually

    delay(1);

  }

  delay(1000);
  
}
