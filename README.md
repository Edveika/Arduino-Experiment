# 🤖 Arduino-Experiment

Just playing around with Arduino and LEDs.

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

# 📜 License

This project is licensed under the GPL v2 [LICENSE](LICENSE).
