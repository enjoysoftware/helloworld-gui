#!/bin/bash
mkdir helloworld-gui-${TRAVIS_TAG}
cp app/helloworld-gui helloworld-gui-${TRAVIS_TAG}
bash scripts/copy-deps.sh helloworld-gui-${TRAVIS_TAG}/helloworld-gui helloworld-gui-${TRAVIS_TAG}
tar czvf helloworld-gui-${TRAVIS_TAG}_${TRAVIS_CPU_ARCH}.tar.gz helloworld-gui-${TRAVIS_TAG}
