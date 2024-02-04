# 🦘 All LEDs bounce

![bounceAll](https://github.com/Edveika/Arduino-LED/assets/113787144/3144d23c-44c4-4641-b688-7e8e58a5524b)

[Full source code](https://github.com/Edveika/Arduino-LED/blob/main/BounceAll/BounceAll.ino)

# 🧠 Main loop logic

```c++
  // Go backwards
  for (int i = LED_END; i >= LED_START; --i)
  {
    digitalWrite(i, LOW);
    delay(100);

    // Turn on all of the LEDs to the right
    for (int j = i - 1; j >= LED_START; --j)
    {
      digitalWrite(j, LOW);
      delay(10);
    }
    // Turn off all of the LEDs to the left
    for (int j = LED_START; j < i; ++j)
    {
      digitalWrite(j, HIGH);
      delay(10);
    }
    
    digitalWrite(i, HIGH);
    delay(100);
  }

  // Go forwards
  for (int i = LED_START; i <= LED_END; ++i)
  {
    digitalWrite(i, LOW);
    delay(100);

    // Turn on all of the LEDs to the left
    for (int j = i + 1; j <= LED_END; ++j)
    {
      digitalWrite(j, LOW);
      delay(10);
    }
    // Turn off all of the LEDs to the right
    for (int j = LED_END; j > i; --j)
    {
      digitalWrite(j, HIGH);
      delay(10);
    }
    digitalWrite(i, HIGH);
    delay(100);
  }
```
