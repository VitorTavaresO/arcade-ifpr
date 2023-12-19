int readAxis(int thisAxis, int cursorSpeed, int threshold, int center) {
  int reading = analogRead(thisAxis);

  reading = map(reading, 0, 1023, 0, cursorSpeed);

  int distance = reading - center;

  if (abs(distance) < threshold) {
    distance = 0;
  }

  return distance;
}