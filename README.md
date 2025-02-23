This project provides a minimal repro for what looks like a slight anomaly with std::asin.

The value of std::asin(1.0f) should be pi/2. However, I find the following slight mismatch:

std::numbers::pi_v<float>/2: 0x1.921fb6p+0
asin(1.0f)                 : 0x1.921fb4p+0

I cannot reproduce this on compiler explorer but rather with the following set up:

Homebrew clang version 19.1.6
Target: arm64-apple-darwin24.3.0
