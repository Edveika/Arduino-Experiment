# 🚨 Arduino-LED

Just playing around with Arduino and LEDs.

![1707073295953](https://github.com/Edveika/Arduino-LED/assets/113787144/224210dc-afc0-4b1b-9d4f-c1398ef482b0)

# 📚 Content

* Blink transitions
  * All LEDs forward
  * All LEDs backward
  * All LEDs bounce
  * LEDs left to right
  * LEDs right to left
  * Single LED forward
  * Single LED backward
  * Single LED blink
  * Single LED bounce
  * Single LED dim

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

# 🧠 Ideas

1. Get RGB LEDs and use sorting algorithms to sort LEDs by color(visualize sorting algs)

# 📜 License

This project is licensed under the GPL v2 [LICENSE](LICENSE).
