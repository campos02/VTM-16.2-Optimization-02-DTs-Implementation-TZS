//RAMIRO - VTM 16.2 - Otimização Inter-Quadros - Implementação de DTs no TZS

#include "DT_TZS_128x64.h"

#include <string.h>
void DT_TZS_128x64::score(double * input, double * output) {
    double var0[2];
    if (input[19] <= 2.5) {
        if (input[17] <= 12.5) {
            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
        } else {
            if (input[11] <= 12.5) {
                memcpy(var0, (const double[]){0.00009303960385804224, 0.9999069603961419}, 2 * sizeof(double));
            } else {
                if (input[21] <= 70369.5) {
                    memcpy(var0, (const double[]){0.00005066112771670297, 0.9999493388722833}, 2 * sizeof(double));
                } else {
                    if (input[13] <= -2.0) {
                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        if (input[13] <= 2.0) {
                            if (input[6] <= 0.5) {
                                if (input[16] <= 2.0) {
                                    memcpy(var0, (const double[]){0.8852459016393442, 0.11475409836065574}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    }
                }
            }
        }
    } else {
        if (input[12] <= 8.5) {
            if (input[17] <= 15.5) {
                if (input[11] <= 6.5) {
                    if (input[17] <= 12.5) {
                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[17] <= 13.5) {
                            if (input[11] <= 4.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[17] <= 14.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[13] <= -2.0) {
                                    if (input[16] <= 220.0) {
                                        if (input[7] <= -12.0) {
                                            if (input[14] <= -340.0) {
                                                if (input[16] <= -340.0) {
                                                    memcpy(var0, (const double[]){0.9371069182389937, 0.06289308176100629}, 2 * sizeof(double));
                                                } else {
                                                    if (input[8] <= -352.0) {
                                                        memcpy(var0, (const double[]){0.42857142857142855, 0.5714285714285714}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.035343035343035345, 0.9646569646569647}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[22] <= -60.5) {
                                                    if (input[23] <= -17.0) {
                                                        if (input[13] <= -4356.0) {
                                                            memcpy(var0, (const double[]){0.12903225806451613, 0.8709677419354839}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[8] <= -368.0) {
                                                                memcpy(var0, (const double[]){0.08108108108108109, 0.918918918918919}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[14] <= -324.0) {
                                                                    if (input[8] <= -324.0) {
                                                                        memcpy(var0, (const double[]){0.679144385026738, 0.32085561497326204}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[22] <= -271.5) {
                                                                        if (input[13] <= -4344.0) {
                                                                            memcpy(var0, (const double[]){0.9774011299435028, 0.022598870056497175}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.5384615384615384, 0.46153846153846156}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.7227488151658767, 0.2772511848341232}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9787234042553191, 0.02127659574468085}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[21] <= 22625.5) {
                                                        if (input[6] <= 2.5) {
                                                            memcpy(var0, (const double[]){0.46796959826275786, 0.5320304017372421}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.08571428571428572, 0.9142857142857143}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[15] <= -396.0) {
                                                            memcpy(var0, (const double[]){0.5061728395061729, 0.49382716049382713}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9381443298969072, 0.061855670103092786}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.06557377049180328, 0.9344262295081968}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[14] <= 2.0) {
                                        if (input[14] <= -2.0) {
                                            if (input[8] <= -28.0) {
                                                if (input[4] <= 1280.0) {
                                                    memcpy(var0, (const double[]){0.45323741007194246, 0.5467625899280576}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.9819819819819819, 0.018018018018018018}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[4] <= 448.0) {
                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[8] <= -10.0) {
                                                        memcpy(var0, (const double[]){0.34328358208955223, 0.6567164179104478}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.0379746835443038, 0.9620253164556962}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[6] <= 0.5) {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[13] <= 4.0) {
                                                    if (input[16] <= -8.0) {
                                                        memcpy(var0, (const double[]){0.6842105263157895, 0.3157894736842105}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[7] <= 4.0) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[7] <= 12.0) {
                                                        memcpy(var0, (const double[]){0.02564102564102564, 0.9743589743589743}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.875, 0.125}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[8] <= 10.0) {
                                            memcpy(var0, (const double[]){0.03115264797507788, 0.9688473520249221}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.9393939393939394, 0.06060606060606061}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[17] <= 14.5) {
                        if (input[17] <= 13.5) {
                            if (input[19] <= 6.5) {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[11] <= 7.5) {
                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[22] <= -4.5) {
                                if (input[6] <= 0.5) {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[13] <= -140.0) {
                                        memcpy(var0, (const double[]){0.2240566037735849, 0.7759433962264151}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.07614213197969544, 0.9238578680203046}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[12] <= 5.0) {
                                    if (input[5] <= 1760.0) {
                                        memcpy(var0, (const double[]){0.03367496339677892, 0.9663250366032211}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.27450980392156865, 0.7254901960784313}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[17] <= 16.5) {
                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[11] <= 7.5) {
                        if (input[6] <= 2.5) {
                            if (input[21] <= 20189.5) {
                                if (input[6] <= 0.5) {
                                    if (input[21] <= 8023.5) {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[20] <= 35.0) {
                                            if (input[18] <= 0.5) {
                                                if (input[17] <= 19.5) {
                                                    if (input[16] <= -10.0) {
                                                        memcpy(var0, (const double[]){0.1891891891891892, 0.8108108108108109}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 18.5) {
                                                            if (input[17] <= 17.5) {
                                                                if (input[13] <= -6.0) {
                                                                    memcpy(var0, (const double[]){0.4642857142857143, 0.5357142857142857}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.9242424242424242, 0.07575757575757576}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.3805309734513274, 0.6194690265486725}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[17] <= 20.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8869346733668342, 0.11306532663316583}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[17] <= 18.0) {
                                                    if (input[13] <= -6.0) {
                                                        memcpy(var0, (const double[]){0.696969696969697, 0.30303030303030304}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9655172413793104, 0.034482758620689655}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[17] <= 19.5) {
                                                        if (input[7] <= -18.0) {
                                                            memcpy(var0, (const double[]){0.5737704918032787, 0.4262295081967213}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.08280254777070063, 0.9171974522292994}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.5916666666666667, 0.4083333333333333}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[18] <= 0.5) {
                                                if (input[17] <= 23.5) {
                                                    if (input[20] <= 44.0) {
                                                        if (input[0] <= 29.5) {
                                                            memcpy(var0, (const double[]){0.8, 0.2}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[21] <= 9977.0) {
                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[22] <= -0.5) {
                                                                    memcpy(var0, (const double[]){0.10638297872340426, 0.8936170212765957}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.5511811023622047, 0.44881889763779526}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.92, 0.08}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[15] <= 6.0) {
                                                    memcpy(var0, (const double[]){0.14285714285714285, 0.8571428571428571}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.004524886877828055, 0.995475113122172}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[17] <= 17.5) {
                                        if (input[9] <= 8.0) {
                                            if (input[13] <= 8.0) {
                                                if (input[16] <= 8.0) {
                                                    if (input[16] <= -8.0) {
                                                        if (input[8] <= -8.0) {
                                                            if (input[14] <= -376.0) {
                                                                if (input[13] <= -4320.0) {
                                                                    memcpy(var0, (const double[]){0.1111111111111111, 0.8888888888888888}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.6521739130434783, 0.34782608695652173}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[14] <= -296.0) {
                                                                    memcpy(var0, (const double[]){0.7466666666666667, 0.25333333333333335}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.4845814977973568, 0.5154185022026432}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[10] <= -24.0) {
                                                                memcpy(var0, (const double[]){0.76, 0.24}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.19186046511627908, 0.8081395348837209}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[15] <= -8.0) {
                                                            if (input[22] <= -3.5) {
                                                                if (input[14] <= 8.0) {
                                                                    if (input[14] <= -8.0) {
                                                                        memcpy(var0, (const double[]){0.35294117647058826, 0.6470588235294118}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[20] <= 37.0) {
                                                                            memcpy(var0, (const double[]){0.7062937062937062, 0.2937062937062937}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.9519230769230769, 0.04807692307692308}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[13] <= -152.0) {
                                                                        memcpy(var0, (const double[]){0.5342465753424658, 0.4657534246575342}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.125, 0.875}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[6] <= 1.5) {
                                                                    memcpy(var0, (const double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.0481283422459893, 0.9518716577540107}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[15] <= 8.0) {
                                                                if (input[14] <= -24.0) {
                                                                    if (input[8] <= -24.0) {
                                                                        memcpy(var0, (const double[]){0.9696969696969697, 0.030303030303030304}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[11] <= 6.5) {
                                                                            memcpy(var0, (const double[]){0.6944444444444444, 0.3055555555555556}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.027888446215139442, 0.9721115537848606}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[14] <= 24.0) {
                                                                        if (input[13] <= -8.0) {
                                                                            if (input[7] <= -40.0) {
                                                                                memcpy(var0, (const double[]){0.9781420765027322, 0.02185792349726776}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[11] <= 6.5) {
                                                                                    memcpy(var0, (const double[]){0.7746478873239436, 0.22535211267605634}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.1792452830188679, 0.8207547169811321}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[6] <= 1.5) {
                                                                                if (input[23] <= 0.5) {
                                                                                    if (input[23] <= -0.5) {
                                                                                        memcpy(var0, (const double[]){0.5789473684210527, 0.42105263157894735}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[22] <= -0.5) {
                                                                                            memcpy(var0, (const double[]){0.4, 0.6}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.9845132743362832, 0.015486725663716814}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.6344086021505376, 0.3655913978494624}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.9990338164251208, 0.000966183574879227}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[21] <= 81.5) {
                                                                            memcpy(var0, (const double[]){0.7377049180327869, 0.26229508196721313}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[14] <= 40.0) {
                                                                                memcpy(var0, (const double[]){0.6410256410256411, 0.358974358974359}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[8] <= 48.0) {
                                                                                    memcpy(var0, (const double[]){0.014492753623188406, 0.9855072463768116}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[22] <= 3.5) {
                                                                    memcpy(var0, (const double[]){0.09342560553633218, 0.9065743944636678}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[6] <= 1.5) {
                                                                        memcpy(var0, (const double[]){0.6793893129770993, 0.32061068702290074}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9619047619047619, 0.0380952380952381}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[8] <= 8.0) {
                                                        if (input[16] <= 56.0) {
                                                            memcpy(var0, (const double[]){0.4318181818181818, 0.5681818181818182}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.08333333333333333, 0.9166666666666666}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.5591182364729459, 0.4408817635270541}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[5] <= 800.0) {
                                                    if (input[7] <= 56.0) {
                                                        if (input[11] <= 6.5) {
                                                            memcpy(var0, (const double[]){0.43859649122807015, 0.5614035087719298}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 0.5) {
                                                                memcpy(var0, (const double[]){0.034482758620689655, 0.9655172413793104}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.24812030075187969, 0.7518796992481203}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.7310924369747899, 0.2689075630252101}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.8795180722891566, 0.12048192771084337}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[4] <= 1088.0) {
                                                if (input[6] <= 1.5) {
                                                    if (input[9] <= 24.0) {
                                                        memcpy(var0, (const double[]){0.9347319347319347, 0.06526806526806526}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.7892644135188867, 0.21073558648111332}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.9626749611197511, 0.03732503888024884}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.504950495049505, 0.49504950495049505}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[17] <= 18.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[18] <= 0.5) {
                                                if (input[20] <= 39.0) {
                                                    if (input[17] <= 19.5) {
                                                        if (input[14] <= 24.0) {
                                                            if (input[14] <= -24.0) {
                                                                memcpy(var0, (const double[]){0.4224137931034483, 0.5775862068965517}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[9] <= 8.0) {
                                                                    if (input[16] <= 96.0) {
                                                                        memcpy(var0, (const double[]){0.7122905027932961, 0.2877094972067039}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.937984496124031, 0.06201550387596899}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.29411764705882354, 0.7058823529411765}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[17] <= 20.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 21.5) {
                                                                if (input[14] <= 72.0) {
                                                                    if (input[14] <= -24.0) {
                                                                        memcpy(var0, (const double[]){0.33962264150943394, 0.660377358490566}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.7012448132780082, 0.2987551867219917}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.1875, 0.8125}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[17] <= 22.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.7086956521739131, 0.29130434782608694}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[21] <= 16957.0) {
                                                        if (input[7] <= -56.0) {
                                                            memcpy(var0, (const double[]){0.91701244813278, 0.08298755186721991}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7396280400572246, 0.2603719599427754}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.931350114416476, 0.06864988558352403}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[9] <= 8.0) {
                                                    memcpy(var0, (const double[]){0.47704590818363274, 0.5229540918163673}, 2 * sizeof(double));
                                                } else {
                                                    if (input[4] <= 1088.0) {
                                                        memcpy(var0, (const double[]){0.8620689655172413, 0.13793103448275862}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.3170731707317073, 0.6829268292682927}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[15] <= -2.0) {
                                    if (input[17] <= 17.5) {
                                        if (input[16] <= -328.0) {
                                            memcpy(var0, (const double[]){0.9954337899543378, 0.0045662100456621}, 2 * sizeof(double));
                                        } else {
                                            if (input[7] <= 14.0) {
                                                if (input[6] <= 1.5) {
                                                    if (input[15] <= -144.0) {
                                                        memcpy(var0, (const double[]){0.8444444444444444, 0.15555555555555556}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 0.5) {
                                                            if (input[14] <= 2.0) {
                                                                if (input[13] <= -40.0) {
                                                                    memcpy(var0, (const double[]){0.6491228070175439, 0.3508771929824561}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.2508591065292096, 0.7491408934707904}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.07758620689655173, 0.9224137931034483}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.5246913580246914, 0.47530864197530864}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[23] <= 0.5) {
                                                        if (input[14] <= -32.0) {
                                                            memcpy(var0, (const double[]){0.41818181818181815, 0.5818181818181818}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8692579505300353, 0.13074204946996468}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[15] <= -2144.0) {
                                                            memcpy(var0, (const double[]){0.9298245614035088, 0.07017543859649122}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.5394190871369294, 0.4605809128630705}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[18] <= 0.5) {
                                                    if (input[15] <= -40.0) {
                                                        memcpy(var0, (const double[]){0.833641404805915, 0.16635859519408502}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.12, 0.88}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.9433962264150944, 0.05660377358490566}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[17] <= 18.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 19.5) {
                                                if (input[10] <= 2.0) {
                                                    if (input[22] <= 106.0) {
                                                        memcpy(var0, (const double[]){0.6006240249609984, 0.3993759750390016}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8924731182795699, 0.10752688172043011}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.948051948051948, 0.05194805194805195}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[17] <= 20.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[6] <= 0.5) {
                                                        memcpy(var0, (const double[]){0.9321428571428572, 0.06785714285714285}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.7701711491442543, 0.22982885085574573}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[16] <= -2.0) {
                                        if (input[17] <= 17.5) {
                                            if (input[14] <= 14.0) {
                                                if (input[18] <= 0.5) {
                                                    if (input[16] <= -40.0) {
                                                        if (input[23] <= -2.5) {
                                                            memcpy(var0, (const double[]){0.8725490196078431, 0.12745098039215685}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.44680851063829785, 0.5531914893617021}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[4] <= 960.0) {
                                                            if (input[21] <= 86593.0) {
                                                                memcpy(var0, (const double[]){0.4095940959409594, 0.5904059040590406}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.05084745762711865, 0.9491525423728814}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[8] <= -2.0) {
                                                                memcpy(var0, (const double[]){0.44, 0.56}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.024390243902439025, 0.975609756097561}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[5] <= 480.0) {
                                                        if (input[16] <= -14.0) {
                                                            memcpy(var0, (const double[]){0.8294573643410853, 0.17054263565891473}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.38636363636363635, 0.6136363636363636}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9444444444444444, 0.05555555555555555}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[21] <= 42984.0) {
                                                    memcpy(var0, (const double[]){0.66, 0.34}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.9378238341968912, 0.06217616580310881}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[17] <= 18.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[15] <= 2.0) {
                                                    if (input[8] <= -10.0) {
                                                        if (input[17] <= 19.5) {
                                                            memcpy(var0, (const double[]){0.48148148148148145, 0.5185185185185185}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.956989247311828, 0.043010752688172046}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[14] <= 22.0) {
                                                            memcpy(var0, (const double[]){0.9828178694158075, 0.01718213058419244}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.52, 0.48}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[17] <= 19.5) {
                                                        memcpy(var0, (const double[]){0.582089552238806, 0.417910447761194}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8660130718954249, 0.13398692810457516}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[16] <= 2.0) {
                                            if (input[14] <= -2.0) {
                                                if (input[8] <= -2.0) {
                                                    memcpy(var0, (const double[]){0.9079497907949791, 0.09205020920502092}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 17.5) {
                                                        if (input[18] <= 0.5) {
                                                            if (input[12] <= 3.0) {
                                                                memcpy(var0, (const double[]){0.18181818181818182, 0.8181818181818182}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8431372549019608, 0.1568627450980392}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[17] <= 18.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 19.5) {
                                                                memcpy(var0, (const double[]){0.24390243902439024, 0.7560975609756098}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9190283400809717, 0.08097165991902834}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[14] <= 2.0) {
                                                    if (input[15] <= 2.0) {
                                                        if (input[13] <= 2.0) {
                                                            if (input[13] <= -2.0) {
                                                                if (input[12] <= 3.0) {
                                                                    if (input[17] <= 17.5) {
                                                                        if (input[7] <= -8.0) {
                                                                            memcpy(var0, (const double[]){0.7307692307692307, 0.2692307692307692}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.22105263157894736, 0.7789473684210526}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9142857142857143, 0.08571428571428572}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[5] <= 32.0) {
                                                                        memcpy(var0, (const double[]){0.7674418604651163, 0.23255813953488372}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[17] <= 18.5) {
                                                                    if (input[6] <= 0.5) {
                                                                        if (input[20] <= 44.0) {
                                                                            if (input[5] <= 480.0) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[21] <= 127281.5) {
                                                                                    memcpy(var0, (const double[]){0.8594594594594595, 0.14054054054054055}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[7] <= 8.0) {
                                                                            if (input[6] <= 1.5) {
                                                                                memcpy(var0, (const double[]){0.9951100244498777, 0.004889975550122249}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.9994448299791812, 0.0005551700208188758}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.8275862068965517, 0.1724137931034483}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[6] <= 0.5) {
                                                                        if (input[20] <= 44.0) {
                                                                            memcpy(var0, (const double[]){0.7522123893805309, 0.24778761061946902}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9371069182389937, 0.06289308176100629}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[17] <= 17.5) {
                                                                if (input[7] <= 2.0) {
                                                                    memcpy(var0, (const double[]){0.14606741573033707, 0.8539325842696629}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.9230769230769231, 0.07692307692307693}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9473684210526315, 0.05263157894736842}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[9] <= 56.0) {
                                                            if (input[17] <= 17.5) {
                                                                if (input[7] <= -8.0) {
                                                                    memcpy(var0, (const double[]){0.8968850698174007, 0.10311493018259936}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[15] <= 72.0) {
                                                                        if (input[4] <= 1280.0) {
                                                                            if (input[5] <= 1408.0) {
                                                                                memcpy(var0, (const double[]){0.25287356321839083, 0.7471264367816092}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.7528089887640449, 0.24719101123595505}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9285714285714286, 0.07142857142857142}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[6] <= 0.5) {
                                                                    memcpy(var0, (const double[]){0.7538461538461538, 0.24615384615384617}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.9853300733496333, 0.014669926650366748}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[15] <= 56.0) {
                                                                memcpy(var0, (const double[]){0.8350515463917526, 0.16494845360824742}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9962721342031687, 0.003727865796831314}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[4] <= 1216.0) {
                                                        if (input[17] <= 17.5) {
                                                            if (input[8] <= 6.0) {
                                                                if (input[18] <= 0.5) {
                                                                    memcpy(var0, (const double[]){0.012195121951219513, 0.9878048780487805}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.8823529411764706, 0.11764705882352941}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[21] <= 36572.0) {
                                                                    memcpy(var0, (const double[]){0.5909090909090909, 0.4090909090909091}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.968503937007874, 0.031496062992125984}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[17] <= 18.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[17] <= 19.5) {
                                                                    memcpy(var0, (const double[]){0.5409836065573771, 0.45901639344262296}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.9735099337748344, 0.026490066225165563}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[15] <= 56.0) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8390804597701149, 0.16091954022988506}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[5] <= 992.0) {
                                                if (input[17] <= 17.5) {
                                                    if (input[8] <= -20.0) {
                                                        if (input[10] <= 6.0) {
                                                            memcpy(var0, (const double[]){0.7755610972568578, 0.22443890274314215}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9386503067484663, 0.06134969325153374}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[18] <= 0.5) {
                                                            if (input[16] <= 288.0) {
                                                                if (input[10] <= 24.0) {
                                                                    memcpy(var0, (const double[]){0.299009900990099, 0.700990099009901}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.6, 0.4}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9215686274509803, 0.0784313725490196}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[14] <= -2.0) {
                                                                memcpy(var0, (const double[]){0.6961451247165533, 0.30385487528344673}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9281437125748503, 0.0718562874251497}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[17] <= 18.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 19.5) {
                                                            if (input[8] <= 2.0) {
                                                                if (input[6] <= 0.5) {
                                                                    memcpy(var0, (const double[]){0.6129032258064516, 0.3870967741935484}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.9344262295081968, 0.06557377049180328}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[10] <= 24.0) {
                                                                    memcpy(var0, (const double[]){0.6, 0.4}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9339045287637698, 0.06609547123623011}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[15] <= 66.0) {
                                                    memcpy(var0, (const double[]){0.7902097902097902, 0.2097902097902098}, 2 * sizeof(double));
                                                } else {
                                                    if (input[5] <= 1312.0) {
                                                        memcpy(var0, (const double[]){0.9337016574585635, 0.06629834254143646}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9977728285077951, 0.0022271714922048997}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[17] <= 17.5) {
                                if (input[11] <= 6.5) {
                                    if (input[21] <= 2.5) {
                                        memcpy(var0, (const double[]){0.16923076923076924, 0.8307692307692308}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.5036496350364964, 0.49635036496350365}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[18] <= 0.5) {
                                        memcpy(var0, (const double[]){0.004975124378109453, 0.9950248756218906}, 2 * sizeof(double));
                                    } else {
                                        if (input[0] <= 24.5) {
                                            memcpy(var0, (const double[]){0.2054794520547945, 0.7945205479452054}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.04496124031007752, 0.9550387596899225}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[17] <= 18.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[20] <= 35.5) {
                                        memcpy(var0, (const double[]){0.5005649717514125, 0.4994350282485876}, 2 * sizeof(double));
                                    } else {
                                        if (input[21] <= 112295.5) {
                                            if (input[20] <= 44.0) {
                                                memcpy(var0, (const double[]){0.1932059447983015, 0.8067940552016986}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.5384615384615384, 0.46153846153846156}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[17] <= 17.5) {
                            if (input[11] <= 8.5) {
                                if (input[6] <= 0.5) {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[23] <= -28.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[5] <= 1056.0) {
                                            memcpy(var0, (const double[]){0.4424778761061947, 0.5575221238938053}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.6049382716049383, 0.3950617283950617}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[12] <= 3.0) {
                                    if (input[11] <= 9.5) {
                                        if (input[22] <= -1.5) {
                                            if (input[21] <= 21456.0) {
                                                memcpy(var0, (const double[]){0.1717171717171717, 0.8282828282828283}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.05, 0.95}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.020544142143253747, 0.9794558578567463}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[6] <= 0.5) {
                                            if (input[21] <= 10041.0) {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.2222222222222222, 0.7777777777777778}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[13] <= -852.0) {
                                                memcpy(var0, (const double[]){0.3249138920780712, 0.6750861079219288}, 2 * sizeof(double));
                                            } else {
                                                if (input[6] <= 2.5) {
                                                    memcpy(var0, (const double[]){0.2135697764070933, 0.7864302235929067}, 2 * sizeof(double));
                                                } else {
                                                    if (input[4] <= 1600.0) {
                                                        memcpy(var0, (const double[]){0.017857142857142856, 0.9821428571428571}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.19205298013245034, 0.8079470198675497}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
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
                                            if (input[21] <= 4301.5) {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[20] <= 44.0) {
                                                    memcpy(var0, (const double[]){0.3129186602870813, 0.6870813397129186}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[6] <= 2.5) {
                                                if (input[12] <= 3.0) {
                                                    if (input[4] <= 1216.0) {
                                                        if (input[21] <= 9049.5) {
                                                            memcpy(var0, (const double[]){0.5507692307692308, 0.4492307692307692}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[20] <= 44.0) {
                                                                memcpy(var0, (const double[]){0.33952823445318087, 0.6604717655468192}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[20] <= 30.5) {
                                                            if (input[23] <= 3.5) {
                                                                memcpy(var0, (const double[]){0.5287671232876713, 0.4712328767123288}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.22950819672131148, 0.7704918032786885}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[22] <= 12.5) {
                                                                if (input[21] <= 13316.5) {
                                                                    memcpy(var0, (const double[]){0.6124567474048442, 0.3875432525951557}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[21] <= 111371.5) {
                                                                        memcpy(var0, (const double[]){0.975609756097561, 0.024390243902439025}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.6785714285714286, 0.32142857142857145}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.4527027027027027, 0.5472972972972973}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[5] <= 928.0) {
                                                        if (input[6] <= 1.5) {
                                                            if (input[7] <= -88.0) {
                                                                memcpy(var0, (const double[]){0.9772727272727273, 0.022727272727272728}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[4] <= 576.0) {
                                                                    memcpy(var0, (const double[]){0.43471074380165287, 0.5652892561983471}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.6367112810707457, 0.3632887189292543}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[15] <= 32.0) {
                                                                if (input[15] <= -32.0) {
                                                                    memcpy(var0, (const double[]){0.5918367346938775, 0.40816326530612246}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.9005524861878453, 0.09944751381215469}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[22] <= 2.5) {
                                                                    memcpy(var0, (const double[]){0.07692307692307693, 0.9230769230769231}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.7763975155279503, 0.2236024844720497}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9525691699604744, 0.04743083003952569}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[4] <= 1216.0) {
                                                    if (input[20] <= 42.0) {
                                                        if (input[5] <= 672.0) {
                                                            memcpy(var0, (const double[]){0.20838183934807916, 0.7916181606519208}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.6, 0.4}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.5462794918330308, 0.4537205081669691}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[11] <= 11.5) {
                                            if (input[12] <= 3.0) {
                                                if (input[16] <= 10.0) {
                                                    memcpy(var0, (const double[]){0.08148148148148149, 0.9185185185185185}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[6] <= 0.5) {
                                                if (input[21] <= 17210.0) {
                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.1111111111111111, 0.8888888888888888}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[15] <= -348.0) {
                                                    memcpy(var0, (const double[]){0.4632768361581921, 0.536723163841808}, 2 * sizeof(double));
                                                } else {
                                                    if (input[4] <= 1344.0) {
                                                        memcpy(var0, (const double[]){0.11293634496919917, 0.8870636550308009}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[0] <= 29.5) {
                                                            memcpy(var0, (const double[]){0.1917808219178082, 0.8082191780821918}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.45569620253164556, 0.5443037974683544}, 2 * sizeof(double));
                                                        }
                                                    }
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
                                                if (input[6] <= 0.5) {
                                                    if (input[21] <= 8243.0) {
                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[20] <= 44.0) {
                                                            if (input[21] <= 47941.5) {
                                                                if (input[13] <= -98.0) {
                                                                    memcpy(var0, (const double[]){0.7741935483870968, 0.22580645161290322}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[12] <= 3.0) {
                                                                        if (input[15] <= -86.0) {
                                                                            memcpy(var0, (const double[]){0.7241379310344828, 0.27586206896551724}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.1958762886597938, 0.8041237113402062}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[20] <= 40.5) {
                                                                            memcpy(var0, (const double[]){0.5265306122448979, 0.47346938775510206}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.13846153846153847, 0.8615384615384616}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[11] <= 10.0) {
                                                                    memcpy(var0, (const double[]){0.7604790419161677, 0.23952095808383234}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.3619631901840491, 0.6380368098159509}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[9] <= 12.0) {
                                                        if (input[6] <= 2.5) {
                                                            if (input[12] <= 3.0) {
                                                                if (input[4] <= 1728.0) {
                                                                    if (input[21] <= 15.5) {
                                                                        memcpy(var0, (const double[]){0.6501766784452296, 0.3498233215547703}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.4032674118658641, 0.5967325881341359}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[20] <= 33.5) {
                                                                        memcpy(var0, (const double[]){0.44370860927152317, 0.5562913907284768}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.7071651090342679, 0.29283489096573206}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[5] <= 224.0) {
                                                                    memcpy(var0, (const double[]){0.5528255528255528, 0.44717444717444715}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.7621359223300971, 0.23786407766990292}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[15] <= -116.0) {
                                                                memcpy(var0, (const double[]){0.6421052631578947, 0.35789473684210527}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[20] <= 37.0) {
                                                                    if (input[21] <= 18796.0) {
                                                                        memcpy(var0, (const double[]){0.4416961130742049, 0.558303886925795}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.17857142857142858, 0.8214285714285714}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[14] <= 36.0) {
                                                                        memcpy(var0, (const double[]){0.11382113821138211, 0.8861788617886179}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.5263157894736842, 0.47368421052631576}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[6] <= 2.5) {
                                                            if (input[15] <= 224.0) {
                                                                if (input[4] <= 1088.0) {
                                                                    if (input[13] <= -120.0) {
                                                                        memcpy(var0, (const double[]){0.5897435897435898, 0.41025641025641024}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9475409836065574, 0.05245901639344262}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.620253164556962, 0.379746835443038}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.42028985507246375, 0.5797101449275363}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[12] <= 3.0) {
                                                    if (input[6] <= 0.5) {
                                                        if (input[21] <= 11288.0) {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.24623115577889448, 0.7537688442211056}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[15] <= -388.0) {
                                                            memcpy(var0, (const double[]){0.3633217993079585, 0.6366782006920415}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.18384697130712008, 0.8161530286928799}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[17] <= 22.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 23.5) {
                                                    if (input[11] <= 14.5) {
                                                        if (input[6] <= 0.5) {
                                                            if (input[21] <= 10647.5) {
                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[0] <= 34.5) {
                                                                    memcpy(var0, (const double[]){0.47638603696098564, 0.5236139630390144}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[21] <= 35526.5) {
                                                                        memcpy(var0, (const double[]){0.014925373134328358, 0.9850746268656716}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.2845528455284553, 0.7154471544715447}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[11] <= 13.5) {
                                                                if (input[12] <= 3.0) {
                                                                    if (input[4] <= 1088.0) {
                                                                        if (input[14] <= -244.0) {
                                                                            memcpy(var0, (const double[]){0.6576576576576577, 0.34234234234234234}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[21] <= 250644.5) {
                                                                                memcpy(var0, (const double[]){0.2872340425531915, 0.7127659574468085}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.8125, 0.1875}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.536283185840708, 0.46371681415929206}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[6] <= 2.5) {
                                                                        if (input[4] <= 832.0) {
                                                                            memcpy(var0, (const double[]){0.6590909090909091, 0.3409090909090909}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.89937106918239, 0.10062893081761007}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.4015748031496063, 0.5984251968503937}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[21] <= 36280.5) {
                                                                    memcpy(var0, (const double[]){0.6607431340872375, 0.3392568659127625}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[6] <= 0.5) {
                                                            if (input[21] <= 17954.5) {
                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.136, 0.864}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[11] <= 15.5) {
                                                                memcpy(var0, (const double[]){0.018404907975460124, 0.9815950920245399}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[11] <= 17.5) {
                                                                    memcpy(var0, (const double[]){0.1891891891891892, 0.8108108108108109}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.37293729372937295, 0.6270627062706271}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[17] <= 24.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[7] <= -1606.0) {
                                                            if (input[21] <= 24.5) {
                                                                if (input[17] <= 39.5) {
                                                                    if (input[17] <= 25.5) {
                                                                        if (input[6] <= 0.5) {
                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[11] <= 17.0) {
                                                                                memcpy(var0, (const double[]){0.7480314960629921, 0.25196850393700787}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.2972972972972973, 0.7027027027027027}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[17] <= 26.5) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[17] <= 27.5) {
                                                                                if (input[6] <= 0.5) {
                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[11] <= 19.0) {
                                                                                        memcpy(var0, (const double[]){0.8252427184466019, 0.17475728155339806}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.40476190476190477, 0.5952380952380952}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[4] <= 2880.0) {
                                                                                    if (input[17] <= 28.5) {
                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[17] <= 29.5) {
                                                                                            if (input[6] <= 0.5) {
                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.5666666666666667, 0.43333333333333335}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[17] <= 30.5) {
                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[4] <= 64.0) {
                                                                                                    memcpy(var0, (const double[]){0.9764705882352941, 0.023529411764705882}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[22] <= -386.5) {
                                                                                                        if (input[15] <= -5504.0) {
                                                                                                            if (input[5] <= 192.0) {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.7396449704142012, 0.2603550295857988}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.9801488833746899, 0.019851116625310174}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[17] <= 38.5) {
                                                                                                            if (input[17] <= 37.5) {
                                                                                                                if (input[17] <= 36.5) {
                                                                                                                    if (input[17] <= 35.5) {
                                                                                                                        if (input[17] <= 31.5) {
                                                                                                                            memcpy(var0, (const double[]){0.5706806282722513, 0.4293193717277487}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[17] <= 32.5) {
                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[17] <= 33.5) {
                                                                                                                                    if (input[11] <= 25.0) {
                                                                                                                                        memcpy(var0, (const double[]){0.7886178861788617, 0.21138211382113822}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){0.30578512396694213, 0.6942148760330579}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    if (input[17] <= 34.5) {
                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        if (input[11] <= 27.0) {
                                                                                                                                            if (input[11] <= 19.0) {
                                                                                                                                                memcpy(var0, (const double[]){0.25, 0.75}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                memcpy(var0, (const double[]){0.9178082191780822, 0.0821917808219178}, 2 * sizeof(double));
                                                                                                                                            }
                                                                                                                                        } else {
                                                                                                                                            memcpy(var0, (const double[]){0.3584905660377358, 0.6415094339622641}, 2 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[11] <= 29.0) {
                                                                                                                        memcpy(var0, (const double[]){0.7966101694915254, 0.2033898305084746}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.3805309734513274, 0.6194690265486725}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[11] <= 31.0) {
                                                                                                                if (input[6] <= 0.5) {
                                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.8926174496644296, 0.10738255033557047}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.21153846153846154, 0.7884615384615384}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[0] <= 24.5) {
                                                                                        memcpy(var0, (const double[]){0.8032786885245902, 0.19672131147540983}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[14] <= -3872.0) {
                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[8] <= 72.0) {
                                                                                                memcpy(var0, (const double[]){0.6256684491978609, 0.37433155080213903}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.08571428571428572, 0.9142857142857143}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[4] <= 2752.0) {
                                                                        if (input[4] <= 320.0) {
                                                                            if (input[5] <= 1248.0) {
                                                                                memcpy(var0, (const double[]){0.9830328738069989, 0.016967126193001062}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.9105691056910569, 0.08943089430894309}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[7] <= -8040.0) {
                                                                                if (input[6] <= 2.5) {
                                                                                    if (input[23] <= -108.5) {
                                                                                        memcpy(var0, (const double[]){0.9407616361071932, 0.05923836389280677}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.9968968192397207, 0.0031031807602792862}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[15] <= -300.0) {
                                                                                        if (input[16] <= -252.0) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[17] <= 55.5) {
                                                                                                if (input[23] <= -89.0) {
                                                                                                    memcpy(var0, (const double[]){0.2830188679245283, 0.7169811320754716}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.7560975609756098, 0.24390243902439024}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.9898477157360406, 0.01015228426395939}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[17] <= 40.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[17] <= 41.5) {
                                                                                        if (input[11] <= 33.0) {
                                                                                            memcpy(var0, (const double[]){0.8053097345132744, 0.19469026548672566}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.27927927927927926, 0.7207207207207207}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[17] <= 42.5) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[17] <= 43.5) {
                                                                                                if (input[11] <= 35.0) {
                                                                                                    if (input[6] <= 0.5) {
                                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.9424460431654677, 0.05755395683453238}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.2222222222222222, 0.7777777777777778}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[17] <= 44.5) {
                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[17] <= 45.5) {
                                                                                                        if (input[11] <= 37.0) {
                                                                                                            memcpy(var0, (const double[]){0.8899082568807339, 0.11009174311926606}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.21311475409836064, 0.7868852459016393}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[17] <= 46.5) {
                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[20] <= 26.0) {
                                                                                                                memcpy(var0, (const double[]){0.9360222531293463, 0.06397774687065369}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[17] <= 47.5) {
                                                                                                                    memcpy(var0, (const double[]){0.543859649122807, 0.45614035087719296}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.8558139534883721, 0.14418604651162792}, 2 * sizeof(double));
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
                                                                        if (input[13] <= -6194.0) {
                                                                            memcpy(var0, (const double[]){0.9311594202898551, 0.06884057971014493}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[17] <= 54.5) {
                                                                                if (input[17] <= 53.5) {
                                                                                    if (input[16] <= -4.0) {
                                                                                        memcpy(var0, (const double[]){0.8494623655913979, 0.15053763440860216}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[14] <= -4046.0) {
                                                                                            memcpy(var0, (const double[]){0.39655172413793105, 0.603448275862069}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.7037037037037037, 0.2962962962962963}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.20689655172413793, 0.7931034482758621}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[16] <= 158.0) {
                                                                    if (input[5] <= 96.0) {
                                                                        memcpy(var0, (const double[]){0.9764705882352941, 0.023529411764705882}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[11] <= 27.5) {
                                                                            memcpy(var0, (const double[]){0.7650602409638554, 0.23493975903614459}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.4876847290640394, 0.5123152709359606}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.4020618556701031, 0.5979381443298969}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[17] <= 25.5) {
                                                                if (input[11] <= 16.5) {
                                                                    if (input[6] <= 0.5) {
                                                                        if (input[21] <= 9749.5) {
                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[20] <= 44.0) {
                                                                                if (input[11] <= 12.0) {
                                                                                    if (input[23] <= -0.5) {
                                                                                        memcpy(var0, (const double[]){0.8, 0.2}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.5093167701863354, 0.4906832298136646}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.3240223463687151, 0.6759776536312849}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[12] <= 3.0) {
                                                                            if (input[21] <= 11.5) {
                                                                                memcpy(var0, (const double[]){0.5797413793103449, 0.4202586206896552}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[4] <= 1728.0) {
                                                                                    memcpy(var0, (const double[]){0.365542388331814, 0.6344576116681859}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.6153846153846154, 0.38461538461538464}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.7207207207207207, 0.27927927927927926}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[6] <= 0.5) {
                                                                        memcpy(var0, (const double[]){0.03361344537815126, 0.9663865546218487}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.23705722070844687, 0.7629427792915532}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[17] <= 26.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[17] <= 27.5) {
                                                                        if (input[11] <= 18.5) {
                                                                            if (input[6] <= 0.5) {
                                                                                if (input[21] <= 10570.0) {
                                                                                    memcpy(var0, (const double[]){0.0035335689045936395, 0.9964664310954063}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[11] <= 12.0) {
                                                                                        memcpy(var0, (const double[]){0.6475095785440613, 0.3524904214559387}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.35684647302904565, 0.6431535269709544}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[21] <= 8759.0) {
                                                                                    memcpy(var0, (const double[]){0.6136136136136137, 0.3863863863863864}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[11] <= 12.5) {
                                                                                        memcpy(var0, (const double[]){0.5396419437340153, 0.46035805626598464}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[18] <= 0.5) {
                                                                                            memcpy(var0, (const double[]){0.4117647058823529, 0.5882352941176471}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.18691588785046728, 0.8130841121495327}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[6] <= 0.5) {
                                                                                memcpy(var0, (const double[]){0.050505050505050504, 0.9494949494949495}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.2287390029325513, 0.7712609970674487}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[17] <= 28.5) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[17] <= 29.5) {
                                                                                if (input[11] <= 20.5) {
                                                                                    if (input[11] <= 18.5) {
                                                                                        memcpy(var0, (const double[]){0.4115626788780767, 0.5884373211219233}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[6] <= 0.5) {
                                                                                            memcpy(var0, (const double[]){0.13253012048192772, 0.8674698795180723}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[6] <= 1.5) {
                                                                                                memcpy(var0, (const double[]){0.5824175824175825, 0.4175824175824176}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.8350515463917526, 0.16494845360824742}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[6] <= 0.5) {
                                                                                        memcpy(var0, (const double[]){0.02702702702702703, 0.972972972972973}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.21592649310872894, 0.7840735068912711}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[17] <= 30.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[17] <= 31.5) {
                                                                                        if (input[11] <= 22.5) {
                                                                                            if (input[6] <= 1.5) {
                                                                                                if (input[11] <= 13.5) {
                                                                                                    if (input[21] <= 15680.0) {
                                                                                                        memcpy(var0, (const double[]){0.2777777777777778, 0.7222222222222222}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.6842105263157895, 0.3157894736842105}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[6] <= 0.5) {
                                                                                                        if (input[21] <= 10412.0) {
                                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.3357664233576642, 0.6642335766423357}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.42091152815013405, 0.579088471849866}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                if (input[11] <= 20.5) {
                                                                                                    memcpy(var0, (const double[]){0.4747826086956522, 0.5252173913043479}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.7534246575342466, 0.2465753424657534}, 2 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            if (input[6] <= 0.5) {
                                                                                                memcpy(var0, (const double[]){0.006134969325153374, 0.9938650306748467}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[11] <= 25.0) {
                                                                                                    memcpy(var0, (const double[]){0.17539863325740318, 0.8246013667425968}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.4603174603174603, 0.5396825396825397}, 2 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (input[17] <= 32.5) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[21] <= 21953.5) {
                                                                                                if (input[11] <= 27.5) {
                                                                                                    if (input[17] <= 33.5) {
                                                                                                        if (input[11] <= 24.5) {
                                                                                                            if (input[6] <= 0.5) {
                                                                                                                if (input[21] <= 4597.5) {
                                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[7] <= 18.0) {
                                                                                                                        memcpy(var0, (const double[]){0.8125, 0.1875}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.24324324324324326, 0.7567567567567568}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[11] <= 21.0) {
                                                                                                                    memcpy(var0, (const double[]){0.4723926380368098, 0.5276073619631901}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.7665995975855131, 0.23340040241448692}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.1089866156787763, 0.8910133843212237}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[17] <= 34.5) {
                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[6] <= 0.5) {
                                                                                                                if (input[11] <= 19.5) {
                                                                                                                    if (input[21] <= 3628.5) {
                                                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[11] <= 14.0) {
                                                                                                                            memcpy(var0, (const double[]){0.9932203389830508, 0.006779661016949152}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.7803030303030303, 0.2196969696969697}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[21] <= 13465.0) {
                                                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.6086956521739131, 0.391304347826087}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[11] <= 25.5) {
                                                                                                                    if (input[5] <= 736.0) {
                                                                                                                        memcpy(var0, (const double[]){0.6275303643724697, 0.3724696356275304}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.8266666666666667, 0.17333333333333334}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.8654104979811574, 0.13458950201884254}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[17] <= 39.5) {
                                                                                                        if (input[17] <= 38.5) {
                                                                                                            if (input[17] <= 37.5) {
                                                                                                                if (input[17] <= 36.5) {
                                                                                                                    if (input[17] <= 35.5) {
                                                                                                                        if (input[17] <= 34.5) {
                                                                                                                            if (input[17] <= 33.5) {
                                                                                                                                memcpy(var0, (const double[]){0.20430107526881722, 0.7956989247311828}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            if (input[6] <= 0.5) {
                                                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.22767857142857142, 0.7723214285714286}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[11] <= 29.0) {
                                                                                                                        if (input[6] <= 0.5) {
                                                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.8869047619047619, 0.1130952380952381}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        if (input[6] <= 0.5) {
                                                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.16176470588235295, 0.8382352941176471}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[11] <= 30.5) {
                                                                                                                if (input[6] <= 0.5) {
                                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.8609625668449198, 0.13903743315508021}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[11] <= 35.0) {
                                                                                                                    memcpy(var0, (const double[]){0.09247311827956989, 0.9075268817204301}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.45454545454545453, 0.5454545454545454}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[17] <= 40.5) {
                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[17] <= 41.5) {
                                                                                                                if (input[6] <= 0.5) {
                                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[11] <= 33.0) {
                                                                                                                        memcpy(var0, (const double[]){0.9180327868852459, 0.08196721311475409}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.1276595744680851, 0.8723404255319149}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[17] <= 42.5) {
                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[17] <= 43.5) {
                                                                                                                        if (input[11] <= 35.0) {
                                                                                                                            if (input[6] <= 0.5) {
                                                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.9042553191489362, 0.09574468085106383}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            if (input[6] <= 0.5) {
                                                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.2425531914893617, 0.7574468085106383}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        if (input[17] <= 44.5) {
                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[17] <= 45.5) {
                                                                                                                                if (input[11] <= 37.0) {
                                                                                                                                    if (input[6] <= 0.5) {
                                                                                                                                        memcpy(var0, (const double[]){0.047619047619047616, 0.9523809523809523}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){0.9178082191780822, 0.0821917808219178}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    if (input[6] <= 0.5) {
                                                                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){0.20300751879699247, 0.7969924812030075}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                if (input[17] <= 46.5) {
                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[17] <= 47.5) {
                                                                                                                                        if (input[11] <= 39.0) {
                                                                                                                                            if (input[6] <= 0.5) {
                                                                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                memcpy(var0, (const double[]){0.9282511210762332, 0.07174887892376682}, 2 * sizeof(double));
                                                                                                                                            }
                                                                                                                                        } else {
                                                                                                                                            memcpy(var0, (const double[]){0.06093189964157706, 0.9390681003584229}, 2 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    } else {
                                                                                                                                        if (input[17] <= 48.5) {
                                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            if (input[17] <= 49.5) {
                                                                                                                                                if (input[11] <= 41.0) {
                                                                                                                                                    if (input[6] <= 0.5) {
                                                                                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        memcpy(var0, (const double[]){0.9328859060402684, 0.06711409395973154}, 2 * sizeof(double));
                                                                                                                                                    }
                                                                                                                                                } else {
                                                                                                                                                    memcpy(var0, (const double[]){0.021505376344086023, 0.978494623655914}, 2 * sizeof(double));
                                                                                                                                                }
                                                                                                                                            } else {
                                                                                                                                                if (input[17] <= 50.5) {
                                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    if (input[17] <= 51.5) {
                                                                                                                                                        if (input[11] <= 43.0) {
                                                                                                                                                            memcpy(var0, (const double[]){0.7735849056603774, 0.22641509433962265}, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                                        }
                                                                                                                                                    } else {
                                                                                                                                                        if (input[17] <= 52.5) {
                                                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            if (input[17] <= 53.5) {
                                                                                                                                                                memcpy(var0, (const double[]){0.4827586206896552, 0.5172413793103449}, 2 * sizeof(double));
                                                                                                                                                            } else {
                                                                                                                                                                if (input[17] <= 54.5) {
                                                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                } else {
                                                                                                                                                                    if (input[15] <= -256.0) {
                                                                                                                                                                        if (input[5] <= 448.0) {
                                                                                                                                                                            memcpy(var0, (const double[]){0.6585365853658537, 0.34146341463414637}, 2 * sizeof(double));
                                                                                                                                                                        } else {
                                                                                                                                                                            memcpy(var0, (const double[]){0.986013986013986, 0.013986013986013986}, 2 * sizeof(double));
                                                                                                                                                                        }
                                                                                                                                                                    } else {
                                                                                                                                                                        memcpy(var0, (const double[]){0.42857142857142855, 0.5714285714285714}, 2 * sizeof(double));
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
                                                                                                }
                                                                                            } else {
                                                                                                if (input[11] <= 14.0) {
                                                                                                    if (input[6] <= 0.5) {
                                                                                                        memcpy(var0, (const double[]){0.8943533697632058, 0.10564663023679417}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.6960985626283368, 0.30390143737166325}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[23] <= -5.5) {
                                                                                                        if (input[6] <= 2.5) {
                                                                                                            if (input[6] <= 0.5) {
                                                                                                                if (input[20] <= 33.0) {
                                                                                                                    memcpy(var0, (const double[]){0.08713692946058091, 0.9128630705394191}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[17] <= 38.5) {
                                                                                                                        memcpy(var0, (const double[]){0.7623762376237624, 0.2376237623762376}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[4] <= 2880.0) {
                                                                                                                            if (input[5] <= 992.0) {
                                                                                                                                memcpy(var0, (const double[]){0.24219910846953938, 0.7578008915304606}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.5934959349593496, 0.4065040650406504}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.8148148148148148, 0.18518518518518517}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.5491507977354606, 0.4508492022645394}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[21] <= 144916.5) {
                                                                                                                if (input[5] <= 800.0) {
                                                                                                                    if (input[5] <= 224.0) {
                                                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.13157894736842105, 0.868421052631579}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.504950495049505, 0.49504950495049505}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.4503464203233256, 0.5496535796766744}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[22] <= 72.5) {
                                                                                                            if (input[18] <= 0.5) {
                                                                                                                if (input[5] <= 480.0) {
                                                                                                                    if (input[13] <= -58.0) {
                                                                                                                        if (input[7] <= -84.0) {
                                                                                                                            memcpy(var0, (const double[]){0.620253164556962, 0.379746835443038}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.9905660377358491, 0.009433962264150943}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        if (input[16] <= -2.0) {
                                                                                                                            if (input[8] <= -6.0) {
                                                                                                                                memcpy(var0, (const double[]){0.9166666666666666, 0.08333333333333333}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.2932330827067669, 0.706766917293233}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            if (input[7] <= 46.0) {
                                                                                                                                if (input[13] <= 40.0) {
                                                                                                                                    memcpy(var0, (const double[]){0.6842105263157895, 0.3157894736842105}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.52, 0.48}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[13] <= -1586.0) {
                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[6] <= 0.5) {
                                                                                                                            if (input[7] <= -462.0) {
                                                                                                                                memcpy(var0, (const double[]){0.14583333333333334, 0.8541666666666666}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[13] <= -442.0) {
                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var0, (const double[]){0.41624365482233505, 0.583756345177665}, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.5918781725888325, 0.40812182741116754}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[4] <= 1088.0) {
                                                                                                                    memcpy(var0, (const double[]){0.29245283018867924, 0.7075471698113207}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[20] <= 39.0) {
                                                                                                                        memcpy(var0, (const double[]){0.6678445229681979, 0.3321554770318021}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.4185303514376997, 0.5814696485623003}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.6991963260619977, 0.3008036739380023}, 2 * sizeof(double));
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
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[11] <= 8.5) {
                if (input[17] <= 15.5) {
                    if (input[19] <= 6.5) {
                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[17] <= 16.5) {
                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[6] <= 2.5) {
                            if (input[5] <= 992.0) {
                                if (input[6] <= 0.5) {
                                    if (input[0] <= 34.5) {
                                        if (input[17] <= 19.5) {
                                            if (input[17] <= 17.5) {
                                                if (input[18] <= 0.5) {
                                                    memcpy(var0, (const double[]){0.08444444444444445, 0.9155555555555556}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.31560283687943264, 0.6843971631205674}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[17] <= 18.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[21] <= 23268.0) {
                                                        if (input[20] <= 35.0) {
                                                            memcpy(var0, (const double[]){0.3620689655172414, 0.6379310344827587}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.1349206349206349, 0.8650793650793651}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.48484848484848486, 0.5151515151515151}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[17] <= 20.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 21.5) {
                                                    if (input[12] <= 12.0) {
                                                        memcpy(var0, (const double[]){0.4331983805668016, 0.5668016194331984}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.14285714285714285, 0.8571428571428571}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[17] <= 22.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 23.5) {
                                                            memcpy(var0, (const double[]){0.4330708661417323, 0.5669291338582677}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 24.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6503496503496503, 0.34965034965034963}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[17] <= 17.5) {
                                        if (input[18] <= 0.5) {
                                            if (input[16] <= 8.0) {
                                                if (input[16] <= -8.0) {
                                                    memcpy(var0, (const double[]){0.2227342549923195, 0.7772657450076805}, 2 * sizeof(double));
                                                } else {
                                                    if (input[15] <= -8.0) {
                                                        if (input[23] <= 2.5) {
                                                            memcpy(var0, (const double[]){0.11564625850340136, 0.8843537414965986}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.6521739130434783, 0.34782608695652173}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[15] <= 8.0) {
                                                            if (input[6] <= 1.5) {
                                                                memcpy(var0, (const double[]){0.6043956043956044, 0.3956043956043956}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[9] <= 32.0) {
                                                                    memcpy(var0, (const double[]){0.9096045197740112, 0.0903954802259887}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[12] <= 12.0) {
                                                                memcpy(var0, (const double[]){0.3473053892215569, 0.6526946107784432}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.8421052631578947, 0.15789473684210525}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[13] <= -352.0) {
                                                    memcpy(var0, (const double[]){0.68, 0.32}, 2 * sizeof(double));
                                                } else {
                                                    if (input[12] <= 12.0) {
                                                        memcpy(var0, (const double[]){0.11556603773584906, 0.8844339622641509}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.5862068965517241, 0.41379310344827586}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[21] <= 22103.5) {
                                                if (input[7] <= -8.0) {
                                                    if (input[22] <= 8.5) {
                                                        memcpy(var0, (const double[]){0.5816326530612245, 0.41836734693877553}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9629629629629629, 0.037037037037037035}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.3945720250521921, 0.605427974947808}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.7295469912102772, 0.2704530087897228}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[17] <= 18.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 19.5) {
                                                if (input[12] <= 12.0) {
                                                    if (input[12] <= 10.0) {
                                                        if (input[18] <= 0.5) {
                                                            if (input[14] <= 56.0) {
                                                                if (input[21] <= 130868.0) {
                                                                    memcpy(var0, (const double[]){0.6335877862595419, 0.366412213740458}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.23333333333333334, 0.7666666666666667}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.02702702702702703, 0.972972972972973}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.36348949919224555, 0.6365105008077544}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.3174946004319654, 0.6825053995680346}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.6561085972850679, 0.3438914027149321}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[17] <= 20.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 21.5) {
                                                        memcpy(var0, (const double[]){0.4532627865961199, 0.54673721340388}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 22.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 23.5) {
                                                                memcpy(var0, (const double[]){0.42727272727272725, 0.5727272727272728}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[17] <= 24.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.6585365853658537, 0.34146341463414637}, 2 * sizeof(double));
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
                                if (input[6] <= 0.5) {
                                    memcpy(var0, (const double[]){0.06060606060606061, 0.9393939393939394}, 2 * sizeof(double));
                                } else {
                                    if (input[15] <= 3168.0) {
                                        if (input[21] <= 151480.5) {
                                            memcpy(var0, (const double[]){0.9640971488912354, 0.03590285110876452}, 2 * sizeof(double));
                                        } else {
                                            if (input[10] <= -80.0) {
                                                memcpy(var0, (const double[]){0.9854014598540146, 0.014598540145985401}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.7692307692307693, 0.23076923076923078}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[20] <= 35.0) {
                                if (input[17] <= 17.5) {
                                    memcpy(var0, (const double[]){0.09016393442622951, 0.9098360655737705}, 2 * sizeof(double));
                                } else {
                                    if (input[18] <= 0.5) {
                                        if (input[21] <= 30433.5) {
                                            memcpy(var0, (const double[]){0.7819548872180451, 0.21804511278195488}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.34074074074074073, 0.6592592592592592}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[17] <= 17.5) {
                                    memcpy(var0, (const double[]){0.017892644135188866, 0.9821073558648111}, 2 * sizeof(double));
                                } else {
                                    if (input[20] <= 43.0) {
                                        if (input[17] <= 18.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[22] <= 0.5) {
                                                if (input[17] <= 19.5) {
                                                    if (input[16] <= 28.0) {
                                                        memcpy(var0, (const double[]){0.10040160642570281, 0.8995983935742972}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6, 0.4}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[17] <= 20.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.32019704433497537, 0.6798029556650246}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.04294478527607362, 0.9570552147239264}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[20] <= 44.0) {
                    if (input[17] <= 19.5) {
                        if (input[18] <= 0.5) {
                            if (input[17] <= 18.5) {
                                if (input[17] <= 17.5) {
                                    if (input[17] <= 16.5) {
                                        memcpy(var0, (const double[]){0.8983050847457628, 0.1016949152542373}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[11] <= 10.0) {
                                    if (input[6] <= 1.5) {
                                        memcpy(var0, (const double[]){0.25925925925925924, 0.7407407407407407}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.08108108108108109, 0.918918918918919}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[17] <= 17.5) {
                                memcpy(var0, (const double[]){0.0026666666666666666, 0.9973333333333333}, 2 * sizeof(double));
                            } else {
                                if (input[17] <= 18.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[11] <= 10.0) {
                                        if (input[21] <= 24114.5) {
                                            memcpy(var0, (const double[]){0.11779141104294479, 0.8822085889570552}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.03876923076923077, 0.9612307692307692}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[17] <= 20.5) {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[18] <= 0.5) {
                                if (input[17] <= 21.5) {
                                    if (input[11] <= 10.0) {
                                        if (input[12] <= 10.0) {
                                            memcpy(var0, (const double[]){0.33884297520661155, 0.6611570247933884}, 2 * sizeof(double));
                                        } else {
                                            if (input[21] <= 19772.0) {
                                                memcpy(var0, (const double[]){0.2687224669603524, 0.7312775330396476}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.08673469387755102, 0.9132653061224489}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.10134310134310134, 0.8986568986568987}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[17] <= 22.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[17] <= 23.5) {
                                            if (input[11] <= 12.0) {
                                                if (input[12] <= 10.0) {
                                                    if (input[14] <= -52.0) {
                                                        memcpy(var0, (const double[]){0.1282051282051282, 0.8717948717948718}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.600997506234414, 0.39900249376558605}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[11] <= 10.0) {
                                                        if (input[12] <= 12.0) {
                                                            memcpy(var0, (const double[]){0.5217391304347826, 0.4782608695652174}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.21888412017167383, 0.7811158798283262}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.13574660633484162, 0.8642533936651584}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.06338028169014084, 0.9366197183098591}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[17] <= 24.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 25.5) {
                                                    if (input[11] <= 12.0) {
                                                        if (input[12] <= 12.0) {
                                                            if (input[20] <= 40.5) {
                                                                memcpy(var0, (const double[]){0.6, 0.4}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.2222222222222222, 0.7777777777777778}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.23160762942779292, 0.7683923705722071}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[12] <= 10.0) {
                                                            memcpy(var0, (const double[]){0.3577981651376147, 0.6422018348623854}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.07886435331230283, 0.9211356466876972}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[17] <= 26.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[21] <= 24641.0) {
                                                            if (input[17] <= 27.5) {
                                                                memcpy(var0, (const double[]){0.4129353233830846, 0.5870646766169154}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[17] <= 28.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[17] <= 29.5) {
                                                                        memcpy(var0, (const double[]){0.4365079365079365, 0.5634920634920635}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[17] <= 30.5) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[23] <= -0.5) {
                                                                                memcpy(var0, (const double[]){0.630057803468208, 0.3699421965317919}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.8338278931750742, 0.1661721068249258}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[11] <= 14.0) {
                                                                if (input[17] <= 29.5) {
                                                                    memcpy(var0, (const double[]){0.4734982332155477, 0.5265017667844523}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[17] <= 30.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.6183206106870229, 0.3816793893129771}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.3874066168623266, 0.6125933831376734}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[11] <= 10.0) {
                                    if (input[12] <= 10.0) {
                                        if (input[6] <= 2.0) {
                                            if (input[17] <= 25.5) {
                                                memcpy(var0, (const double[]){0.6411214953271028, 0.35887850467289717}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.975, 0.025}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.36813186813186816, 0.6318681318681318}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[17] <= 23.5) {
                                            memcpy(var0, (const double[]){0.27373612823674476, 0.7262638717632552}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 24.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[6] <= 0.5) {
                                                    if (input[21] <= 20161.0) {
                                                        memcpy(var0, (const double[]){0.44144144144144143, 0.5585585585585585}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.7349397590361446, 0.26506024096385544}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.32510288065843623, 0.6748971193415638}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[17] <= 23.5) {
                                        if (input[17] <= 21.5) {
                                            if (input[21] <= 20370.0) {
                                                memcpy(var0, (const double[]){0.121875, 0.878125}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.024242424242424242, 0.9757575757575757}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[17] <= 22.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[12] <= 10.0) {
                                                    if (input[11] <= 12.0) {
                                                        memcpy(var0, (const double[]){0.46226415094339623, 0.5377358490566038}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.10204081632653061, 0.8979591836734694}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[21] <= 18007.0) {
                                                        memcpy(var0, (const double[]){0.16708229426433915, 0.8329177057356608}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.056264066016504126, 0.9437359339834959}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[11] <= 12.0) {
                                            if (input[12] <= 12.0) {
                                                if (input[21] <= 26608.5) {
                                                    if (input[20] <= 40.5) {
                                                        memcpy(var0, (const double[]){0.6007259528130672, 0.3992740471869328}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.22857142857142856, 0.7714285714285715}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[4] <= 320.0) {
                                                        memcpy(var0, (const double[]){0.6039603960396039, 0.39603960396039606}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8859060402684564, 0.11409395973154363}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[17] <= 25.5) {
                                                    memcpy(var0, (const double[]){0.2190082644628099, 0.78099173553719}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 26.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.44912280701754387, 0.5508771929824562}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[20] <= 35.0) {
                                                if (input[17] <= 27.5) {
                                                    if (input[12] <= 12.0) {
                                                        memcpy(var0, (const double[]){0.31230283911671924, 0.6876971608832808}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.1330049261083744, 0.8669950738916257}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[11] <= 14.0) {
                                                        if (input[12] <= 14.0) {
                                                            memcpy(var0, (const double[]){0.7527272727272727, 0.24727272727272728}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 33.5) {
                                                                memcpy(var0, (const double[]){0.37799043062200954, 0.6220095693779905}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[17] <= 31.5) {
                                                            memcpy(var0, (const double[]){0.21363636363636362, 0.7863636363636364}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.4748923959827834, 0.5251076040172167}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[6] <= 2.5) {
                                                    if (input[12] <= 12.0) {
                                                        if (input[17] <= 25.5) {
                                                            if (input[17] <= 24.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.12133891213389121, 0.8786610878661087}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[11] <= 14.0) {
                                                                memcpy(var0, (const double[]){0.6255707762557078, 0.3744292237442922}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.33031674208144796, 0.669683257918552}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[17] <= 27.5) {
                                                            memcpy(var0, (const double[]){0.0846286701208981, 0.9153713298791019}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 28.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[11] <= 14.0) {
                                                                    if (input[12] <= 14.0) {
                                                                        memcpy(var0, (const double[]){0.6101694915254238, 0.3898305084745763}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.2816326530612245, 0.7183673469387755}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[17] <= 29.5) {
                                                                        memcpy(var0, (const double[]){0.0273972602739726, 0.9726027397260274}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[6] <= 0.5) {
                                                                            if (input[17] <= 30.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.16479723899913717, 0.8352027610008628}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.35135135135135137, 0.6486486486486487}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[17] <= 37.5) {
                                                        memcpy(var0, (const double[]){0.06569343065693431, 0.9343065693430657}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.26717557251908397, 0.732824427480916}, 2 * sizeof(double));
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
                    if (input[6] <= 0.5) {
                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        if (input[6] <= 2.5) {
                            if (input[18] <= 0.5) {
                                if (input[19] <= 6.5) {
                                    if (input[10] <= -56.0) {
                                        memcpy(var0, (const double[]){0.007022471910112359, 0.9929775280898876}, 2 * sizeof(double));
                                    } else {
                                        if (input[21] <= 100823.0) {
                                            if (input[4] <= 2240.0) {
                                                memcpy(var0, (const double[]){0.06993006993006994, 0.9300699300699301}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.013062409288824383, 0.9869375907111756}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[22] <= 66.5) {
                                    if (input[15] <= -24.0) {
                                        if (input[21] <= 34213.0) {
                                            memcpy(var0, (const double[]){0.1592356687898089, 0.8407643312101911}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.014373716632443531, 0.9856262833675564}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[5] <= 1056.0) {
                                            if (input[21] <= 63310.5) {
                                                if (input[14] <= 72.0) {
                                                    if (input[17] <= 17.5) {
                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 18.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 19.5) {
                                                                memcpy(var0, (const double[]){0.12052117263843648, 0.8794788273615635}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[17] <= 20.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.27984344422700586, 0.7201565557729941}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.04516129032258064, 0.9548387096774194}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.05043859649122807, 0.9495614035087719}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.3865546218487395, 0.6134453781512605}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[14] <= 24.0) {
                                        memcpy(var0, (const double[]){0.4585635359116022, 0.5414364640883977}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.12056737588652482, 0.8794326241134752}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    }
                }
            }
        }
    }
    memcpy(output, var0, 2 * sizeof(double));
}
