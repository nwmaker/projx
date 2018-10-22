# AutoPCB.app setup

## create virtualenv

```
virtualenv autopcb-env
source autopcb-env/bin/activate
```

## install libraries

```
cd ~/opt/autopcb-env/bin
pip install ~/opt/libs/pyparsing-1.5.7.zip
pip install ~/opt/libs/lxml-3.6.4.tar.gz
```

## install autopcb

```
cd ~/opt/autopcb
python setup.py install
```
