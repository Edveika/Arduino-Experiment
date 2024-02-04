# 🎈 Single LED bounce

![singleBounce](https://github.com/Edveika/Arduino-LED/assets/113787144/cab28a1a-a70f-4d6f-b70e-a23b2bba74e4)

[Full source code](https://github.com/Edveika/Arduino-LED/blob/main/SingleBounce/SingleBounce.ino)

# 🧠 Main loop logic

```c++
  // Go backwards
  for (int i = LED_END; i >= LED_START; --i)
  {
    digitalWrite(i, LOW);
    delay(500);
    digitalWrite(i, HIGH);
    delay(500);
  }

  // Go forwards
  for (int i = LED_START; i <= LED_END; ++i)
  {
    digitalWrite(i, LOW);
    delay(500);
    digitalWrite(i, HIGH);
    delay(500);
  }
```
