# Creating a python module from C++ classes

## Install the necessary tools
```sh
pip3 install scikit-build-core cmake
```

## Structure your project
```
Copymon_projet/
├── src/
│   └── mon_module/
│       ├── mon_module.cxx
│       └── mon_module.h
├── pyproject.toml
└── CMakeLists.txt
```

## Compile and create the wheel
```sh
pip3 wheel .
```
This command will generate the .whl file in the current directory.

To generate in a `dist` directory, use the following command:
```sh
pip3 wheel . -w dist
```

## Installing
To test the wheel, yoou can install it with the command
```sh
pip3 install mon_projet-0.1.0-...whl
```

### Note
If you work with different architectures or python versions, try to use cibuildwheel to create comptatible wheels for different plateforms:

```sh
pip install cibuildwheel
cibuildwheel --platform macosx
```

## Checking the installation
```sh
pip3 show mon_projet
```

## Testing

Then, you can import and use your module

```python
import mon_module
obj = mon_module.MaClasse(42)
print(obj.getValeur())  # Affiche 42
```

Run this command:
```sh
python3 test/script.py
```
