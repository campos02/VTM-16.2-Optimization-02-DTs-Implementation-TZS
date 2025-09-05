#include <string.h>
#include "DtModel2.h"

void DtModel2::score(double * input, double * output) {
    double var0[2];
    if (input[18] <= 13.5) {
        if (input[18] <= 12.5) {
            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
        } else {
            if (input[21] <= 186721024.0) {
                memcpy(var0, (const double[]){0.0020507295683072505, 0.9979492704316928}, 2 * sizeof(double));
            } else {
                if (input[21] <= 304192256.0) {
                    if (input[24] <= 3869.0) {
                        memcpy(var0, (const double[]){0.05419995681278342, 0.9458000431872166}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (const double[]){0.2161261198694354, 0.7838738801305646}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var0, (const double[]){0.05280550539978878, 0.9471944946002112}, 2 * sizeof(double));
                }
            }
        }
    } else {
        if (input[12] <= 6.5) {
            if (input[14] <= -2.0) {
                if (input[8] <= -14.0) {
                    if (input[26] <= 2176.0) {
                        if (input[18] <= 16.5) {
                            memcpy(var0, (const double[]){0.9926470588235294, 0.007352941176470588}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){0.5261669024045261, 0.4738330975954738}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[18] <= 15.5) {
                            if (input[18] <= 14.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[16] <= -1576.0) {
                                    if (input[17] <= -222.0) {
                                        if (input[21] <= 514094.5) {
                                            if (input[25] <= 1.0) {
                                                if (input[21] <= -467.5) {
                                                    memcpy(var0, (const double[]){0.6581593194122196, 0.34184068058778033}, 2 * sizeof(double));
                                                } else {
                                                    if (input[22] <= -268.5) {
                                                        if (input[4] <= 3320.0) {
                                                            memcpy(var0, (const double[]){0.21121099174157715, 0.7887890082584229}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.45819112627986347, 0.5418088737201365}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[15] <= -376.0) {
                                                            memcpy(var0, (const double[]){0.17268041237113402, 0.8273195876288659}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[15] <= -254.0) {
                                                                if (input[14] <= -4290.0) {
                                                                    memcpy(var0, (const double[]){0.08085106382978724, 0.9191489361702128}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.7165188001689903, 0.2834811998310097}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.11237113402061856, 0.8876288659793814}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.641482871891131, 0.3585171281088691}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.7127120511125798, 0.28728794888742015}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.18031674208144796, 0.819683257918552}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[15] <= -958.0) {
                                        memcpy(var0, (const double[]){0.926046511627907, 0.07395348837209302}, 2 * sizeof(double));
                                    } else {
                                        if (input[14] <= -18.0) {
                                            if (input[21] <= -1908864512.0) {
                                                memcpy(var0, (const double[]){0.9362363919129082, 0.06376360808709176}, 2 * sizeof(double));
                                            } else {
                                                if (input[24] <= 1505.0) {
                                                    memcpy(var0, (const double[]){0.7770114942528735, 0.22298850574712645}, 2 * sizeof(double));
                                                } else {
                                                    if (input[8] <= -30.0) {
                                                        if (input[4] <= 3052.0) {
                                                            if (input[4] <= 1640.0) {
                                                                memcpy(var0, (const double[]){0.46667249825052487, 0.5333275017494752}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.3158745554477853, 0.6841254445522147}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7939733707077785, 0.20602662929222143}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.09347826086956522, 0.9065217391304348}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[15] <= 18.0) {
                                                memcpy(var0, (const double[]){0.8957185247986434, 0.10428147520135651}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.1574585635359116, 0.8425414364640884}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[18] <= 16.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[18] <= 17.5) {
                                    memcpy(var0, (const double[]){0.2122895693220268, 0.7877104306779732}, 2 * sizeof(double));
                                } else {
                                    if (input[18] <= 18.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[18] <= 19.5) {
                                            memcpy(var0, (const double[]){0.2057183533040693, 0.7942816466959307}, 2 * sizeof(double));
                                        } else {
                                            if (input[18] <= 20.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[18] <= 21.5) {
                                                    memcpy(var0, (const double[]){0.10286866875840431, 0.8971313312415957}, 2 * sizeof(double));
                                                } else {
                                                    if (input[18] <= 22.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[21] <= -3.5) {
                                                            memcpy(var0, (const double[]){0.797684338817794, 0.20231566118220598}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[21] <= 94927.0) {
                                                                memcpy(var0, (const double[]){0.23223114956736712, 0.7677688504326329}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.774330900243309, 0.225669099756691}, 2 * sizeof(double));
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
                    if (input[18] <= 15.5) {
                        if (input[18] <= 14.5) {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){0.025219941348973606, 0.9747800586510263}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[18] <= 16.5) {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[18] <= 17.5) {
                                if (input[15] <= 2.0) {
                                    if (input[14] <= -56.0) {
                                        if (input[14] <= -72.0) {
                                            memcpy(var0, (const double[]){0.025039123630672927, 0.974960876369327}, 2 * sizeof(double));
                                        } else {
                                            if (input[15] <= -8.0) {
                                                memcpy(var0, (const double[]){0.04240282685512368, 0.9575971731448764}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.9809523809523809, 0.01904761904761905}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[21] <= 235271.0) {
                                            memcpy(var0, (const double[]){0.1205115592720118, 0.8794884407279882}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.49078947368421055, 0.5092105263157894}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.03377821716922063, 0.9662217828307794}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[18] <= 18.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[8] <= -2.0) {
                                        memcpy(var0, (const double[]){0.01824457593688363, 0.9817554240631163}, 2 * sizeof(double));
                                    } else {
                                        if (input[18] <= 19.5) {
                                            if (input[15] <= 56.0) {
                                                memcpy(var0, (const double[]){0.18660446517827392, 0.8133955348217261}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.6682242990654206, 0.3317757009345794}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[18] <= 20.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[18] <= 21.5) {
                                                    memcpy(var0, (const double[]){0.21080720480320214, 0.7891927951967979}, 2 * sizeof(double));
                                                } else {
                                                    if (input[18] <= 22.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 23.5) {
                                                            memcpy(var0, (const double[]){0.11736178467507274, 0.8826382153249273}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 24.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.45429417571569597, 0.545705824284304}, 2 * sizeof(double));
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
                if (input[14] <= 2.0) {
                    if (input[23] <= -0.5) {
                        if (input[15] <= -2.0) {
                            if (input[18] <= 15.5) {
                                if (input[9] <= -28.0) {
                                    memcpy(var0, (const double[]){0.8431372549019608, 0.1568627450980392}, 2 * sizeof(double));
                                } else {
                                    if (input[18] <= 14.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.0400266844563042, 0.9599733155436958}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[18] <= 16.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[16] <= 4.0) {
                                        if (input[8] <= 8.0) {
                                            memcpy(var0, (const double[]){0.5395051875498803, 0.4604948124501197}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.9898477157360406, 0.01015228426395939}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.22920353982300884, 0.7707964601769911}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[15] <= 4.0) {
                                memcpy(var0, (const double[]){0.9904511486299474, 0.009548851370052588}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.500517063081696, 0.49948293691830403}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[15] <= 2.0) {
                            if (input[15] <= -2.0) {
                                if (input[18] <= 15.5) {
                                    if (input[18] <= 14.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.016085183507023107, 0.9839148164929769}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[15] <= -18.0) {
                                        if (input[21] <= 0.5) {
                                            memcpy(var0, (const double[]){0.4532940019665683, 0.5467059980334317}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.7474373576309795, 0.2525626423690205}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[15] <= -14.0) {
                                            memcpy(var0, (const double[]){0.9822499400335812, 0.017750059966418805}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.1368421052631579, 0.8631578947368421}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[8] <= -2.0) {
                                    if (input[8] <= -12.0) {
                                        memcpy(var0, (const double[]){0.9891625615763546, 0.01083743842364532}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.017994858611825194, 0.9820051413881749}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.9994813051976833, 0.0005186948023166951}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[18] <= 15.5) {
                                if (input[18] <= 14.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[9] <= 14.0) {
                                        memcpy(var0, (const double[]){0.02634547747030327, 0.9736545225296968}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.7833140208574739, 0.21668597914252608}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[18] <= 16.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[15] <= 14.0) {
                                        memcpy(var0, (const double[]){0.08037383177570094, 0.9196261682242991}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.6191065462195273, 0.38089345378047273}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[8] <= 14.0) {
                        if (input[18] <= 17.5) {
                            if (input[18] <= 15.5) {
                                if (input[18] <= 14.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.031289389782753765, 0.9687106102172462}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[18] <= 16.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[14] <= 56.0) {
                                        memcpy(var0, (const double[]){0.09599371563236449, 0.9040062843676355}, 2 * sizeof(double));
                                    } else {
                                        if (input[14] <= 72.0) {
                                            if (input[15] <= -32.0) {
                                                memcpy(var0, (const double[]){0.045275590551181105, 0.9547244094488189}, 2 * sizeof(double));
                                            } else {
                                                if (input[15] <= 8.0) {
                                                    memcpy(var0, (const double[]){0.981242672919109, 0.01875732708089097}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.05319148936170213, 0.9468085106382979}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.04878048780487805, 0.9512195121951219}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[18] <= 18.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[18] <= 19.5) {
                                    memcpy(var0, (const double[]){0.17965023847376788, 0.8203497615262321}, 2 * sizeof(double));
                                } else {
                                    if (input[18] <= 20.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[15] <= 3634.0) {
                                            if (input[21] <= 57068928.0) {
                                                memcpy(var0, (const double[]){0.2868263473053892, 0.7131736526946107}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.6037126715092817, 0.3962873284907183}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.6037087912087912, 0.39629120879120877}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[18] <= 16.5) {
                            if (input[18] <= 15.5) {
                                if (input[18] <= 14.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[15] <= -18.0) {
                                        if (input[9] <= -30.0) {
                                            if (input[24] <= 3964.5) {
                                                memcpy(var0, (const double[]){0.7360454115421002, 0.2639545884578997}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.3354277428709522, 0.6645722571290479}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.018444512757454658, 0.9815554872425454}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[9] <= -18.0) {
                                            memcpy(var0, (const double[]){0.07472826086956522, 0.9252717391304348}, 2 * sizeof(double));
                                        } else {
                                            if (input[16] <= 20.0) {
                                                memcpy(var0, (const double[]){0.8087263111502865, 0.19127368884971352}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.5401196623227604, 0.45988033767723957}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            } else {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[18] <= 17.5) {
                                memcpy(var0, (const double[]){0.2749966266360815, 0.7250033733639185}, 2 * sizeof(double));
                            } else {
                                if (input[18] <= 18.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[21] <= 224925.0) {
                                        if (input[21] <= -1.5) {
                                            memcpy(var0, (const double[]){0.7057256990679095, 0.29427430093209056}, 2 * sizeof(double));
                                        } else {
                                            if (input[21] <= 0.5) {
                                                memcpy(var0, (const double[]){0.19022265246853823, 0.8097773475314618}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.39840925524222703, 0.601590744757773}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.7190243902439024, 0.2809756097560976}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[26] <= 2176.0) {
                if (input[18] <= 15.5) {
                    if (input[18] <= 14.5) {
                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[21] <= 47603345.0) {
                            memcpy(var0, (const double[]){0.009816310872410526, 0.9901836891275895}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){0.2615702479338843, 0.7384297520661157}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[12] <= 7.5) {
                        if (input[16] <= -2.0) {
                            if (input[18] <= 16.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[18] <= 17.5) {
                                    if (input[19] <= 0.5) {
                                        memcpy(var0, (const double[]){0.13775385368240764, 0.8622461463175923}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.49167733674775926, 0.5083226632522407}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[18] <= 18.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[13] <= 10.0) {
                                            memcpy(var0, (const double[]){0.6081081081081081, 0.3918918918918919}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.3325485579752796, 0.6674514420247204}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[16] <= 2.0) {
                                if (input[15] <= -2.0) {
                                    if (input[18] <= 17.5) {
                                        if (input[18] <= 16.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.11152725759467333, 0.8884727424053267}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[18] <= 18.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[18] <= 19.5) {
                                                memcpy(var0, (const double[]){0.2429718875502008, 0.7570281124497992}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.736118455843469, 0.2638815441565309}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[15] <= 2.0) {
                                        if (input[17] <= 2.0) {
                                            if (input[17] <= -2.0) {
                                                if (input[18] <= 17.5) {
                                                    memcpy(var0, (const double[]){0.1530324400564175, 0.8469675599435825}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.7122002085505735, 0.28779979144942647}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[14] <= 2.0) {
                                                    if (input[14] <= -2.0) {
                                                        if (input[18] <= 17.5) {
                                                            if (input[18] <= 16.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.14137675795706883, 0.8586232420429312}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8610644257703082, 0.13893557422969188}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[18] <= 18.5) {
                                                            if (input[13] <= 8.0) {
                                                                memcpy(var0, (const double[]){0.9885789958625135, 0.011421004137486469}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[18] <= 16.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.7059383931406796, 0.2940616068593204}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[19] <= 0.5) {
                                                                if (input[27] <= 120.0) {
                                                                    if (input[5] <= 156.0) {
                                                                        memcpy(var0, (const double[]){0.5738585496866607, 0.4261414503133393}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.10509554140127389, 0.8949044585987261}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.9786729857819905, 0.02132701421800948}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.8508990318118949, 0.14910096818810512}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[18] <= 17.5) {
                                                        if (input[18] <= 16.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[8] <= 14.0) {
                                                                memcpy(var0, (const double[]){0.17587939698492464, 0.8241206030150754}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.7512562814070352, 0.24874371859296482}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8027421494913755, 0.19725785050862452}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[18] <= 17.5) {
                                                if (input[19] <= 0.5) {
                                                    memcpy(var0, (const double[]){0.10366232153941651, 0.8963376784605835}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.806282722513089, 0.193717277486911}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.6855932203389831, 0.31440677966101693}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[18] <= 17.5) {
                                            if (input[18] <= 16.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[19] <= 0.5) {
                                                    memcpy(var0, (const double[]){0.0996060776589758, 0.9003939223410242}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.5805369127516778, 0.41946308724832215}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[18] <= 18.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[18] <= 19.5) {
                                                    memcpy(var0, (const double[]){0.30272727272727273, 0.6972727272727273}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.7791920309905921, 0.22080796900940786}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[18] <= 16.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[18] <= 17.5) {
                                        memcpy(var0, (const double[]){0.26044172315766456, 0.7395582768423354}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.6371853952499114, 0.36281460475008864}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[18] <= 16.5) {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[9] <= 9630.0) {
                                if (input[18] <= 17.5) {
                                    if (input[12] <= 8.5) {
                                        if (input[24] <= 18027.5) {
                                            memcpy(var0, (const double[]){0.17013621177075303, 0.829863788229247}, 2 * sizeof(double));
                                        } else {
                                            if (input[0] <= 24.5) {
                                                memcpy(var0, (const double[]){0.6807712908409213, 0.31922870915907875}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.29043392504930965, 0.7095660749506904}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.06719005300282947, 0.9328099469971706}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[18] <= 18.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[18] <= 19.5) {
                                            if (input[12] <= 10.5) {
                                                if (input[26] <= 1408.0) {
                                                    memcpy(var0, (const double[]){0.1993895064217013, 0.8006104935782987}, 2 * sizeof(double));
                                                } else {
                                                    if (input[16] <= 136.0) {
                                                        memcpy(var0, (const double[]){0.6927580893682589, 0.30724191063174117}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.2111916713143707, 0.7888083286856293}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.07971262401642148, 0.9202873759835786}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[18] <= 20.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[18] <= 21.5) {
                                                    if (input[12] <= 12.5) {
                                                        if (input[24] <= 15041.5) {
                                                            memcpy(var0, (const double[]){0.2249280323659846, 0.7750719676340154}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[26] <= 1408.0) {
                                                                memcpy(var0, (const double[]){0.25492654962379074, 0.7450734503762092}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[22] <= 8.5) {
                                                                    memcpy(var0, (const double[]){0.6531309297912713, 0.34686907020872865}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.31134401972872994, 0.6886559802712701}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.07961380183602405, 0.9203861981639759}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[23] <= -176.5) {
                                                        if (input[1] <= 3.5) {
                                                            if (input[1] <= 2.5) {
                                                                if (input[18] <= 49.5) {
                                                                    memcpy(var0, (const double[]){0.5833676975945017, 0.41663230240549826}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.7498984152783421, 0.2501015847216579}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[18] <= 51.5) {
                                                                    if (input[14] <= -1562.0) {
                                                                        if (input[0] <= 24.5) {
                                                                            if (input[12] <= 43.0) {
                                                                                if (input[18] <= 49.5) {
                                                                                    if (input[12] <= 41.0) {
                                                                                        if (input[18] <= 47.5) {
                                                                                            if (input[12] <= 39.0) {
                                                                                                if (input[18] <= 39.5) {
                                                                                                    memcpy(var0, (const double[]){0.193632228719948, 0.806367771280052}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[18] <= 40.5) {
                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[12] <= 33.0) {
                                                                                                            memcpy(var0, (const double[]){0.9327731092436975, 0.06722689075630252}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[18] <= 45.5) {
                                                                                                                memcpy(var0, (const double[]){0.20327249842668346, 0.7967275015733165}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.9041666666666667, 0.09583333333333334}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.015873015873015872, 0.9841269841269841}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.9451219512195121, 0.054878048780487805}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.018579234972677595, 0.9814207650273225}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.9428571428571428, 0.05714285714285714}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.04730983302411874, 0.9526901669758813}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.16683400267737616, 0.8331659973226239}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[24] <= 90487.0) {
                                                                            if (input[20] <= 26.0) {
                                                                                memcpy(var0, (const double[]){0.5224264705882353, 0.47757352941176473}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.3154901960784314, 0.6845098039215687}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.6418918918918919, 0.3581081081081081}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[18] <= 52.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 53.5) {
                                                                            if (input[12] <= 45.0) {
                                                                                memcpy(var0, (const double[]){0.839041095890411, 0.16095890410958905}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.005131964809384164, 0.9948680351906158}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[18] <= 54.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[18] <= 55.5) {
                                                                                    memcpy(var0, (const double[]){0.07829787234042553, 0.9217021276595745}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[18] <= 56.5) {
                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.17912087912087912, 0.8208791208791208}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[0] <= 24.5) {
                                                                if (input[15] <= -1696.0) {
                                                                    if (input[21] <= 29821.5) {
                                                                        if (input[14] <= -3174.0) {
                                                                            memcpy(var0, (const double[]){0.1706758304696449, 0.8293241695303551}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.33145169879646397, 0.668548301203536}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[21] <= 386434432.0) {
                                                                            memcpy(var0, (const double[]){0.5734629294755877, 0.4265370705244123}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.1166077738515901, 0.8833922261484098}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.8081671415004749, 0.19183285849952517}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[16] <= 84.0) {
                                                                    if (input[14] <= -132.0) {
                                                                        memcpy(var0, (const double[]){0.050451373327357704, 0.9495486266726423}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.1838935574229692, 0.8161064425770308}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.5784832451499118, 0.42151675485008816}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[20] <= 24.5) {
                                                            if (input[18] <= 22.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[24] <= 6203.5) {
                                                                    if (input[4] <= 1068.0) {
                                                                        if (input[18] <= 23.5) {
                                                                            memcpy(var0, (const double[]){0.1660746003552398, 0.8339253996447602}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[18] <= 24.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[4] <= 632.0) {
                                                                                    memcpy(var0, (const double[]){0.3685636856368564, 0.6314363143631436}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.6418826739427013, 0.3581173260572988}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.1486835312338668, 0.8513164687661332}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[18] <= 23.5) {
                                                                        if (input[12] <= 15.0) {
                                                                            memcpy(var0, (const double[]){0.5154098360655738, 0.4845901639344262}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.12109375, 0.87890625}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[18] <= 24.5) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[6] <= 24.0) {
                                                                                if (input[7] <= 24.0) {
                                                                                    if (input[24] <= 60819.0) {
                                                                                        if (input[16] <= 132.0) {
                                                                                            if (input[22] <= -31.5) {
                                                                                                if (input[21] <= 26827.5) {
                                                                                                    memcpy(var0, (const double[]){0.31092184368737474, 0.6890781563126253}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.5139331210191083, 0.48606687898089174}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[12] <= 17.0) {
                                                                                                    memcpy(var0, (const double[]){0.7281437125748503, 0.2718562874251497}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[5] <= 120.0) {
                                                                                                        memcpy(var0, (const double[]){0.5827970491288652, 0.41720295087113485}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.47426079018106204, 0.525739209818938}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            if (input[18] <= 45.5) {
                                                                                                memcpy(var0, (const double[]){0.6184403094292286, 0.3815596905707715}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.7890313090985501, 0.21096869090144987}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (input[5] <= 120.0) {
                                                                                            if (input[4] <= 1016.0) {
                                                                                                memcpy(var0, (const double[]){0.6337047353760445, 0.36629526462395545}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.09188034188034189, 0.9081196581196581}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.08810810810810811, 0.9118918918918919}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[24] <= 105795.5) {
                                                                                        if (input[18] <= 25.5) {
                                                                                            memcpy(var0, (const double[]){0.29986962190352023, 0.7001303780964798}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[18] <= 26.5) {
                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.6656216008701772, 0.33437839912982276}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.5244640811651121, 0.4755359188348879}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[18] <= 43.5) {
                                                                                    if (input[18] <= 42.5) {
                                                                                        if (input[18] <= 41.5) {
                                                                                            if (input[18] <= 40.5) {
                                                                                                if (input[18] <= 39.5) {
                                                                                                    if (input[18] <= 38.5) {
                                                                                                        if (input[18] <= 37.5) {
                                                                                                            memcpy(var0, (const double[]){0.6067112888010422, 0.3932887111989578}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[12] <= 31.0) {
                                                                                                            memcpy(var0, (const double[]){0.7712137486573577, 0.22878625134264233}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.06451612903225806, 0.9354838709677419}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[12] <= 33.0) {
                                                                                                    memcpy(var0, (const double[]){0.8076152304609219, 0.19238476953907815}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.043680838672102505, 0.9563191613278975}, 2 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[12] <= 35.0) {
                                                                                            memcpy(var0, (const double[]){0.8195970695970696, 0.1804029304029304}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.05415968732551647, 0.9458403126744835}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[12] <= 37.0) {
                                                                                        memcpy(var0, (const double[]){0.9274747474747475, 0.07252525252525252}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[18] <= 45.5) {
                                                                                            if (input[18] <= 44.5) {
                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.044307692307692305, 0.9556923076923077}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[12] <= 39.0) {
                                                                                                memcpy(var0, (const double[]){0.9717757742061937, 0.02822422579380635}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[18] <= 47.5) {
                                                                                                    if (input[18] <= 46.5) {
                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.025367156208277702, 0.9746328437917223}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[18] <= 48.5) {
                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[18] <= 49.5) {
                                                                                                            if (input[12] <= 41.0) {
                                                                                                                memcpy(var0, (const double[]){0.9324522760646109, 0.06754772393538913}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.028432732316227463, 0.9715672676837726}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[18] <= 50.5) {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[18] <= 51.5) {
                                                                                                                    if (input[12] <= 43.0) {
                                                                                                                        memcpy(var0, (const double[]){0.9258698940998488, 0.07413010590015129}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.004038772213247173, 0.9959612277867528}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[12] <= 45.0) {
                                                                                                                        memcpy(var0, (const double[]){0.978585657370518, 0.02141434262948207}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[18] <= 52.5) {
                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[18] <= 53.5) {
                                                                                                                                memcpy(var0, (const double[]){0.009962640099626401, 0.9900373599003736}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.76362226100446, 0.23637773899554004}, 2 * sizeof(double));
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
                                                            if (input[18] <= 22.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[18] <= 31.5) {
                                                                    if (input[18] <= 23.5) {
                                                                        if (input[25] <= 6.5) {
                                                                            if (input[12] <= 14.5) {
                                                                                memcpy(var0, (const double[]){0.23428085895257222, 0.7657191410474278}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.0650730411686587, 0.9349269588313412}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[12] <= 14.5) {
                                                                                memcpy(var0, (const double[]){0.9284578696343402, 0.07154213036565978}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.05802047781569966, 0.9419795221843004}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[18] <= 24.5) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[18] <= 25.5) {
                                                                                if (input[12] <= 16.5) {
                                                                                    memcpy(var0, (const double[]){0.28400208441896824, 0.7159979155810318}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.06383454443823365, 0.9361654555617663}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[18] <= 26.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[18] <= 27.5) {
                                                                                        if (input[12] <= 18.5) {
                                                                                            if (input[9] <= 2112.0) {
                                                                                                memcpy(var0, (const double[]){0.29217325227963525, 0.7078267477203647}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.9428044280442804, 0.05719557195571956}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.0699294373077619, 0.9300705626922381}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[18] <= 28.5) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[18] <= 29.5) {
                                                                                                if (input[12] <= 20.5) {
                                                                                                    if (input[12] <= 19.5) {
                                                                                                        memcpy(var0, (const double[]){0.2579247434435576, 0.7420752565564425}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[16] <= 50.0) {
                                                                                                            memcpy(var0, (const double[]){0.8156590683845392, 0.18434093161546086}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.45050385299347956, 0.5494961470065205}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.07772317772317772, 0.9222768222768223}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[18] <= 30.5) {
                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.20521865435493075, 0.7947813456450693}, 2 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[18] <= 32.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 33.5) {
                                                                            memcpy(var0, (const double[]){0.19476631368852915, 0.8052336863114709}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[18] <= 34.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[18] <= 35.5) {
                                                                                    if (input[12] <= 26.5) {
                                                                                        if (input[12] <= 25.5) {
                                                                                            memcpy(var0, (const double[]){0.29428989751098095, 0.705710102489019}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.6439248754311997, 0.3560751245688003}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.0750455373406193, 0.9249544626593806}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[18] <= 36.5) {
                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[18] <= 37.5) {
                                                                                            if (input[12] <= 28.5) {
                                                                                                if (input[12] <= 27.5) {
                                                                                                    memcpy(var0, (const double[]){0.28168438266557644, 0.7183156173344235}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.6727340267459139, 0.3272659732540862}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.08275382475660639, 0.9172461752433936}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[18] <= 38.5) {
                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[18] <= 39.5) {
                                                                                                    if (input[12] <= 31.5) {
                                                                                                        if (input[12] <= 26.5) {
                                                                                                            memcpy(var0, (const double[]){0.2524875621890547, 0.7475124378109452}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.620506999621642, 0.3794930003783579}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.05893204878548734, 0.9410679512145127}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[18] <= 40.5) {
                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[18] <= 41.5) {
                                                                                                            if (input[12] <= 33.5) {
                                                                                                                if (input[12] <= 31.5) {
                                                                                                                    memcpy(var0, (const double[]){0.2905701754385965, 0.7094298245614035}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.7220664797757309, 0.27793352022426915}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.06278713629402756, 0.9372128637059725}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[18] <= 42.5) {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[18] <= 43.5) {
                                                                                                                    if (input[12] <= 35.0) {
                                                                                                                        if (input[12] <= 32.5) {
                                                                                                                            memcpy(var0, (const double[]){0.2752238805970149, 0.724776119402985}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.7023914968999114, 0.2976085031000886}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.06428317745945306, 0.9357168225405469}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[18] <= 44.5) {
                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[1] <= 3.5) {
                                                                                                                            if (input[18] <= 45.5) {
                                                                                                                                memcpy(var0, (const double[]){0.2535395338706164, 0.7464604661293835}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[18] <= 46.5) {
                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[18] <= 47.5) {
                                                                                                                                        if (input[12] <= 38.5) {
                                                                                                                                            memcpy(var0, (const double[]){0.6986729117876659, 0.3013270882123341}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            memcpy(var0, (const double[]){0.03043896187119513, 0.9695610381288049}, 2 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    } else {
                                                                                                                                        if (input[18] <= 48.5) {
                                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            if (input[18] <= 49.5) {
                                                                                                                                                if (input[12] <= 41.0) {
                                                                                                                                                    memcpy(var0, (const double[]){0.7463768115942029, 0.2536231884057971}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    memcpy(var0, (const double[]){0.02737140160453044, 0.9726285983954696}, 2 * sizeof(double));
                                                                                                                                                }
                                                                                                                                            } else {
                                                                                                                                                if (input[18] <= 50.5) {
                                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    if (input[18] <= 51.5) {
                                                                                                                                                        if (input[12] <= 43.0) {
                                                                                                                                                            memcpy(var0, (const double[]){0.7137870855148342, 0.2862129144851658}, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            memcpy(var0, (const double[]){0.006292606187729418, 0.9937073938122706}, 2 * sizeof(double));
                                                                                                                                                        }
                                                                                                                                                    } else {
                                                                                                                                                        if (input[18] <= 52.5) {
                                                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            if (input[18] <= 53.5) {
                                                                                                                                                                if (input[12] <= 45.0) {
                                                                                                                                                                    memcpy(var0, (const double[]){0.7146171693735499, 0.2853828306264501}, 2 * sizeof(double));
                                                                                                                                                                } else {
                                                                                                                                                                    memcpy(var0, (const double[]){0.007134363852556481, 0.9928656361474435}, 2 * sizeof(double));
                                                                                                                                                                }
                                                                                                                                                            } else {
                                                                                                                                                                if (input[18] <= 54.5) {
                                                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                } else {
                                                                                                                                                                    if (input[18] <= 55.5) {
                                                                                                                                                                        memcpy(var0, (const double[]){0.07926829268292683, 0.9207317073170732}, 2 * sizeof(double));
                                                                                                                                                                    } else {
                                                                                                                                                                        memcpy(var0, (const double[]){0.7803617571059431, 0.21963824289405684}, 2 * sizeof(double));
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
                                                                                                                            if (input[16] <= 166.0) {
                                                                                                                                if (input[18] <= 51.5) {
                                                                                                                                    memcpy(var0, (const double[]){0.19538226965802657, 0.8046177303419735}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[18] <= 54.5) {
                                                                                                                                        if (input[18] <= 53.5) {
                                                                                                                                            if (input[18] <= 52.5) {
                                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                memcpy(var0, (const double[]){0.09329829172141918, 0.9067017082785808}, 2 * sizeof(double));
                                                                                                                                            }
                                                                                                                                        } else {
                                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){0.24958263772954925, 0.7504173622704507}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                if (input[24] <= 6748.5) {
                                                                                                                                    if (input[4] <= 792.0) {
                                                                                                                                        memcpy(var0, (const double[]){0.6111111111111112, 0.3888888888888889}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){0.1099434114793856, 0.8900565885206144}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    if (input[18] <= 45.5) {
                                                                                                                                        if (input[12] <= 37.0) {
                                                                                                                                            memcpy(var0, (const double[]){0.5636487406398911, 0.43635125936010893}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            memcpy(var0, (const double[]){0.059777967549103334, 0.9402220324508966}, 2 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    } else {
                                                                                                                                        if (input[12] <= 39.0) {
                                                                                                                                            memcpy(var0, (const double[]){0.8425134221515211, 0.15748657784847883}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            if (input[18] <= 47.5) {
                                                                                                                                                if (input[18] <= 46.5) {
                                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    memcpy(var0, (const double[]){0.06095143706640238, 0.9390485629335976}, 2 * sizeof(double));
                                                                                                                                                }
                                                                                                                                            } else {
                                                                                                                                                if (input[18] <= 48.5) {
                                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    if (input[18] <= 49.5) {
                                                                                                                                                        if (input[12] <= 41.0) {
                                                                                                                                                            memcpy(var0, (const double[]){0.7613019891500904, 0.23869801084990958}, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            memcpy(var0, (const double[]){0.05742935278030994, 0.9425706472196901}, 2 * sizeof(double));
                                                                                                                                                        }
                                                                                                                                                    } else {
                                                                                                                                                        if (input[18] <= 50.5) {
                                                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            if (input[18] <= 51.5) {
                                                                                                                                                                if (input[12] <= 43.0) {
                                                                                                                                                                    memcpy(var0, (const double[]){0.6403508771929824, 0.35964912280701755}, 2 * sizeof(double));
                                                                                                                                                                } else {
                                                                                                                                                                    memcpy(var0, (const double[]){0.010857763300760043, 0.98914223669924}, 2 * sizeof(double));
                                                                                                                                                                }
                                                                                                                                                            } else {
                                                                                                                                                                if (input[18] <= 52.5) {
                                                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                } else {
                                                                                                                                                                    if (input[21] <= 21421.5) {
                                                                                                                                                                        memcpy(var0, (const double[]){0.38507109004739337, 0.6149289099526066}, 2 * sizeof(double));
                                                                                                                                                                    } else {
                                                                                                                                                                        memcpy(var0, (const double[]){0.9502617801047121, 0.049738219895287955}, 2 * sizeof(double));
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
                                if (input[18] <= 53.5) {
                                    if (input[15] <= 9112.0) {
                                        memcpy(var0, (const double[]){0.9825673534072901, 0.017432646592709985}, 2 * sizeof(double));
                                    } else {
                                        if (input[16] <= -96.0) {
                                            memcpy(var0, (const double[]){0.48548590660496427, 0.5145140933950357}, 2 * sizeof(double));
                                        } else {
                                            if (input[3] <= 1.5) {
                                                if (input[4] <= 536.0) {
                                                    if (input[22] <= 189.5) {
                                                        memcpy(var0, (const double[]){0.4797669148591777, 0.5202330851408222}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.21114232209737827, 0.7888576779026217}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.17905258583224684, 0.8209474141677532}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[24] <= 65629.0) {
                                                    if (input[8] <= 3076.0) {
                                                        memcpy(var0, (const double[]){0.374108322324967, 0.6258916776750331}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.09944565765160424, 0.9005543423483958}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[7] <= 48.0) {
                                                        memcpy(var0, (const double[]){0.04621194116559719, 0.9537880588344028}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[0] <= 24.5) {
                                                            if (input[23] <= 691.0) {
                                                                memcpy(var0, (const double[]){0.11433447098976109, 0.8856655290102389}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.575955265610438, 0.424044734389562}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.09267139479905437, 0.9073286052009456}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[1] <= 3.5) {
                                        if (input[12] <= 47.0) {
                                            memcpy(var0, (const double[]){0.9907866761162296, 0.009213323883770375}, 2 * sizeof(double));
                                        } else {
                                            if (input[18] <= 55.5) {
                                                memcpy(var0, (const double[]){0.20127326150832517, 0.7987267384916749}, 2 * sizeof(double));
                                            } else {
                                                if (input[18] <= 56.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[18] <= 57.5) {
                                                        if (input[12] <= 49.0) {
                                                            memcpy(var0, (const double[]){0.9894736842105263, 0.010526315789473684}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[18] <= 58.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[14] <= -8194.0) {
                                                                if (input[18] <= 60.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
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
                                        }
                                    } else {
                                        if (input[18] <= 54.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[12] <= 47.0) {
                                                memcpy(var0, (const double[]){0.979539641943734, 0.020460358056265986}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.148569238630557, 0.8514307613694431}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[18] <= 14.5) {
                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[18] <= 15.5) {
                        if (input[21] <= 55105920.0) {
                            memcpy(var0, (const double[]){0.045982806867169185, 0.9540171931328308}, 2 * sizeof(double));
                        } else {
                            if (input[14] <= -8.0) {
                                memcpy(var0, (const double[]){0.05981194497649312, 0.9401880550235069}, 2 * sizeof(double));
                            } else {
                                if (input[8] <= 8.0) {
                                    if (input[22] <= -0.5) {
                                        memcpy(var0, (const double[]){0.9196927374301676, 0.08030726256983241}, 2 * sizeof(double));
                                    } else {
                                        if (input[22] <= 0.5) {
                                            memcpy(var0, (const double[]){0.29248046875, 0.70751953125}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.9140708915145005, 0.08592910848549946}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.05508341202392194, 0.944916587976078}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 29.5) {
                            if (input[18] <= 16.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[24] <= 5076.5) {
                                    if (input[18] <= 17.5) {
                                        memcpy(var0, (const double[]){0.07083741429970616, 0.9291625857002939}, 2 * sizeof(double));
                                    } else {
                                        if (input[18] <= 18.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[18] <= 19.5) {
                                                memcpy(var0, (const double[]){0.07013998276220762, 0.9298600172377923}, 2 * sizeof(double));
                                            } else {
                                                if (input[18] <= 20.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[18] <= 21.5) {
                                                        memcpy(var0, (const double[]){0.07370367574911314, 0.9262963242508868}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 22.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 23.5) {
                                                                memcpy(var0, (const double[]){0.07414857142857142, 0.9258514285714285}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[18] <= 24.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[18] <= 25.5) {
                                                                        memcpy(var0, (const double[]){0.09272924889880442, 0.9072707511011956}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 26.5) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[18] <= 27.5) {
                                                                                memcpy(var0, (const double[]){0.09878706199460917, 0.9012129380053908}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[18] <= 28.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[4] <= 292.0) {
                                                                                        if (input[9] <= -1526.0) {
                                                                                            memcpy(var0, (const double[]){0.6713505074160812, 0.3286494925839188}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[18] <= 29.5) {
                                                                                                memcpy(var0, (const double[]){0.18518518518518517, 0.8148148148148148}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[18] <= 30.5) {
                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[18] <= 31.5) {
                                                                                                        memcpy(var0, (const double[]){0.15613966261278933, 0.8438603373872107}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[18] <= 32.5) {
                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[18] <= 33.5) {
                                                                                                                memcpy(var0, (const double[]){0.14220183486238533, 0.8577981651376146}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[18] <= 34.5) {
                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[22] <= -62.5) {
                                                                                                                        memcpy(var0, (const double[]){0.514792899408284, 0.48520710059171596}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.35012737050665155, 0.6498726294933485}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (input[18] <= 29.5) {
                                                                                            memcpy(var0, (const double[]){0.08541119860017497, 0.914588801399825}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[18] <= 30.5) {
                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[18] <= 31.5) {
                                                                                                    memcpy(var0, (const double[]){0.08771718146718147, 0.9122828185328186}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[18] <= 32.5) {
                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[18] <= 33.5) {
                                                                                                            memcpy(var0, (const double[]){0.09360397196261683, 0.9063960280373832}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[18] <= 34.5) {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[18] <= 35.5) {
                                                                                                                    memcpy(var0, (const double[]){0.10827597784119523, 0.8917240221588048}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[18] <= 36.5) {
                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[18] <= 37.5) {
                                                                                                                            memcpy(var0, (const double[]){0.11037481880306482, 0.8896251811969352}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[18] <= 38.5) {
                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[18] <= 39.5) {
                                                                                                                                    memcpy(var0, (const double[]){0.10486537553141237, 0.8951346244685876}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[8] <= 2450.0) {
                                                                                                                                        if (input[18] <= 40.5) {
                                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            if (input[18] <= 41.5) {
                                                                                                                                                memcpy(var0, (const double[]){0.12462006079027356, 0.8753799392097265}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                if (input[18] <= 42.5) {
                                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    if (input[18] <= 43.5) {
                                                                                                                                                        memcpy(var0, (const double[]){0.1303926320891905, 0.8696073679108095}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        if (input[18] <= 44.5) {
                                                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            if (input[18] <= 45.5) {
                                                                                                                                                                memcpy(var0, (const double[]){0.12136222910216718, 0.8786377708978328}, 2 * sizeof(double));
                                                                                                                                                            } else {
                                                                                                                                                                if (input[18] <= 46.5) {
                                                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                } else {
                                                                                                                                                                    memcpy(var0, (const double[]){0.34885496183206105, 0.6511450381679389}, 2 * sizeof(double));
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){0.1975712283979449, 0.8024287716020552}, 2 * sizeof(double));
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
                                    }
                                } else {
                                    if (input[18] <= 17.5) {
                                        if (input[12] <= 9.5) {
                                            memcpy(var0, (const double[]){0.2355719202753542, 0.7644280797246458}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.07288040426726558, 0.9271195957327344}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[18] <= 18.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[18] <= 19.5) {
                                                if (input[12] <= 11.0) {
                                                    memcpy(var0, (const double[]){0.248689783904085, 0.751310216095915}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.07239119228220045, 0.9276088077177995}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[18] <= 20.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[1] <= 3.5) {
                                                        if (input[18] <= 21.5) {
                                                            if (input[12] <= 13.0) {
                                                                memcpy(var0, (const double[]){0.2906749902458057, 0.7093250097541943}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.07311569128930344, 0.9268843087106966}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[18] <= 22.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[18] <= 23.5) {
                                                                    if (input[12] <= 15.5) {
                                                                        memcpy(var0, (const double[]){0.23925233644859814, 0.7607476635514019}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.05676457160249582, 0.9432354283975042}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[18] <= 24.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 25.5) {
                                                                            memcpy(var0, (const double[]){0.16933438292661593, 0.830665617073384}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[18] <= 26.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[4] <= 284.0) {
                                                                                    if (input[18] <= 27.5) {
                                                                                        memcpy(var0, (const double[]){0.22060301507537688, 0.7793969849246232}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[18] <= 28.5) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[18] <= 29.5) {
                                                                                                memcpy(var0, (const double[]){0.25635703165542295, 0.7436429683445771}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[18] <= 30.5) {
                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[22] <= -126.5) {
                                                                                                        memcpy(var0, (const double[]){0.7299194177280999, 0.2700805822719002}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[18] <= 31.5) {
                                                                                                            memcpy(var0, (const double[]){0.2185347526612398, 0.7814652473387602}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[18] <= 32.5) {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[18] <= 33.5) {
                                                                                                                    memcpy(var0, (const double[]){0.2190237797246558, 0.7809762202753442}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[18] <= 34.5) {
                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[18] <= 35.5) {
                                                                                                                            memcpy(var0, (const double[]){0.22954091816367264, 0.7704590818363274}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[18] <= 36.5) {
                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[18] <= 37.5) {
                                                                                                                                    memcpy(var0, (const double[]){0.18506493506493507, 0.814935064935065}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[18] <= 38.5) {
                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        if (input[18] <= 39.5) {
                                                                                                                                            memcpy(var0, (const double[]){0.2284366576819407, 0.7715633423180593}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            if (input[18] <= 40.5) {
                                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                if (input[18] <= 41.5) {
                                                                                                                                                    memcpy(var0, (const double[]){0.19719251336898397, 0.8028074866310161}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    if (input[18] <= 42.5) {
                                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        if (input[18] <= 43.5) {
                                                                                                                                                            memcpy(var0, (const double[]){0.20254237288135593, 0.7974576271186441}, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            if (input[18] <= 44.5) {
                                                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                            } else {
                                                                                                                                                                if (input[18] <= 45.5) {
                                                                                                                                                                    memcpy(var0, (const double[]){0.162291169451074, 0.837708830548926}, 2 * sizeof(double));
                                                                                                                                                                } else {
                                                                                                                                                                    if (input[18] <= 46.5) {
                                                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                    } else {
                                                                                                                                                                        memcpy(var0, (const double[]){0.5336832895888014, 0.4663167104111986}, 2 * sizeof(double));
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
                                                                                    if (input[18] <= 27.5) {
                                                                                        memcpy(var0, (const double[]){0.14303063014437997, 0.85696936985562}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[18] <= 28.5) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[5] <= 4.0) {
                                                                                                if (input[18] <= 29.5) {
                                                                                                    memcpy(var0, (const double[]){0.18712273641851107, 0.8128772635814889}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[18] <= 30.5) {
                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[18] <= 31.5) {
                                                                                                            memcpy(var0, (const double[]){0.20833333333333334, 0.7916666666666666}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[18] <= 32.5) {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[18] <= 33.5) {
                                                                                                                    memcpy(var0, (const double[]){0.22746071133167908, 0.7725392886683209}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[18] <= 34.5) {
                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[18] <= 35.5) {
                                                                                                                            memcpy(var0, (const double[]){0.2227626459143969, 0.7772373540856031}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[18] <= 36.5) {
                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[18] <= 37.5) {
                                                                                                                                    memcpy(var0, (const double[]){0.249500998003992, 0.7504990019960079}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[18] <= 38.5) {
                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        if (input[18] <= 39.5) {
                                                                                                                                            memcpy(var0, (const double[]){0.21099887766554434, 0.7890011223344556}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            if (input[18] <= 40.5) {
                                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                if (input[18] <= 41.5) {
                                                                                                                                                    memcpy(var0, (const double[]){0.20759493670886076, 0.7924050632911392}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    memcpy(var0, (const double[]){0.6759124087591241, 0.32408759124087594}, 2 * sizeof(double));
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
                                                                                                if (input[18] <= 29.5) {
                                                                                                    memcpy(var0, (const double[]){0.12132796780684105, 0.8786720321931589}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[18] <= 30.5) {
                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[18] <= 31.5) {
                                                                                                            memcpy(var0, (const double[]){0.12174465382172348, 0.8782553461782765}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[18] <= 32.5) {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[18] <= 33.5) {
                                                                                                                    memcpy(var0, (const double[]){0.14272344408048665, 0.8572765559195134}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[18] <= 34.5) {
                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[18] <= 35.5) {
                                                                                                                            memcpy(var0, (const double[]){0.1589989888776542, 0.8410010111223458}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[18] <= 36.5) {
                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[18] <= 37.5) {
                                                                                                                                    memcpy(var0, (const double[]){0.1915188470066519, 0.8084811529933481}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[18] <= 38.5) {
                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        if (input[18] <= 39.5) {
                                                                                                                                            memcpy(var0, (const double[]){0.15150544522741832, 0.8484945547725817}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            if (input[18] <= 40.5) {
                                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                if (input[18] <= 41.5) {
                                                                                                                                                    memcpy(var0, (const double[]){0.15219062259800153, 0.8478093774019985}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    if (input[18] <= 42.5) {
                                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        if (input[18] <= 43.5) {
                                                                                                                                                            memcpy(var0, (const double[]){0.16589002795899346, 0.8341099720410066}, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            if (input[18] <= 44.5) {
                                                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                            } else {
                                                                                                                                                                memcpy(var0, (const double[]){0.49012958701707643, 0.5098704129829236}, 2 * sizeof(double));
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
                                                            }
                                                        }
                                                    } else {
                                                        if (input[18] <= 21.5) {
                                                            memcpy(var0, (const double[]){0.12954939341421143, 0.8704506065857885}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[4] <= 1976.0) {
                                                                if (input[18] <= 22.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[18] <= 23.5) {
                                                                        memcpy(var0, (const double[]){0.10860767800503117, 0.8913923219949689}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 24.5) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[18] <= 25.5) {
                                                                                memcpy(var0, (const double[]){0.1696585709257304, 0.8303414290742697}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[18] <= 26.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[23] <= -95.5) {
                                                                                        if (input[5] <= 120.0) {
                                                                                            if (input[18] <= 27.5) {
                                                                                                if (input[12] <= 19.0) {
                                                                                                    memcpy(var0, (const double[]){0.7205387205387206, 0.27946127946127947}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.11097852028639618, 0.8890214797136038}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[18] <= 28.5) {
                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[18] <= 29.5) {
                                                                                                        memcpy(var0, (const double[]){0.24532900081234768, 0.7546709991876523}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[4] <= 248.0) {
                                                                                                            memcpy(var0, (const double[]){0.8125408229915089, 0.18745917700849118}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.5699558173784978, 0.43004418262150224}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.31724315952503873, 0.6827568404749613}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[18] <= 27.5) {
                                                                                            memcpy(var0, (const double[]){0.1373856411846798, 0.8626143588153202}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[18] <= 28.5) {
                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[18] <= 29.5) {
                                                                                                    memcpy(var0, (const double[]){0.12280433786467085, 0.8771956621353292}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[18] <= 30.5) {
                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[18] <= 31.5) {
                                                                                                            memcpy(var0, (const double[]){0.13426910534524317, 0.8657308946547568}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[18] <= 32.5) {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[18] <= 33.5) {
                                                                                                                    memcpy(var0, (const double[]){0.14537902388369678, 0.8546209761163032}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[18] <= 34.5) {
                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[18] <= 35.5) {
                                                                                                                            memcpy(var0, (const double[]){0.14549180327868852, 0.8545081967213115}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[18] <= 36.5) {
                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[21] <= 7750.0) {
                                                                                                                                    if (input[18] <= 37.5) {
                                                                                                                                        memcpy(var0, (const double[]){0.09276665304454434, 0.9072333469554557}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        if (input[18] <= 38.5) {
                                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            if (input[18] <= 39.5) {
                                                                                                                                                memcpy(var0, (const double[]){0.08061626657112146, 0.9193837334288786}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                memcpy(var0, (const double[]){0.38253500368459836, 0.6174649963154016}, 2 * sizeof(double));
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    if (input[18] <= 37.5) {
                                                                                                                                        if (input[12] <= 29.0) {
                                                                                                                                            memcpy(var0, (const double[]){0.41880920162381596, 0.581190798376184}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            memcpy(var0, (const double[]){0.07753584705257567, 0.9224641529474243}, 2 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    } else {
                                                                                                                                        if (input[18] <= 38.5) {
                                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            if (input[18] <= 39.5) {
                                                                                                                                                memcpy(var0, (const double[]){0.18204488778054864, 0.8179551122194514}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                if (input[18] <= 40.5) {
                                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    if (input[18] <= 41.5) {
                                                                                                                                                        memcpy(var0, (const double[]){0.19914163090128756, 0.8008583690987124}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        if (input[18] <= 42.5) {
                                                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            if (input[18] <= 43.5) {
                                                                                                                                                                memcpy(var0, (const double[]){0.20102827763496145, 0.7989717223650386}, 2 * sizeof(double));
                                                                                                                                                            } else {
                                                                                                                                                                if (input[18] <= 44.5) {
                                                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                } else {
                                                                                                                                                                    if (input[18] <= 45.5) {
                                                                                                                                                                        memcpy(var0, (const double[]){0.2189239332096475, 0.7810760667903525}, 2 * sizeof(double));
                                                                                                                                                                    } else {
                                                                                                                                                                        if (input[18] <= 46.5) {
                                                                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                        } else {
                                                                                                                                                                            if (input[18] <= 47.5) {
                                                                                                                                                                                memcpy(var0, (const double[]){0.1989795918367347, 0.8010204081632653}, 2 * sizeof(double));
                                                                                                                                                                            } else {
                                                                                                                                                                                memcpy(var0, (const double[]){0.6809297411516112, 0.3190702588483888}, 2 * sizeof(double));
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
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[18] <= 22.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[21] <= 6171.0) {
                                                                        memcpy(var0, (const double[]){0.11347934734675878, 0.8865206526532412}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 41.5) {
                                                                            if (input[15] <= 412.0) {
                                                                                memcpy(var0, (const double[]){0.3108957099264046, 0.6891042900735954}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.12646264626462647, 0.8735373537353736}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.5784966698382493, 0.42150333016175073}, 2 * sizeof(double));
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
                            if (input[18] <= 16.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[18] <= 17.5) {
                                    memcpy(var0, (const double[]){0.05379629055269524, 0.9462037094473048}, 2 * sizeof(double));
                                } else {
                                    if (input[18] <= 18.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[24] <= 50461.5) {
                                            if (input[18] <= 19.5) {
                                                memcpy(var0, (const double[]){0.06755797671340609, 0.9324420232865939}, 2 * sizeof(double));
                                            } else {
                                                if (input[18] <= 20.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[18] <= 21.5) {
                                                        if (input[12] <= 13.0) {
                                                            memcpy(var0, (const double[]){0.12191460237559058, 0.8780853976244094}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.03349044902009427, 0.9665095509799058}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[18] <= 22.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 23.5) {
                                                                if (input[12] <= 15.0) {
                                                                    memcpy(var0, (const double[]){0.132209265679168, 0.867790734320832}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.0378539780389135, 0.9621460219610865}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[18] <= 24.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[18] <= 25.5) {
                                                                        memcpy(var0, (const double[]){0.08686565564546381, 0.9131343443545362}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 26.5) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[18] <= 27.5) {
                                                                                memcpy(var0, (const double[]){0.10407765770294043, 0.8959223422970596}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[18] <= 28.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[18] <= 29.5) {
                                                                                        if (input[12] <= 21.0) {
                                                                                            memcpy(var0, (const double[]){0.18007723224840413, 0.8199227677515959}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.048666746382876956, 0.9513332536171231}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[18] <= 30.5) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[18] <= 31.5) {
                                                                                                if (input[12] <= 23.0) {
                                                                                                    memcpy(var0, (const double[]){0.18525088697415104, 0.814749113025849}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.038172353961827644, 0.9618276460381724}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[18] <= 32.5) {
                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[18] <= 33.5) {
                                                                                                        if (input[12] <= 25.0) {
                                                                                                            memcpy(var0, (const double[]){0.1757787952239878, 0.8242212047760122}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.03291707080504365, 0.9670829291949563}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[23] <= -87.5) {
                                                                                                            if (input[18] <= 34.5) {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[12] <= 27.0) {
                                                                                                                    memcpy(var0, (const double[]){0.36023054755043227, 0.6397694524495677}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.08534033561728142, 0.9146596643827186}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[18] <= 34.5) {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[18] <= 35.5) {
                                                                                                                    memcpy(var0, (const double[]){0.0967711210591485, 0.9032288789408515}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[18] <= 36.5) {
                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[18] <= 37.5) {
                                                                                                                            if (input[12] <= 29.0) {
                                                                                                                                memcpy(var0, (const double[]){0.17459480827513507, 0.8254051917248649}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.025807649461567026, 0.974192350538433}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            if (input[18] <= 38.5) {
                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[18] <= 39.5) {
                                                                                                                                    if (input[12] <= 31.0) {
                                                                                                                                        memcpy(var0, (const double[]){0.1767142199723884, 0.8232857800276115}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){0.02335121489428842, 0.9766487851057116}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    if (input[18] <= 40.5) {
                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        if (input[18] <= 41.5) {
                                                                                                                                            memcpy(var0, (const double[]){0.0617885108903073, 0.9382114891096927}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            if (input[18] <= 42.5) {
                                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                if (input[18] <= 43.5) {
                                                                                                                                                    memcpy(var0, (const double[]){0.06706281833616298, 0.932937181663837}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    if (input[18] <= 44.5) {
                                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        if (input[18] <= 45.5) {
                                                                                                                                                            memcpy(var0, (const double[]){0.056409106201637325, 0.9435908937983627}, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            if (input[18] <= 46.5) {
                                                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                            } else {
                                                                                                                                                                if (input[18] <= 47.5) {
                                                                                                                                                                    memcpy(var0, (const double[]){0.04587324981577008, 0.9541267501842299}, 2 * sizeof(double));
                                                                                                                                                                } else {
                                                                                                                                                                    if (input[18] <= 48.5) {
                                                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                    } else {
                                                                                                                                                                        if (input[13] <= 17.5) {
                                                                                                                                                                            memcpy(var0, (const double[]){0.10835509138381201, 0.891644908616188}, 2 * sizeof(double));
                                                                                                                                                                        } else {
                                                                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
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
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[1] <= 1.5) {
                                                if (input[18] <= 19.5) {
                                                    memcpy(var0, (const double[]){0.32098765432098764, 0.6790123456790124}, 2 * sizeof(double));
                                                } else {
                                                    if (input[18] <= 20.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 21.5) {
                                                            memcpy(var0, (const double[]){0.2266042780748663, 0.7733957219251337}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 22.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[18] <= 23.5) {
                                                                    memcpy(var0, (const double[]){0.28353879622915157, 0.7164612037708484}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[18] <= 24.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 25.5) {
                                                                            memcpy(var0, (const double[]){0.3148614609571788, 0.6851385390428212}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[18] <= 26.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[18] <= 27.5) {
                                                                                    memcpy(var0, (const double[]){0.24685816876122083, 0.7531418312387792}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[18] <= 28.5) {
                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[18] <= 29.5) {
                                                                                            memcpy(var0, (const double[]){0.21356553620531624, 0.7864344637946837}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[18] <= 30.5) {
                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[18] <= 31.5) {
                                                                                                    memcpy(var0, (const double[]){0.23636363636363636, 0.7636363636363637}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[18] <= 32.5) {
                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[18] <= 33.5) {
                                                                                                            memcpy(var0, (const double[]){0.2557544757033248, 0.7442455242966752}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.6376791428968972, 0.3623208571031028}, 2 * sizeof(double));
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
                                                if (input[15] <= -398.0) {
                                                    memcpy(var0, (const double[]){0.28096432327481596, 0.7190356767251841}, 2 * sizeof(double));
                                                } else {
                                                    if (input[18] <= 19.5) {
                                                        memcpy(var0, (const double[]){0.15618795499669094, 0.8438120450033091}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 20.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 21.5) {
                                                                memcpy(var0, (const double[]){0.13271939328277357, 0.8672806067172264}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[18] <= 22.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[18] <= 23.5) {
                                                                        memcpy(var0, (const double[]){0.17997465145754118, 0.8200253485424588}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 24.5) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.44061167820407526, 0.5593883217959248}, 2 * sizeof(double));
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
    memcpy(output, var0, 2 * sizeof(double));
}
