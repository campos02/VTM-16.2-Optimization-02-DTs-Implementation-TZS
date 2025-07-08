//RAMIRO - VTM 16.2 - Otimização Inter-Quadros - Implementação de DTs no TZS

#include "DT_TZS_32x16.h"

#include <string.h>
void DT_TZS_32x16::score(double * input, double * output) {
    double var0[2];
    if (input[19] <= 2.5) {
        if (input[6] <= 0.5) {
            if (input[21] <= 1626.5) {
                if (input[21] <= 674.5) {
                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[17] <= 40.0) {
                        memcpy(var0, (const double[]){0.005166475315729047, 0.994833524684271}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (const double[]){0.125, 0.875}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[13] <= -2.0) {
                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[13] <= 2.0) {
                        if (input[17] <= 22.0) {
                            if (input[17] <= 16.0) {
                                memcpy(var0, (const double[]){0.005449591280653951, 0.9945504087193461}, 2 * sizeof(double));
                            } else {
                                if (input[14] <= -2.0) {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[14] <= 2.0) {
                                        if (input[20] <= 35.0) {
                                            memcpy(var0, (const double[]){0.6731707317073171, 0.32682926829268294}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.19161676646706588, 0.8083832335329342}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[16] <= 2.0) {
                                if (input[16] <= -2.0) {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[20] <= 35.0) {
                                        memcpy(var0, (const double[]){0.9917627677100495, 0.008237232289950576}, 2 * sizeof(double));
                                    } else {
                                        if (input[7] <= -6.0) {
                                            memcpy(var0, (const double[]){0.9850746268656716, 0.014925373134328358}, 2 * sizeof(double));
                                        } else {
                                            if (input[7] <= 2.0) {
                                                memcpy(var0, (const double[]){0.5, 0.5}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.9547738693467337, 0.04522613065326633}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            } else {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    } else {
        if (input[11] <= 7.5) {
            if (input[17] <= 15.5) {
                if (input[11] <= 6.5) {
                    if (input[17] <= 13.5) {
                        if (input[17] <= 12.5) {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[19] <= 6.5) {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[17] <= 14.5) {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[5] <= 1016.0) {
                                if (input[14] <= -2.0) {
                                    if (input[8] <= -14.0) {
                                        if (input[8] <= -332.0) {
                                            if (input[23] <= -48.5) {
                                                memcpy(var0, (const double[]){0.9835164835164835, 0.016483516483516484}, 2 * sizeof(double));
                                            } else {
                                                if (input[20] <= 32.0) {
                                                    memcpy(var0, (const double[]){0.6482758620689655, 0.35172413793103446}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.9166666666666666, 0.08333333333333333}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[14] <= -324.0) {
                                                memcpy(var0, (const double[]){0.03349282296650718, 0.9665071770334929}, 2 * sizeof(double));
                                            } else {
                                                if (input[22] <= -11.5) {
                                                    if (input[0] <= 24.5) {
                                                        memcpy(var0, (const double[]){0.4794952681388013, 0.5205047318611987}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8369942196531792, 0.1630057803468208}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[6] <= 2.5) {
                                                        if (input[14] <= -18.0) {
                                                            if (input[8] <= -28.0) {
                                                                memcpy(var0, (const double[]){0.5061530230069556, 0.4938469769930444}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.08235294117647059, 0.9176470588235294}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7607843137254902, 0.23921568627450981}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.07865168539325842, 0.9213483146067416}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[14] <= 2.0) {
                                        if (input[13] <= -2.0) {
                                            if (input[7] <= -56.0) {
                                                if (input[13] <= -194.0) {
                                                    if (input[7] <= -200.0) {
                                                        if (input[22] <= -61.5) {
                                                            memcpy(var0, (const double[]){0.967741935483871, 0.03225806451612903}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[8] <= 8.0) {
                                                                memcpy(var0, (const double[]){0.5974955277280859, 0.40250447227191416}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.23423423423423423, 0.7657657657657657}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.01904761904761905, 0.9809523809523809}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[8] <= 4.0) {
                                                        if (input[13] <= -160.0) {
                                                            memcpy(var0, (const double[]){0.9820051413881749, 0.017994858611825194}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7333333333333333, 0.26666666666666666}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.17777777777777778, 0.8222222222222222}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.12903225806451613, 0.8709677419354839}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[13] <= 2.0) {
                                                if (input[16] <= -4.0) {
                                                    memcpy(var0, (const double[]){0.3170731707317073, 0.6829268292682927}, 2 * sizeof(double));
                                                } else {
                                                    if (input[22] <= 0.5) {
                                                        memcpy(var0, (const double[]){0.9961597542242704, 0.0038402457757296467}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9423558897243107, 0.05764411027568922}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[7] <= 12.0) {
                                                    memcpy(var0, (const double[]){0.12063492063492064, 0.8793650793650793}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.6517412935323383, 0.3482587064676617}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[8] <= 12.0) {
                                            memcpy(var0, (const double[]){0.08284023668639054, 0.9171597633136095}, 2 * sizeof(double));
                                        } else {
                                            if (input[20] <= 32.0) {
                                                memcpy(var0, (const double[]){0.5496031746031746, 0.4503968253968254}, 2 * sizeof(double));
                                            } else {
                                                if (input[22] <= -0.5) {
                                                    memcpy(var0, (const double[]){0.8798586572438163, 0.12014134275618374}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.5714285714285714, 0.42857142857142855}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[13] <= -2.0) {
                                    if (input[0] <= 29.5) {
                                        if (input[15] <= -496.0) {
                                            memcpy(var0, (const double[]){0.8070175438596491, 0.19298245614035087}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.4444444444444444, 0.5555555555555556}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.897119341563786, 0.102880658436214}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[13] <= 2.0) {
                                        if (input[14] <= -2.0) {
                                            memcpy(var0, (const double[]){0.5945945945945946, 0.40540540540540543}, 2 * sizeof(double));
                                        } else {
                                            if (input[23] <= 0.5) {
                                                memcpy(var0, (const double[]){0.9900917431192661, 0.009908256880733945}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.7640449438202247, 0.23595505617977527}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.735202492211838, 0.26479750778816197}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[19] <= 6.5) {
                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[17] <= 16.5) {
                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[6] <= 2.5) {
                        if (input[17] <= 17.5) {
                            if (input[15] <= -2.0) {
                                if (input[20] <= 33.0) {
                                    if (input[21] <= 1854.0) {
                                        if (input[20] <= 30.5) {
                                            if (input[21] <= 19.0) {
                                                memcpy(var0, (const double[]){0.3884297520661157, 0.6115702479338843}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.6383467278989667, 0.3616532721010333}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.8471177944862155, 0.15288220551378445}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[7] <= 14.0) {
                                            memcpy(var0, (const double[]){0.3412322274881517, 0.6587677725118484}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.614065180102916, 0.38593481989708406}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[22] <= 3.5) {
                                        if (input[21] <= 2694.5) {
                                            if (input[11] <= 6.5) {
                                                memcpy(var0, (const double[]){0.6495176848874598, 0.3504823151125402}, 2 * sizeof(double));
                                            } else {
                                                if (input[21] <= 1867.0) {
                                                    memcpy(var0, (const double[]){0.9662921348314607, 0.033707865168539325}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.7990762124711316, 0.20092378752886836}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[5] <= 684.0) {
                                                memcpy(var0, (const double[]){0.5173362685745735, 0.4826637314254265}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.7762430939226519, 0.22375690607734808}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.9006289308176101, 0.09937106918238994}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[13] <= 2.0) {
                                    if (input[13] <= -2.0) {
                                        if (input[5] <= 696.0) {
                                            if (input[7] <= -10.0) {
                                                memcpy(var0, (const double[]){0.7562310030395136, 0.24376899696048632}, 2 * sizeof(double));
                                            } else {
                                                if (input[22] <= 7.5) {
                                                    if (input[21] <= 1442.5) {
                                                        memcpy(var0, (const double[]){0.6161137440758294, 0.38388625592417064}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.24862888482632542, 0.7513711151736746}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.8846153846153846, 0.11538461538461539}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[22] <= 1.5) {
                                                if (input[5] <= 2104.0) {
                                                    memcpy(var0, (const double[]){0.6884272997032641, 0.3115727002967359}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[12] <= 8.0) {
                                                    memcpy(var0, (const double[]){0.9835526315789473, 0.01644736842105263}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.8163265306122449, 0.1836734693877551}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[15] <= 2.0) {
                                            if (input[16] <= 2.0) {
                                                if (input[16] <= -2.0) {
                                                    if (input[8] <= -14.0) {
                                                        memcpy(var0, (const double[]){0.8636363636363636, 0.13636363636363635}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[8] <= 12.0) {
                                                            memcpy(var0, (const double[]){0.4888888888888889, 0.5111111111111111}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8609271523178808, 0.1390728476821192}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[14] <= -2.0) {
                                                        if (input[8] <= -10.0) {
                                                            memcpy(var0, (const double[]){0.9230769230769231, 0.07692307692307693}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[11] <= 6.5) {
                                                                memcpy(var0, (const double[]){0.8734177215189873, 0.12658227848101267}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.3247232472324723, 0.6752767527675276}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[14] <= 2.0) {
                                                            if (input[18] <= 0.5) {
                                                                memcpy(var0, (const double[]){0.9962661981111355, 0.0037338018888644848}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[12] <= 8.0) {
                                                                    memcpy(var0, (const double[]){0.9623682890115404, 0.03763171098845961}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.7703180212014135, 0.22968197879858657}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[21] <= 2685.0) {
                                                                memcpy(var0, (const double[]){0.9368029739776952, 0.06319702602230483}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6289308176100629, 0.3710691823899371}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[20] <= 35.0) {
                                                    if (input[22] <= -0.5) {
                                                        memcpy(var0, (const double[]){0.1956521739130435, 0.8043478260869565}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6004415011037527, 0.3995584988962472}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[21] <= 4666.5) {
                                                        memcpy(var0, (const double[]){0.912718204488778, 0.08728179551122195}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.5494505494505495, 0.45054945054945056}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[5] <= 924.0) {
                                                memcpy(var0, (const double[]){0.4406196213425129, 0.5593803786574871}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.9261083743842364, 0.07389162561576355}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[5] <= 876.0) {
                                        if (input[21] <= 2307.5) {
                                            if (input[11] <= 6.5) {
                                                memcpy(var0, (const double[]){0.5157593123209169, 0.48424068767908307}, 2 * sizeof(double));
                                            } else {
                                                if (input[20] <= 33.0) {
                                                    memcpy(var0, (const double[]){0.664576802507837, 0.335423197492163}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.9285714285714286, 0.07142857142857142}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[7] <= 42.0) {
                                                if (input[5] <= 472.0) {
                                                    memcpy(var0, (const double[]){0.23609226594301222, 0.7639077340569878}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.5333333333333333, 0.4666666666666667}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[4] <= 1480.0) {
                                                    memcpy(var0, (const double[]){0.5220883534136547, 0.4779116465863454}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.8214285714285714, 0.17857142857142858}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[22] <= 85.5) {
                                            memcpy(var0, (const double[]){0.7891682785299806, 0.21083172147001933}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.9898305084745763, 0.010169491525423728}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[17] <= 18.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[19] <= 6.5) {
                                    if (input[17] <= 19.5) {
                                        if (input[21] <= 1787.5) {
                                            if (input[6] <= 0.5) {
                                                memcpy(var0, (const double[]){0.1875, 0.8125}, 2 * sizeof(double));
                                            } else {
                                                if (input[11] <= 6.5) {
                                                    if (input[20] <= 32.0) {
                                                        memcpy(var0, (const double[]){0.4691358024691358, 0.5308641975308642}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8080808080808081, 0.1919191919191919}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[20] <= 28.5) {
                                                        memcpy(var0, (const double[]){0.7740916271721959, 0.2259083728278041}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9425465838509317, 0.05745341614906832}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[22] <= -3.5) {
                                                if (input[20] <= 34.5) {
                                                    memcpy(var0, (const double[]){0.35752212389380533, 0.6424778761061947}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.5916666666666667, 0.4083333333333333}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[13] <= 6.0) {
                                                    if (input[13] <= -2.0) {
                                                        if (input[7] <= -14.0) {
                                                            memcpy(var0, (const double[]){0.6948051948051948, 0.3051948051948052}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.43089430894308944, 0.5691056910569106}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.789838337182448, 0.21016166281755197}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[5] <= 952.0) {
                                                        memcpy(var0, (const double[]){0.4921968787515006, 0.5078031212484994}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8472222222222222, 0.1527777777777778}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[17] <= 20.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 21.5) {
                                                if (input[20] <= 33.0) {
                                                    if (input[4] <= 1928.0) {
                                                        memcpy(var0, (const double[]){0.5980066445182725, 0.4019933554817276}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.21052631578947367, 0.7894736842105263}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.7148347425057648, 0.2851652574942352}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[17] <= 22.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 23.5) {
                                                        memcpy(var0, (const double[]){0.6355785837651122, 0.3644214162348877}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 24.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[20] <= 30.5) {
                                                                if (input[21] <= 568.5) {
                                                                    memcpy(var0, (const double[]){0.48872180451127817, 0.5112781954887218}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[6] <= 1.5) {
                                                                        memcpy(var0, (const double[]){0.8347107438016529, 0.1652892561983471}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.5951557093425606, 0.40484429065743943}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[17] <= 25.5) {
                                                                    memcpy(var0, (const double[]){0.7131147540983607, 0.28688524590163933}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[17] <= 26.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[17] <= 27.5) {
                                                                            memcpy(var0, (const double[]){0.6283783783783784, 0.3716216216216216}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[17] <= 28.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.8476312419974392, 0.1523687580025608}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[20] <= 24.5) {
                            memcpy(var0, (const double[]){0.44052863436123346, 0.5594713656387665}, 2 * sizeof(double));
                        } else {
                            if (input[17] <= 17.5) {
                                memcpy(var0, (const double[]){0.043668122270742356, 0.9563318777292577}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.1861777150916784, 0.8138222849083215}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            if (input[11] <= 17.5) {
                if (input[19] <= 6.5) {
                    if (input[17] <= 13.5) {
                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        if (input[17] <= 14.5) {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[17] <= 15.5) {
                                if (input[6] <= 0.5) {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[5] <= 1492.0) {
                                        if (input[15] <= -456.0) {
                                            memcpy(var0, (const double[]){0.16243654822335024, 0.8375634517766497}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.09663409337676439, 0.9033659066232356}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.37735849056603776, 0.6226415094339622}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[17] <= 16.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[17] <= 17.5) {
                                        if (input[11] <= 8.5) {
                                            if (input[6] <= 0.5) {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[8] <= -388.0) {
                                                    memcpy(var0, (const double[]){0.7311827956989247, 0.26881720430107525}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.35173697270471466, 0.6482630272952854}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[12] <= 3.0) {
                                                if (input[18] <= 0.5) {
                                                    memcpy(var0, (const double[]){0.09087210090872101, 0.909127899091279}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[17] <= 18.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 19.5) {
                                                if (input[11] <= 10.5) {
                                                    if (input[6] <= 0.5) {
                                                        if (input[21] <= 904.0) {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 0.5) {
                                                                memcpy(var0, (const double[]){0.37446808510638296, 0.625531914893617}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.10161662817551963, 0.8983833718244804}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[12] <= 8.0) {
                                                            if (input[12] <= 3.0) {
                                                                if (input[5] <= 1284.0) {
                                                                    if (input[11] <= 9.5) {
                                                                        if (input[11] <= 8.5) {
                                                                            memcpy(var0, (const double[]){0.38678485092667203, 0.613215149073328}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[6] <= 2.5) {
                                                                                if (input[21] <= 1903.5) {
                                                                                    memcpy(var0, (const double[]){0.5207756232686981, 0.4792243767313019}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[4] <= 1392.0) {
                                                                                        if (input[22] <= 36.5) {
                                                                                            if (input[21] <= 3354.5) {
                                                                                                memcpy(var0, (const double[]){0.2972292191435768, 0.7027707808564232}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.134, 0.866}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.6, 0.4}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.42900302114803623, 0.5709969788519638}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.08080808080808081, 0.9191919191919192}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[20] <= 26.0) {
                                                                            memcpy(var0, (const double[]){0.29815303430079154, 0.7018469656992085}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.48105181747873166, 0.5189481825212684}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.6042296072507553, 0.3957703927492447}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[21] <= 1599.0) {
                                                                    memcpy(var0, (const double[]){0.9393939393939394, 0.06060606060606061}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.680365296803653, 0.319634703196347}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[21] <= 1377.0) {
                                                                memcpy(var0, (const double[]){0.5132743362831859, 0.48672566371681414}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.1120584652862363, 0.8879415347137637}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[6] <= 0.5) {
                                                        memcpy(var0, (const double[]){0.019230769230769232, 0.9807692307692307}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[11] <= 11.5) {
                                                            memcpy(var0, (const double[]){0.0313588850174216, 0.9686411149825784}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[21] <= 3283.0) {
                                                                if (input[4] <= 1416.0) {
                                                                    memcpy(var0, (const double[]){0.16507936507936508, 0.834920634920635}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.03626220362622036, 0.9637377963737797}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.19623131903833657, 0.8037686809616634}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[17] <= 20.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 21.5) {
                                                        if (input[11] <= 12.5) {
                                                            if (input[12] <= 8.0) {
                                                                if (input[12] <= 3.0) {
                                                                    if (input[6] <= 0.5) {
                                                                        if (input[11] <= 9.5) {
                                                                            if (input[21] <= 1220.5) {
                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.43790849673202614, 0.5620915032679739}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[21] <= 829.5) {
                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.20242914979757085, 0.7975708502024291}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[11] <= 11.5) {
                                                                            memcpy(var0, (const double[]){0.3587333003463632, 0.6412666996536368}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[20] <= 26.0) {
                                                                                if (input[21] <= 3478.0) {
                                                                                    memcpy(var0, (const double[]){0.22727272727272727, 0.7727272727272727}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.5539568345323741, 0.4460431654676259}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.6128472222222222, 0.3871527777777778}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.8134171907756813, 0.18658280922431866}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.22644628099173553, 0.7735537190082644}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[6] <= 0.5) {
                                                                memcpy(var0, (const double[]){0.028985507246376812, 0.9710144927536232}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[11] <= 13.5) {
                                                                    memcpy(var0, (const double[]){0.04044943820224719, 0.9595505617977528}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.15804878048780488, 0.8419512195121951}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[17] <= 22.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 23.5) {
                                                                if (input[11] <= 14.5) {
                                                                    if (input[6] <= 0.5) {
                                                                        if (input[21] <= 803.0) {
                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[11] <= 9.5) {
                                                                                memcpy(var0, (const double[]){0.5474254742547425, 0.45257452574525747}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[18] <= 0.5) {
                                                                                    memcpy(var0, (const double[]){0.36764705882352944, 0.6323529411764706}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.10766045548654245, 0.8923395445134575}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[11] <= 11.5) {
                                                                            if (input[11] <= 10.5) {
                                                                                memcpy(var0, (const double[]){0.3830877642536835, 0.6169122357463165}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[16] <= -72.0) {
                                                                                    memcpy(var0, (const double[]){0.04225352112676056, 0.9577464788732394}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[18] <= 0.5) {
                                                                                        memcpy(var0, (const double[]){0.3412844036697248, 0.6587155963302752}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.13457943925233645, 0.8654205607476636}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[20] <= 28.5) {
                                                                                memcpy(var0, (const double[]){0.3641025641025641, 0.6358974358974359}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.5876821814762576, 0.4123178185237424}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.1447721179624665, 0.8552278820375335}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[17] <= 24.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[18] <= 0.5) {
                                                                        if (input[17] <= 25.5) {
                                                                            if (input[21] <= 663.0) {
                                                                                if (input[6] <= 0.5) {
                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[20] <= 27.0) {
                                                                                        memcpy(var0, (const double[]){0.23107569721115537, 0.7689243027888446}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.5431034482758621, 0.45689655172413796}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[11] <= 15.5) {
                                                                                    if (input[12] <= 10.0) {
                                                                                        if (input[4] <= 1008.0) {
                                                                                            if (input[5] <= 1032.0) {
                                                                                                memcpy(var0, (const double[]){0.4751020408163265, 0.5248979591836734}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.8571428571428571, 0.14285714285714285}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.35490196078431374, 0.6450980392156863}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.20069204152249134, 0.7993079584775087}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[11] <= 16.5) {
                                                                                        memcpy(var0, (const double[]){0.662613981762918, 0.3373860182370821}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.234375, 0.765625}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[17] <= 26.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[21] <= 483.5) {
                                                                                    if (input[6] <= 0.5) {
                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[20] <= 24.5) {
                                                                                            if (input[16] <= -8.0) {
                                                                                                memcpy(var0, (const double[]){0.6829268292682927, 0.3170731707317073}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.23904382470119523, 0.7609561752988048}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.6825568797399784, 0.3174431202600217}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[17] <= 27.5) {
                                                                                        memcpy(var0, (const double[]){0.5119250425894378, 0.48807495741056217}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[17] <= 28.5) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[17] <= 29.5) {
                                                                                                memcpy(var0, (const double[]){0.46684350132625996, 0.53315649867374}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[17] <= 30.5) {
                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[17] <= 31.5) {
                                                                                                        memcpy(var0, (const double[]){0.4499572284003422, 0.5500427715996579}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[17] <= 32.5) {
                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[17] <= 33.5) {
                                                                                                                memcpy(var0, (const double[]){0.4672897196261682, 0.5327102803738317}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[17] <= 34.5) {
                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[17] <= 35.5) {
                                                                                                                        memcpy(var0, (const double[]){0.46353322528363045, 0.5364667747163695}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[17] <= 36.5) {
                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[17] <= 37.5) {
                                                                                                                                memcpy(var0, (const double[]){0.43070362473347545, 0.5692963752665245}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[17] <= 38.5) {
                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[16] <= -526.0) {
                                                                                                                                        memcpy(var0, (const double[]){0.41106719367588934, 0.5889328063241107}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        if (input[16] <= 62.0) {
                                                                                                                                            if (input[17] <= 39.5) {
                                                                                                                                                memcpy(var0, (const double[]){0.5228758169934641, 0.477124183006536}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                if (input[17] <= 40.5) {
                                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    memcpy(var0, (const double[]){0.7702702702702703, 0.22972972972972974}, 2 * sizeof(double));
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        } else {
                                                                                                                                            memcpy(var0, (const double[]){0.49676025917926564, 0.5032397408207343}, 2 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[6] <= 2.5) {
                                                                            if (input[6] <= 0.5) {
                                                                                if (input[20] <= 44.0) {
                                                                                    if (input[11] <= 12.0) {
                                                                                        if (input[17] <= 25.5) {
                                                                                            memcpy(var0, (const double[]){0.35294117647058826, 0.6470588235294118}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[20] <= 39.0) {
                                                                                                memcpy(var0, (const double[]){0.670995670995671, 0.329004329004329}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.3185840707964602, 0.6814159292035398}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (input[17] <= 35.5) {
                                                                                            memcpy(var0, (const double[]){0.23861852433281006, 0.7613814756671899}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.5390070921985816, 0.46099290780141844}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[17] <= 31.5) {
                                                                                    if (input[22] <= -4.5) {
                                                                                        memcpy(var0, (const double[]){0.31456953642384106, 0.6854304635761589}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.4959183673469388, 0.5040816326530613}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[17] <= 32.5) {
                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.5835010060362174, 0.4164989939637827}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[17] <= 31.5) {
                                                                                memcpy(var0, (const double[]){0.1381957773512476, 0.8618042226487524}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.3567362428842505, 0.6432637571157496}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[6] <= 2.5) {
                    if (input[4] <= 944.0) {
                        if (input[7] <= -702.0) {
                            if (input[18] <= 0.5) {
                                if (input[4] <= 88.0) {
                                    if (input[16] <= -152.0) {
                                        memcpy(var0, (const double[]){0.821917808219178, 0.1780821917808219}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.9746245468669084, 0.025375453133091662}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[22] <= -452.5) {
                                        if (input[8] <= 4704.0) {
                                            memcpy(var0, (const double[]){0.9902755267423015, 0.009724473257698542}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.6, 0.4}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[20] <= 28.5) {
                                            if (input[4] <= 456.0) {
                                                if (input[7] <= -2520.0) {
                                                    if (input[5] <= 248.0) {
                                                        memcpy(var0, (const double[]){0.9919447640966629, 0.00805523590333717}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9266187050359712, 0.07338129496402877}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.7244094488188977, 0.2755905511811024}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[16] <= -420.0) {
                                                    if (input[4] <= 712.0) {
                                                        memcpy(var0, (const double[]){0.6358381502890174, 0.36416184971098264}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9272237196765498, 0.07277628032345014}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[8] <= 40.0) {
                                                        if (input[5] <= 404.0) {
                                                            memcpy(var0, (const double[]){0.7850467289719626, 0.21495327102803738}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.4735202492211838, 0.5264797507788161}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.2709677419354839, 0.7290322580645161}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[21] <= 9933.5) {
                                                if (input[8] <= 922.0) {
                                                    if (input[22] <= -347.0) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[5] <= 1016.0) {
                                                            if (input[7] <= -2984.0) {
                                                                memcpy(var0, (const double[]){0.9271916790490342, 0.07280832095096583}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.8063858695652174, 0.19361413043478262}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8996692392502756, 0.10033076074972437}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[5] <= 1092.0) {
                                                        if (input[13] <= -1808.0) {
                                                            memcpy(var0, (const double[]){0.9281437125748503, 0.0718562874251497}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7272727272727273, 0.2727272727272727}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[22] <= -225.5) {
                                                            memcpy(var0, (const double[]){0.34782608695652173, 0.6521739130434783}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7953216374269005, 0.2046783625730994}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[21] <= 30903.5) {
                                                    if (input[13] <= -2144.0) {
                                                        memcpy(var0, (const double[]){0.9858585858585859, 0.014141414141414142}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9254237288135593, 0.07457627118644068}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[17] <= 29.5) {
                                                        memcpy(var0, (const double[]){0.7511961722488039, 0.24880382775119617}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8984962406015038, 0.10150375939849623}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[6] <= 0.5) {
                                    memcpy(var0, (const double[]){0.25609756097560976, 0.7439024390243902}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.6325878594249201, 0.36741214057507987}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[18] <= 0.5) {
                                if (input[15] <= 126.0) {
                                    if (input[4] <= 72.0) {
                                        if (input[16] <= -2.0) {
                                            memcpy(var0, (const double[]){0.6980392156862745, 0.30196078431372547}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.900106269925611, 0.09989373007438895}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[20] <= 28.5) {
                                            if (input[8] <= 146.0) {
                                                if (input[19] <= 6.5) {
                                                    if (input[16] <= -578.0) {
                                                        memcpy(var0, (const double[]){0.2876712328767123, 0.7123287671232876}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[16] <= -56.0) {
                                                            memcpy(var0, (const double[]){0.8134715025906736, 0.18652849740932642}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[16] <= 84.0) {
                                                                if (input[15] <= -30.0) {
                                                                    memcpy(var0, (const double[]){0.7104477611940299, 0.28955223880597014}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.4907749077490775, 0.5092250922509225}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.8114285714285714, 0.18857142857142858}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[17] <= 37.5) {
                                                    if (input[16] <= -8.0) {
                                                        memcpy(var0, (const double[]){0.556390977443609, 0.44360902255639095}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.18513689700130379, 0.8148631029986962}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.5333333333333333, 0.4666666666666667}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[21] <= 1290542464.0) {
                                                if (input[21] <= -2042327680.0) {
                                                    memcpy(var0, (const double[]){0.16981132075471697, 0.8301886792452831}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 24.5) {
                                                        if (input[17] <= 23.5) {
                                                            if (input[6] <= 0.5) {
                                                                memcpy(var0, (const double[]){0.0821917808219178, 0.9178082191780822}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.8218694885361552, 0.1781305114638448}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[17] <= 25.5) {
                                                            memcpy(var0, (const double[]){0.25217391304347825, 0.7478260869565218}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 26.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[17] <= 27.5) {
                                                                    if (input[6] <= 0.5) {
                                                                        memcpy(var0, (const double[]){0.061855670103092786, 0.9381443298969072}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.40131578947368424, 0.5986842105263158}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[17] <= 28.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[17] <= 29.5) {
                                                                            if (input[6] <= 0.5) {
                                                                                memcpy(var0, (const double[]){0.04081632653061224, 0.9591836734693877}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.546031746031746, 0.45396825396825397}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[17] <= 30.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[17] <= 31.5) {
                                                                                    memcpy(var0, (const double[]){0.40498442367601245, 0.5950155763239875}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[17] <= 32.5) {
                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[17] <= 33.5) {
                                                                                            memcpy(var0, (const double[]){0.42207792207792205, 0.577922077922078}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[17] <= 34.5) {
                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[17] <= 35.5) {
                                                                                                    memcpy(var0, (const double[]){0.46153846153846156, 0.5384615384615384}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[17] <= 36.5) {
                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[23] <= 98.5) {
                                                                                                            if (input[6] <= 0.5) {
                                                                                                                if (input[17] <= 37.5) {
                                                                                                                    memcpy(var0, (const double[]){0.13157894736842105, 0.868421052631579}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[17] <= 38.5) {
                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[17] <= 39.5) {
                                                                                                                            memcpy(var0, (const double[]){0.1518987341772152, 0.8481012658227848}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[17] <= 40.5) {
                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.5741444866920152, 0.42585551330798477}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[7] <= 328.0) {
                                                                                                                    memcpy(var0, (const double[]){0.8638838475499092, 0.13611615245009073}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.6468842729970327, 0.35311572700296734}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.9030303030303031, 0.09696969696969697}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.2732919254658385, 0.7267080745341615}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[21] <= 1040.0) {
                                        if (input[17] <= 23.5) {
                                            memcpy(var0, (const double[]){0.6748466257668712, 0.32515337423312884}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 24.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[11] <= 19.0) {
                                                    memcpy(var0, (const double[]){0.5616438356164384, 0.4383561643835616}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.8927875243664717, 0.10721247563352826}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[6] <= 0.5) {
                                            memcpy(var0, (const double[]){0.5660377358490566, 0.4339622641509434}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.8002619515389653, 0.1997380484610347}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[6] <= 0.5) {
                                    if (input[20] <= 44.0) {
                                        memcpy(var0, (const double[]){0.32112068965517243, 0.6788793103448276}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.6307448494453248, 0.3692551505546751}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[20] <= 27.0) {
                            if (input[15] <= -554.0) {
                                if (input[15] <= -4244.0) {
                                    if (input[6] <= 0.5) {
                                        memcpy(var0, (const double[]){0.15450643776824036, 0.8454935622317596}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.7157894736842105, 0.28421052631578947}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[20] <= 24.5) {
                                        if (input[17] <= 31.5) {
                                            if (input[15] <= -1266.0) {
                                                memcpy(var0, (const double[]){0.45136186770428016, 0.5486381322957199}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.7313266443701226, 0.2686733556298774}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[17] <= 32.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 33.5) {
                                                    memcpy(var0, (const double[]){0.40476190476190477, 0.5952380952380952}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 34.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 35.5) {
                                                            memcpy(var0, (const double[]){0.3835616438356164, 0.6164383561643836}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 36.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[16] <= 1528.0) {
                                                                    memcpy(var0, (const double[]){0.7792642140468228, 0.22073578595317725}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.9767441860465116, 0.023255813953488372}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.4457831325301205, 0.5542168674698795}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[16] <= -2.0) {
                                    if (input[20] <= 24.5) {
                                        if (input[16] <= -154.0) {
                                            if (input[4] <= 2224.0) {
                                                memcpy(var0, (const double[]){0.9118881118881119, 0.08811188811188811}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.6642599277978339, 0.33574007220216606}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.6063348416289592, 0.3936651583710407}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.40148698884758366, 0.5985130111524164}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[16] <= 300.0) {
                                        if (input[19] <= 6.5) {
                                            if (input[4] <= 3672.0) {
                                                if (input[4] <= 1904.0) {
                                                    if (input[22] <= -739.0) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[16] <= 2.0) {
                                                            if (input[14] <= 30.0) {
                                                                if (input[13] <= -1768.0) {
                                                                    memcpy(var0, (const double[]){0.05555555555555555, 0.9444444444444444}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.3932411674347158, 0.6067588325652842}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[6] <= 0.5) {
                                                                    memcpy(var0, (const double[]){0.38267148014440433, 0.6173285198555957}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.1172093023255814, 0.8827906976744186}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[15] <= -500.0) {
                                                                memcpy(var0, (const double[]){0.16216216216216217, 0.8378378378378378}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.625, 0.375}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[23] <= 0.5) {
                                                        if (input[15] <= -280.0) {
                                                            if (input[16] <= 36.0) {
                                                                memcpy(var0, (const double[]){0.375, 0.625}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.032467532467532464, 0.9675324675324676}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[16] <= 108.0) {
                                                                if (input[16] <= 20.0) {
                                                                    memcpy(var0, (const double[]){0.36257309941520466, 0.6374269005847953}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.046511627906976744, 0.9534883720930233}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.7428571428571429, 0.2571428571428571}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[15] <= -20.0) {
                                                            memcpy(var0, (const double[]){0.033311125916055964, 0.966688874083944}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.14044213263979194, 0.8595578673602081}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[22] <= 30.0) {
                                                    memcpy(var0, (const double[]){0.07692307692307693, 0.9230769230769231}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.8810289389067524, 0.1189710610932476}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[20] <= 24.5) {
                                            if (input[5] <= 912.0) {
                                                memcpy(var0, (const double[]){0.9657794676806084, 0.034220532319391636}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.3684210526315789, 0.631578947368421}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.29333333333333333, 0.7066666666666667}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[15] <= -538.0) {
                                if (input[5] <= 1272.0) {
                                    if (input[5] <= 596.0) {
                                        memcpy(var0, (const double[]){0.8285252711747058, 0.17147472882529424}, 2 * sizeof(double));
                                    } else {
                                        if (input[16] <= -78.0) {
                                            if (input[17] <= 27.5) {
                                                memcpy(var0, (const double[]){0.6858789625360231, 0.31412103746397696}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.862910008410429, 0.13708999158957108}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[17] <= 24.5) {
                                                memcpy(var0, (const double[]){0.8837209302325582, 0.11627906976744186}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 25.5) {
                                                    memcpy(var0, (const double[]){0.19607843137254902, 0.803921568627451}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 26.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 27.5) {
                                                            memcpy(var0, (const double[]){0.3815028901734104, 0.6184971098265896}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 28.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[17] <= 29.5) {
                                                                    memcpy(var0, (const double[]){0.2765957446808511, 0.723404255319149}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[17] <= 30.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[17] <= 31.5) {
                                                                            memcpy(var0, (const double[]){0.3157894736842105, 0.6842105263157895}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[17] <= 32.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[15] <= -1290.0) {
                                                                                    memcpy(var0, (const double[]){0.9212121212121213, 0.07878787878787878}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[22] <= 40.5) {
                                                                                        memcpy(var0, (const double[]){0.6332518337408313, 0.36674816625916873}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.8648648648648649, 0.13513513513513514}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[4] <= 1840.0) {
                                        memcpy(var0, (const double[]){0.7593582887700535, 0.24064171122994651}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.9314359637774903, 0.0685640362225097}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[16] <= 6.0) {
                                    if (input[18] <= 0.5) {
                                        if (input[16] <= -58.0) {
                                            if (input[4] <= 1288.0) {
                                                if (input[5] <= 340.0) {
                                                    memcpy(var0, (const double[]){0.4342105263157895, 0.5657894736842105}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.7896825396825397, 0.21031746031746032}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.8366972477064221, 0.163302752293578}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[19] <= 6.5) {
                                                if (input[21] <= -2042327680.0) {
                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[20] <= 33.5) {
                                                        if (input[7] <= -9944.0) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[21] <= 2657.5) {
                                                                memcpy(var0, (const double[]){0.6568580920740389, 0.3431419079259611}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[21] <= 3501.0) {
                                                                    memcpy(var0, (const double[]){0.20155038759689922, 0.7984496124031008}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[21] <= 41003904.0) {
                                                                        if (input[21] <= 15389.5) {
                                                                            memcpy(var0, (const double[]){0.5985401459854015, 0.40145985401459855}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.8695652173913043, 0.13043478260869565}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[21] <= 665775872.0) {
                                                                            memcpy(var0, (const double[]){0.029850746268656716, 0.9701492537313433}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.5889967637540453, 0.4110032362459547}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[15] <= -388.0) {
                                                            memcpy(var0, (const double[]){0.32954545454545453, 0.6704545454545454}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[22] <= -80.5) {
                                                                if (input[23] <= -60.5) {
                                                                    memcpy(var0, (const double[]){0.6233766233766234, 0.37662337662337664}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.9363636363636364, 0.06363636363636363}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[16] <= -34.0) {
                                                                    memcpy(var0, (const double[]){0.5060240963855421, 0.4939759036144578}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[20] <= 41.5) {
                                                                        memcpy(var0, (const double[]){0.784563506931435, 0.215436493068565}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.43478260869565216, 0.5652173913043478}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[6] <= 0.5) {
                                            memcpy(var0, (const double[]){0.2184873949579832, 0.7815126050420168}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.6462513199577613, 0.35374868004223864}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[20] <= 30.5) {
                                        if (input[4] <= 1928.0) {
                                            if (input[15] <= -218.0) {
                                                memcpy(var0, (const double[]){0.7194719471947195, 0.28052805280528054}, 2 * sizeof(double));
                                            } else {
                                                if (input[16] <= 476.0) {
                                                    memcpy(var0, (const double[]){0.2703862660944206, 0.7296137339055794}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.6534653465346535, 0.3465346534653465}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[4] <= 3696.0) {
                                                if (input[15] <= -340.0) {
                                                    if (input[22] <= 42.5) {
                                                        memcpy(var0, (const double[]){0.07337278106508875, 0.9266272189349113}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.3614457831325301, 0.6385542168674698}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[5] <= 652.0) {
                                                        memcpy(var0, (const double[]){0.6484018264840182, 0.3515981735159817}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.15086206896551724, 0.8491379310344828}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.9072164948453608, 0.09278350515463918}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[15] <= -342.0) {
                                            if (input[4] <= 2632.0) {
                                                if (input[20] <= 39.0) {
                                                    if (input[16] <= 200.0) {
                                                        memcpy(var0, (const double[]){0.3884057971014493, 0.6115942028985507}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.7536231884057971, 0.2463768115942029}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.7398843930635838, 0.26011560693641617}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[11] <= 29.5) {
                                                    if (input[0] <= 34.5) {
                                                        memcpy(var0, (const double[]){0.208955223880597, 0.7910447761194029}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6, 0.4}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.07547169811320754, 0.9245283018867925}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[18] <= 0.5) {
                                                if (input[21] <= 2375.0) {
                                                    memcpy(var0, (const double[]){0.8473019517795637, 0.15269804822043628}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.7139830508474576, 0.2860169491525424}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[6] <= 0.5) {
                                                    if (input[20] <= 44.0) {
                                                        memcpy(var0, (const double[]){0.32452830188679244, 0.6754716981132075}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.6784313725490196, 0.3215686274509804}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[18] <= 0.5) {
                        if (input[17] <= 39.5) {
                            if (input[21] <= 10914.5) {
                                if (input[21] <= 1972.0) {
                                    memcpy(var0, (const double[]){0.5609756097560976, 0.43902439024390244}, 2 * sizeof(double));
                                } else {
                                    if (input[15] <= -4.0) {
                                        memcpy(var0, (const double[]){0.7627877237851662, 0.23721227621483376}, 2 * sizeof(double));
                                    } else {
                                        if (input[5] <= 1324.0) {
                                            if (input[15] <= 12.0) {
                                                memcpy(var0, (const double[]){0.934640522875817, 0.06535947712418301}, 2 * sizeof(double));
                                            } else {
                                                if (input[4] <= 3096.0) {
                                                    memcpy(var0, (const double[]){0.8426395939086294, 0.15736040609137056}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.49056603773584906, 0.5094339622641509}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.5508982035928144, 0.4491017964071856}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 29.5) {
                                    if (input[15] <= -4.0) {
                                        memcpy(var0, (const double[]){0.9128686327077749, 0.0871313672922252}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.9724770642201835, 0.027522935779816515}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[17] <= 38.5) {
                                        if (input[17] <= 37.5) {
                                            if (input[21] <= 16593.5) {
                                                memcpy(var0, (const double[]){0.7344398340248963, 0.26556016597510373}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.8746010031919744, 0.12539899680802555}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.6081871345029239, 0.391812865497076}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[13] <= -3068.0) {
                                memcpy(var0, (const double[]){0.995711222301644, 0.004288777698355968}, 2 * sizeof(double));
                            } else {
                                if (input[17] <= 40.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[20] <= 36.5) {
                                        if (input[17] <= 54.5) {
                                            if (input[17] <= 41.5) {
                                                if (input[11] <= 32.5) {
                                                    memcpy(var0, (const double[]){0.9074889867841409, 0.09251101321585903}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.5029940119760479, 0.49700598802395207}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[17] <= 42.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 43.5) {
                                                        if (input[11] <= 35.0) {
                                                            if (input[11] <= 29.5) {
                                                                memcpy(var0, (const double[]){0.62, 0.38}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9326683291770573, 0.06733167082294264}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.37606837606837606, 0.6239316239316239}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[17] <= 44.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 45.5) {
                                                                memcpy(var0, (const double[]){0.8085106382978723, 0.19148936170212766}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[17] <= 46.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[11] <= 33.5) {
                                                                        if (input[21] <= 11548.0) {
                                                                            memcpy(var0, (const double[]){0.7421875, 0.2578125}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.9852941176470589, 0.014705882352941176}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[4] <= 1712.0) {
                                                                            memcpy(var0, (const double[]){0.9770387965162312, 0.022961203483768806}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.8841201716738197, 0.11587982832618025}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.6928571428571428, 0.30714285714285716}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.7049689440993789, 0.2950310559006211}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[13] <= -116.0) {
                            memcpy(var0, (const double[]){0.10869565217391304, 0.8913043478260869}, 2 * sizeof(double));
                        } else {
                            if (input[0] <= 34.5) {
                                memcpy(var0, (const double[]){0.42424242424242425, 0.5757575757575758}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.10294117647058823, 0.8970588235294118}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            }
        }
    }
    memcpy(output, var0, 2 * sizeof(double));
}
