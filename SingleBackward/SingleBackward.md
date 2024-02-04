# 🚨 Single LED backward

![singleBackward](https://github.com/Edveika/Arduino-LED/assets/113787144/c86a1e9b-31f2-4fc3-8918-1791ec666515)

[Full source code](https://github.com/Edveika/Arduino-LED/blob/main/SingleBackward/SingleBackward.ino)

# 🧠 Main loop logic

```c++
  for (int i = LED_END; i >= LED_START; --i)
  {
    digitalWrite(i, LOW);
    delay(500);
    digitalWrite(i, HIGH);
    delay(500);
  }
```
