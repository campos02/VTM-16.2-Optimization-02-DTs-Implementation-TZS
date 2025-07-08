//RAMIRO - VTM 16.2 - Otimização Inter-Quadros - Implementação de DTs no TZS

#include "DT_TZS_64x32.h"

#include <string.h>
void DT_TZS_64x32::score(double * input, double * output) {
    double var0[2];
    if (input[19] <= 2.5) {
        if (input[17] <= 12.5) {
            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
        } else {
            if (input[6] <= 0.5) {
                if (input[13] <= -2.0) {
                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[11] <= 8.5) {
                        if (input[0] <= 24.5) {
                            if (input[21] <= 6946.5) {
                                memcpy(var0, (const double[]){0.008025682182985553, 0.9919743178170144}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.3493975903614458, 0.6506024096385542}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var0, (const double[]){0.0031452035645640397, 0.996854796435436}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[13] <= 2.0) {
                            if (input[14] <= -2.0) {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[14] <= 2.0) {
                                    if (input[20] <= 44.0) {
                                        if (input[16] <= -2.0) {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[16] <= 2.0) {
                                                if (input[17] <= 23.5) {
                                                    memcpy(var0, (const double[]){0.7467166979362101, 0.25328330206378985}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.9762452107279693, 0.02375478927203065}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
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
        }
    } else {
        if (input[11] <= 7.5) {
            if (input[17] <= 15.5) {
                if (input[11] <= 6.5) {
                    if (input[13] <= -2.0) {
                        if (input[17] <= 12.5) {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[17] <= 13.5) {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[17] <= 14.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[21] <= -161673163.5) {
                                        memcpy(var0, (const double[]){0.8698884758364313, 0.13011152416356878}, 2 * sizeof(double));
                                    } else {
                                        if (input[21] <= 2056.0) {
                                            memcpy(var0, (const double[]){0.358264081255771, 0.641735918744229}, 2 * sizeof(double));
                                        } else {
                                            if (input[23] <= -25.5) {
                                                memcpy(var0, (const double[]){0.990909090909091, 0.00909090909090909}, 2 * sizeof(double));
                                            } else {
                                                if (input[14] <= -376.0) {
                                                    memcpy(var0, (const double[]){0.10421836228287841, 0.8957816377171216}, 2 * sizeof(double));
                                                } else {
                                                    if (input[6] <= 2.5) {
                                                        if (input[5] <= 1136.0) {
                                                            memcpy(var0, (const double[]){0.6233766233766234, 0.37662337662337664}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8410138248847926, 0.15898617511520738}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.08, 0.92}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[13] <= 2.0) {
                            if (input[14] <= 2.0) {
                                if (input[14] <= -2.0) {
                                    if (input[17] <= 12.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[23] <= -7.5) {
                                            memcpy(var0, (const double[]){0.9157509157509157, 0.08424908424908426}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.24324324324324326, 0.7567567567567568}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[7] <= 2.0) {
                                        if (input[15] <= -2.0) {
                                            memcpy(var0, (const double[]){0.6075949367088608, 0.3924050632911392}, 2 * sizeof(double));
                                        } else {
                                            if (input[16] <= -6.0) {
                                                memcpy(var0, (const double[]){0.6363636363636364, 0.36363636363636365}, 2 * sizeof(double));
                                            } else {
                                                if (input[8] <= 2.0) {
                                                    memcpy(var0, (const double[]){0.9995217951075961, 0.00047820489240389924}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.2857142857142857, 0.7142857142857143}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.08695652173913043, 0.9130434782608695}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[8] <= 2.0) {
                                    memcpy(var0, (const double[]){0.11367127496159754, 0.8863287250384024}, 2 * sizeof(double));
                                } else {
                                    if (input[17] <= 12.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.6850393700787402, 0.31496062992125984}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[7] <= 2.0) {
                                memcpy(var0, (const double[]){0.147024504084014, 0.852975495915986}, 2 * sizeof(double));
                            } else {
                                if (input[17] <= 12.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[17] <= 13.5) {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[17] <= 14.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.6146788990825688, 0.3853211009174312}, 2 * sizeof(double));
                                        }
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
                        if (input[12] <= 8.5) {
                            if (input[21] <= 3632.5) {
                                if (input[6] <= 0.5) {
                                    if (input[21] <= 1561.0) {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[17] <= 27.5) {
                                            memcpy(var0, (const double[]){0.3114754098360656, 0.6885245901639344}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.9577464788732394, 0.04225352112676056}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[17] <= 17.5) {
                                        if (input[22] <= -0.5) {
                                            memcpy(var0, (const double[]){0.4765886287625418, 0.5234113712374582}, 2 * sizeof(double));
                                        } else {
                                            if (input[16] <= 24.0) {
                                                if (input[16] <= -8.0) {
                                                    memcpy(var0, (const double[]){0.4875239923224568, 0.5124760076775432}, 2 * sizeof(double));
                                                } else {
                                                    if (input[13] <= 24.0) {
                                                        memcpy(var0, (const double[]){0.8203753351206434, 0.17962466487935658}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.4017094017094017, 0.5982905982905983}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.27091633466135456, 0.7290836653386454}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[17] <= 18.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[14] <= 104.0) {
                                                memcpy(var0, (const double[]){0.7842751842751843, 0.21572481572481572}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.4711864406779661, 0.5288135593220339}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[12] <= 2.0) {
                                    if (input[17] <= 17.5) {
                                        if (input[22] <= -0.5) {
                                            if (input[14] <= 6.0) {
                                                if (input[14] <= -2.0) {
                                                    memcpy(var0, (const double[]){0.5195618153364632, 0.48043818466353677}, 2 * sizeof(double));
                                                } else {
                                                    if (input[16] <= 14.0) {
                                                        memcpy(var0, (const double[]){0.7832076090521483, 0.21679239094785174}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.39057239057239057, 0.6094276094276094}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.4601479046836483, 0.5398520953163517}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[13] <= 2.0) {
                                                if (input[5] <= 984.0) {
                                                    if (input[14] <= -2.0) {
                                                        if (input[16] <= 80.0) {
                                                            memcpy(var0, (const double[]){0.5321100917431193, 0.46788990825688076}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9272727272727272, 0.07272727272727272}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[16] <= 2.0) {
                                                            if (input[16] <= -2.0) {
                                                                if (input[14] <= 10.0) {
                                                                    memcpy(var0, (const double[]){0.4090909090909091, 0.5909090909090909}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.917057902973396, 0.08294209702660407}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[15] <= 2.0) {
                                                                    if (input[14] <= 2.0) {
                                                                        if (input[15] <= -2.0) {
                                                                            memcpy(var0, (const double[]){0.4563758389261745, 0.5436241610738255}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[13] <= -2.0) {
                                                                                memcpy(var0, (const double[]){0.5161290322580645, 0.4838709677419355}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.9892244246374884, 0.01077557536251164}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.657608695652174, 0.3423913043478261}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[13] <= -24.0) {
                                                                        memcpy(var0, (const double[]){0.864321608040201, 0.135678391959799}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.35874439461883406, 0.6412556053811659}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.6348314606741573, 0.3651685393258427}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.9756915339480302, 0.024308466051969825}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[7] <= 56.0) {
                                                    memcpy(var0, (const double[]){0.3784431137724551, 0.6215568862275449}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.8092783505154639, 0.19072164948453607}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[17] <= 18.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 19.5) {
                                                memcpy(var0, (const double[]){0.6922501868925991, 0.30774981310740096}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 20.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 21.5) {
                                                        memcpy(var0, (const double[]){0.640728476821192, 0.35927152317880795}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 22.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8186195826645265, 0.18138041733547353}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[6] <= 0.5) {
                                        if (input[20] <= 40.5) {
                                            memcpy(var0, (const double[]){0.7834008097165992, 0.2165991902834008}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.0625, 0.9375}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[16] <= 8.0) {
                                            if (input[16] <= -8.0) {
                                                memcpy(var0, (const double[]){0.855166802278275, 0.14483319772172498}, 2 * sizeof(double));
                                            } else {
                                                if (input[14] <= -8.0) {
                                                    memcpy(var0, (const double[]){0.8605737158105403, 0.13942628418945963}, 2 * sizeof(double));
                                                } else {
                                                    if (input[15] <= -8.0) {
                                                        memcpy(var0, (const double[]){0.8941641938674579, 0.10583580613254204}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[15] <= 8.0) {
                                                            if (input[14] <= 8.0) {
                                                                memcpy(var0, (const double[]){0.9938466311598325, 0.006153368840167537}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.8920570264765784, 0.1079429735234216}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9517282479141835, 0.048271752085816445}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[15] <= 136.0) {
                                                memcpy(var0, (const double[]){0.8264808362369338, 0.1735191637630662}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.994052676295667, 0.00594732370433305}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[6] <= 0.5) {
                                if (input[0] <= 34.5) {
                                    if (input[17] <= 21.5) {
                                        memcpy(var0, (const double[]){0.40842598010532477, 0.5915740198946753}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.7359307359307359, 0.26406926406926406}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= 1008.0) {
                                    if (input[19] <= 6.5) {
                                        if (input[17] <= 17.5) {
                                            if (input[18] <= 0.5) {
                                                if (input[16] <= 8.0) {
                                                    if (input[16] <= -8.0) {
                                                        memcpy(var0, (const double[]){0.3237822349570201, 0.6762177650429799}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[15] <= -8.0) {
                                                            memcpy(var0, (const double[]){0.3421828908554572, 0.6578171091445427}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[15] <= 8.0) {
                                                                memcpy(var0, (const double[]){0.9307317073170732, 0.06926829268292684}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.5310173697270472, 0.46898263027295284}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.2795497185741088, 0.7204502814258912}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.7437641723356009, 0.2562358276643991}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[17] <= 18.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.6862702702702703, 0.31372972972972973}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.9535256410256411, 0.046474358974358976}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[17] <= 17.5) {
                            memcpy(var0, (const double[]){0.08317338451695458, 0.9168266154830454}, 2 * sizeof(double));
                        } else {
                            if (input[17] <= 18.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[20] <= 30.5) {
                                    memcpy(var0, (const double[]){0.47875816993464054, 0.5212418300653595}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.14705882352941177, 0.8529411764705882}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[18] <= 0.5) {
                if (input[11] <= 25.5) {
                    if (input[17] <= 13.5) {
                        if (input[19] <= 6.5) {
                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[17] <= 14.5) {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[17] <= 15.5) {
                                if (input[19] <= 6.5) {
                                    if (input[13] <= -366.0) {
                                        if (input[6] <= 0.5) {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.19490497371613424, 0.8050950262838658}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.06010362694300518, 0.9398963730569948}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[17] <= 16.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[17] <= 17.5) {
                                        if (input[19] <= 6.5) {
                                            if (input[11] <= 8.5) {
                                                if (input[6] <= 0.5) {
                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.3884072330938816, 0.6115927669061184}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[12] <= 3.0) {
                                                    if (input[15] <= -840.0) {
                                                        if (input[6] <= 0.5) {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.2419113987058238, 0.7580886012941762}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.0789127575624726, 0.9210872424375274}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[17] <= 18.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 19.5) {
                                                if (input[19] <= 6.5) {
                                                    if (input[11] <= 10.5) {
                                                        if (input[12] <= 8.0) {
                                                            if (input[12] <= 3.0) {
                                                                if (input[6] <= 0.5) {
                                                                    if (input[21] <= 3482.5) {
                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.3321554770318021, 0.6678445229681979}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.38723601048250345, 0.6127639895174966}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.783608914450036, 0.21639108554996406}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.12260061919504645, 0.8773993808049536}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[6] <= 2.5) {
                                                            memcpy(var0, (const double[]){0.08349218452154022, 0.9165078154784598}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[7] <= -420.0) {
                                                                memcpy(var0, (const double[]){0.4602739726027397, 0.5397260273972603}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.08256880733944955, 0.9174311926605505}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[17] <= 20.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 21.5) {
                                                        if (input[19] <= 6.5) {
                                                            if (input[11] <= 12.5) {
                                                                if (input[12] <= 8.0) {
                                                                    if (input[12] <= 3.0) {
                                                                        if (input[6] <= 0.5) {
                                                                            if (input[21] <= 3501.5) {
                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.38177874186550975, 0.6182212581344902}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.4064419724389839, 0.593558027561016}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.7833537331701347, 0.21664626682986537}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.138996138996139, 0.861003861003861}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[6] <= 0.5) {
                                                                    memcpy(var0, (const double[]){0.0148975791433892, 0.9851024208566108}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.1431261770244821, 0.8568738229755178}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[17] <= 22.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 23.5) {
                                                                if (input[11] <= 14.5) {
                                                                    if (input[19] <= 6.5) {
                                                                        if (input[12] <= 10.0) {
                                                                            if (input[6] <= 0.5) {
                                                                                if (input[21] <= 2922.0) {
                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.49645390070921985, 0.5035460992907801}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.45550027639579876, 0.5444997236042012}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.16206261510128914, 0.8379373848987108}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[6] <= 0.5) {
                                                                        memcpy(var0, (const double[]){0.01675977653631285, 0.9832402234636871}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.16735028712059064, 0.8326497128794094}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[17] <= 24.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[17] <= 25.5) {
                                                                        if (input[11] <= 16.5) {
                                                                            if (input[19] <= 6.5) {
                                                                                if (input[6] <= 0.5) {
                                                                                    if (input[21] <= 1287.5) {
                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.4257703081232493, 0.5742296918767507}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[11] <= 15.5) {
                                                                                        if (input[12] <= 10.0) {
                                                                                            memcpy(var0, (const double[]){0.39145246206255807, 0.608547537937442}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.13804713804713806, 0.8619528619528619}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.6052434456928839, 0.3947565543071161}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.1458098459225855, 0.8541901540774145}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[17] <= 26.5) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[17] <= 27.5) {
                                                                                if (input[11] <= 18.5) {
                                                                                    if (input[19] <= 6.5) {
                                                                                        if (input[11] <= 17.5) {
                                                                                            if (input[12] <= 12.0) {
                                                                                                memcpy(var0, (const double[]){0.37194805194805197, 0.6280519480519481}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.13738019169329074, 0.8626198083067093}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[6] <= 0.5) {
                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.6645367412140575, 0.3354632587859425}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.1507537688442211, 0.8492462311557789}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[17] <= 28.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[17] <= 29.5) {
                                                                                        if (input[11] <= 20.5) {
                                                                                            if (input[11] <= 19.5) {
                                                                                                memcpy(var0, (const double[]){0.3563187550308559, 0.643681244969144}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[6] <= 0.5) {
                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.6622889305816135, 0.33771106941838647}, 2 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.1354620222544751, 0.8645379777455249}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[17] <= 30.5) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[17] <= 31.5) {
                                                                                                if (input[11] <= 22.5) {
                                                                                                    if (input[11] <= 21.5) {
                                                                                                        memcpy(var0, (const double[]){0.3475409836065574, 0.6524590163934426}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[6] <= 0.5) {
                                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.725506072874494, 0.2744939271255061}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.14470284237726097, 0.8552971576227391}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[17] <= 32.5) {
                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[20] <= 44.0) {
                                                                                                        if (input[6] <= 0.5) {
                                                                                                            if (input[21] <= 2164.0) {
                                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[23] <= -17.5) {
                                                                                                                    if (input[21] <= 10370.0) {
                                                                                                                        memcpy(var0, (const double[]){0.6015037593984962, 0.39849624060150374}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.15, 0.85}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[11] <= 14.0) {
                                                                                                                        memcpy(var0, (const double[]){0.8597748208802457, 0.14022517911975435}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.5723962743437765, 0.42760372565622357}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[21] <= 2233.5) {
                                                                                                                if (input[6] <= 1.5) {
                                                                                                                    if (input[4] <= 1888.0) {
                                                                                                                        memcpy(var0, (const double[]){0.721763085399449, 0.27823691460055094}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[15] <= -560.0) {
                                                                                                                            memcpy(var0, (const double[]){0.8187134502923976, 0.18128654970760233}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.224, 0.776}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[17] <= 33.5) {
                                                                                                                        memcpy(var0, (const double[]){0.7012089810017271, 0.2987910189982729}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[17] <= 34.5) {
                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.810979413599501, 0.18902058640049907}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[23] <= -4.5) {
                                                                                                                    if (input[6] <= 2.5) {
                                                                                                                        memcpy(var0, (const double[]){0.5333333333333333, 0.4666666666666667}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.2724458204334365, 0.7275541795665634}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.6023419203747072, 0.39765807962529276}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.03389830508474576, 0.9661016949152542}, 2 * sizeof(double));
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
                    if (input[22] <= -248.5) {
                        if (input[4] <= 2720.0) {
                            if (input[5] <= 1008.0) {
                                if (input[4] <= 544.0) {
                                    memcpy(var0, (const double[]){0.9960760639903411, 0.00392393600965892}, 2 * sizeof(double));
                                } else {
                                    if (input[7] <= -5764.0) {
                                        memcpy(var0, (const double[]){0.9772058823529411, 0.022794117647058822}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.7789473684210526, 0.22105263157894736}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[23] <= 101.5) {
                                    memcpy(var0, (const double[]){0.9655172413793104, 0.034482758620689655}, 2 * sizeof(double));
                                } else {
                                    if (input[4] <= 352.0) {
                                        memcpy(var0, (const double[]){0.9212827988338192, 0.07871720116618076}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.5139664804469274, 0.4860335195530726}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[22] <= -586.0) {
                                memcpy(var0, (const double[]){0.8951612903225806, 0.10483870967741936}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.38922155688622756, 0.6107784431137725}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[4] <= 224.0) {
                            if (input[17] <= 54.5) {
                                if (input[13] <= -1566.0) {
                                    if (input[20] <= 30.5) {
                                        memcpy(var0, (const double[]){0.9882294014525419, 0.011770598547458051}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.8195718654434251, 0.18042813455657492}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[4] <= 32.0) {
                                        if (input[22] <= -3.5) {
                                            memcpy(var0, (const double[]){0.9792566983578219, 0.020743301642178046}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.8669527896995708, 0.13304721030042918}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[7] <= 1314.0) {
                                            memcpy(var0, (const double[]){0.727339992600814, 0.2726600073991861}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.9087048832271762, 0.09129511677282377}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var0, (const double[]){0.4124087591240876, 0.5875912408759124}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[6] <= 2.5) {
                                if (input[16] <= -54.0) {
                                    if (input[21] <= 10.5) {
                                        memcpy(var0, (const double[]){0.8221618357487923, 0.17783816425120774}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.6038647342995169, 0.3961352657004831}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[15] <= -554.0) {
                                        if (input[21] <= 84.5) {
                                            if (input[5] <= 728.0) {
                                                memcpy(var0, (const double[]){0.8449438202247191, 0.1550561797752809}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.6706989247311828, 0.3293010752688172}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.5374592833876222, 0.46254071661237783}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[4] <= 1888.0) {
                                            if (input[16] <= 1368.0) {
                                                if (input[17] <= 48.5) {
                                                    if (input[17] <= 47.5) {
                                                        if (input[17] <= 46.5) {
                                                            if (input[17] <= 45.5) {
                                                                if (input[17] <= 44.5) {
                                                                    if (input[17] <= 43.5) {
                                                                        if (input[17] <= 42.5) {
                                                                            if (input[17] <= 41.5) {
                                                                                if (input[17] <= 40.5) {
                                                                                    if (input[17] <= 39.5) {
                                                                                        if (input[17] <= 38.5) {
                                                                                            if (input[17] <= 37.5) {
                                                                                                if (input[17] <= 36.5) {
                                                                                                    if (input[17] <= 35.5) {
                                                                                                        if (input[17] <= 34.5) {
                                                                                                            if (input[17] <= 33.5) {
                                                                                                                if (input[17] <= 32.5) {
                                                                                                                    if (input[17] <= 31.5) {
                                                                                                                        if (input[6] <= 0.5) {
                                                                                                                            memcpy(var0, (const double[]){0.03902439024390244, 0.9609756097560975}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[17] <= 16.5) {
                                                                                                                                memcpy(var0, (const double[]){0.9389671361502347, 0.06103286384976526}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.508274231678487, 0.491725768321513}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.08592592592592592, 0.914074074074074}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[11] <= 26.5) {
                                                                                                                memcpy(var0, (const double[]){0.5975103734439834, 0.4024896265560166}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.10748560460652591, 0.8925143953934741}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[11] <= 28.5) {
                                                                                                        memcpy(var0, (const double[]){0.5323741007194245, 0.4676258992805755}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.08598130841121496, 0.914018691588785}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[11] <= 30.5) {
                                                                                                memcpy(var0, (const double[]){0.4983388704318937, 0.5016611295681063}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.05491990846681922, 0.9450800915331807}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[6] <= 0.5) {
                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.37791932059447986, 0.6220806794055201}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[11] <= 35.0) {
                                                                                memcpy(var0, (const double[]){0.514018691588785, 0.48598130841121495}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.03802281368821293, 0.9619771863117871}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.13105413105413105, 0.8689458689458689}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.07166123778501629, 0.9283387622149837}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[17] <= 49.5) {
                                                        memcpy(var0, (const double[]){0.07258064516129033, 0.9274193548387096}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 50.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.39281705948372614, 0.6071829405162739}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.9079601990049752, 0.09203980099502487}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[4] <= 3680.0) {
                                                if (input[20] <= 26.0) {
                                                    if (input[14] <= 26.0) {
                                                        memcpy(var0, (const double[]){0.3273092369477912, 0.6726907630522089}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.0718503937007874, 0.9281496062992126}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[13] <= -1258.0) {
                                                        memcpy(var0, (const double[]){0.16692913385826771, 0.8330708661417323}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.4866112650046168, 0.5133887349953832}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.9201596806387226, 0.07984031936127745}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[21] <= 1507.0) {
                                    if (input[17] <= 24.5) {
                                        memcpy(var0, (const double[]){0.9852744310575636, 0.014725568942436412}, 2 * sizeof(double));
                                    } else {
                                        if (input[17] <= 41.5) {
                                            memcpy(var0, (const double[]){0.7982062780269058, 0.20179372197309417}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 42.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.87870875860432, 0.12129124139568004}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[20] <= 24.5) {
                                        memcpy(var0, (const double[]){0.8994708994708994, 0.10052910052910052}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.5238095238095238, 0.47619047619047616}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[6] <= 2.5) {
                    if (input[12] <= 8.0) {
                        if (input[17] <= 17.5) {
                            if (input[17] <= 16.5) {
                                if (input[17] <= 15.5) {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[12] <= 3.0) {
                                if (input[17] <= 18.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[17] <= 19.5) {
                                        memcpy(var0, (const double[]){0.13533834586466165, 0.8646616541353384}, 2 * sizeof(double));
                                    } else {
                                        if (input[17] <= 20.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.38943894389438943, 0.6105610561056105}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[6] <= 0.5) {
                                    if (input[20] <= 40.5) {
                                        memcpy(var0, (const double[]){0.4927536231884058, 0.5072463768115942}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.0594059405940594, 0.9405940594059405}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.7522658610271903, 0.24773413897280966}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[20] <= 38.0) {
                            if (input[17] <= 19.5) {
                                memcpy(var0, (const double[]){0.12196240256762952, 0.8780375974323704}, 2 * sizeof(double));
                            } else {
                                if (input[17] <= 20.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[11] <= 10.0) {
                                        memcpy(var0, (const double[]){0.527584020291693, 0.4724159797083069}, 2 * sizeof(double));
                                    } else {
                                        if (input[17] <= 23.5) {
                                            memcpy(var0, (const double[]){0.15603900975243812, 0.8439609902475619}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.4052631578947368, 0.5947368421052631}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[6] <= 0.5) {
                                if (input[0] <= 34.5) {
                                    memcpy(var0, (const double[]){0.18070175438596492, 0.8192982456140351}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[21] <= 7406.0) {
                                    memcpy(var0, (const double[]){0.45977011494252873, 0.5402298850574713}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.1891304347826087, 0.8108695652173913}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[20] <= 44.0) {
                        if (input[17] <= 19.5) {
                            memcpy(var0, (const double[]){0.01407035175879397, 0.985929648241206}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){0.16944801026957637, 0.8305519897304237}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    memcpy(output, var0, 2 * sizeof(double));
}
