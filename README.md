# Mimid

There are two parts for this experiment: The Python part and the C part.

The Python comparison is in PymimidBook.ipynb. It is a [jupyter notebook](https://jupyter.org/) which means that you need to install Jupyter if you want to rerun the experiments. If you simply want to view the results, clicking on the ipynb notebook will let you see all experiments.

The C part requires `LLVM` to be installed. Extract `taints.tar.gz` in the root directory of this repo (so that there exists a `taints` directory inside). Next, read the `taints/README`, and follow the instructions there. Finally, step out of the `taints` directory, cd into `Cmimid` and view the `Makefile`. In particular, make sure that the `taints` directory is set in the `pfuzzer` variable, and the `clang` version is correct (install the version in the Makefile if your clang version is wrong).

The targets of interest are: `build/*.fuzz` and `build/*.precision`. That is, to get the results for `mjs`, the targets would be `make build/mjs.fuzz` and `make build/mjs.precision`. Similarly for `tiny`, `build/tiny.precision` and `build/tiny.fuzz`. For `json`, use `make build/json.fuzz` and `make build/json.precision`.

Once these commans are run successfully, the results would be available in the build directory. That is,
```
cat build/*.precision
```
will give you precision results (i.e how many of the golden inputs were accepted by a parser using the mined grammar) while
```
cat build/*.fuzz
```
will give you recall results (i.e how many generated inputs using the mined grammar were accepted by the program).
