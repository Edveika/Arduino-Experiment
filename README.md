# 🚨 Arduino-LED

Just playing around with Arduino and LEDs.

![1707073295953](https://github.com/Edveika/Arduino-LED/assets/113787144/224210dc-afc0-4b1b-9d4f-c1398ef482b0)

# 📚 LED Transitions

* [All forward](https://github.com/Edveika/Arduino-LED/blob/main/AllForward/AllForward.md)
* [All backward](https://github.com/Edveika/Arduino-LED/blob/main/AllBackward/AllBackward.md)
* [All bounce](https://github.com/Edveika/Arduino-LED/blob/main/BounceAll/BounceAll.md)
* [Left to right](https://github.com/Edveika/Arduino-LED/blob/main/LeftToRight/LeftToRight.md)
* [Right to left](https://github.com/Edveika/Arduino-LED/blob/main/RightToLeft/RightToLeft.md)
* [Single forward](https://github.com/Edveika/Arduino-LED/blob/main/SingleForward/SingleForward.md)
* [Single backward](https://github.com/Edveika/Arduino-LED/blob/main/SingleBackward/SingleBackward.md)
* [Single blink](https://github.com/Edveika/Arduino-LED/blob/main/SingleBlink/SingleBlink.md)
* [Single bounce](https://github.com/Edveika/Arduino-LED/blob/main/SingleBounce/SingleBounce.md)
* [Single dim](https://github.com/Edveika/Arduino-LED/blob/main/SingleDim/SingleDim.md)

# ⚠️ Disclaimer

For some reason `digitalWrite` with the value of `HIGH` turns the LED off on my board and the `LOW` value turns the LED on, even though on Arduino's site it says that it should work in the opposite way.

* Turn **OFF** LED:

```c++
digitalWrite(LED_BUILTIN, HIGH);
```
* Turn **ON** LED:

```c++
digitalWrite(LED_BUILTIN, LOW);
```

💥 Some transitions rely on this to work

# 🏃 Running

1. Plug in 8 LEDs, pins 2-9(or change START and END pin values in source code)
2. Make sure to change `digitalWrite` argument values `HIGH` to `LOW` and `LOW` to `HIGH` if needed
3. Upload firmware to Arduino
4. Enjoy

# 📜 License

This project is licensed under the GPL v2 [LICENSE](LICENSE).
