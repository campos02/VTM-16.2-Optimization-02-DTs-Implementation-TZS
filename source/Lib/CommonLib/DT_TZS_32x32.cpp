//RAMIRO - VTM 16.2 - Otimização Inter-Quadros - Implementação de DTs no TZS

#include "DT_TZS_32x32.h"

#include <string.h>
void DT_TZS_32x32::score(double * input, double * output) {
    double var0[2];
    if (input[19] <= 2.5) {
        if (input[6] <= 0.5) {
            if (input[17] <= 12.5) {
                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                if (input[21] <= 3273.5) {
                    if (input[21] <= 1723.5) {
                        memcpy(var0, (const double[]){0.00013006438186902516, 0.999869935618131}, 2 * sizeof(double));
                    } else {
                        if (input[20] <= 28.5) {
                            if (input[13] <= -2.0) {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[17] <= 20.0) {
                                    memcpy(var0, (const double[]){0.014184397163120567, 0.9858156028368794}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.25609756097560976, 0.7439024390243902}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var0, (const double[]){0.0014209591474245115, 0.9985790408525755}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[17] <= 25.5) {
                        if (input[20] <= 35.0) {
                            if (input[11] <= 8.0) {
                                memcpy(var0, (const double[]){0.02756892230576441, 0.9724310776942355}, 2 * sizeof(double));
                            } else {
                                if (input[14] <= -2.0) {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[14] <= 2.0) {
                                        if (input[13] <= -2.0) {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[13] <= 2.0) {
                                                memcpy(var0, (const double[]){0.8904109589041096, 0.1095890410958904}, 2 * sizeof(double));
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
                            if (input[11] <= 8.0) {
                                memcpy(var0, (const double[]){0.0005096839959225281, 0.9994903160040775}, 2 * sizeof(double));
                            } else {
                                if (input[14] <= -2.0) {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[14] <= 2.0) {
                                        if (input[15] <= -2.0) {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 21.5) {
                                                memcpy(var0, (const double[]){0.07582938388625593, 0.9241706161137441}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.37681159420289856, 0.6231884057971014}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[13] <= -2.0) {
                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[13] <= 2.0) {
                                if (input[16] <= 2.0) {
                                    if (input[16] <= -2.0) {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[20] <= 40.5) {
                                            memcpy(var0, (const double[]){0.9906001446131598, 0.009399855386840203}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.8760330578512396, 0.12396694214876033}, 2 * sizeof(double));
                                        }
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
            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    } else {
        if (input[17] <= 18.5) {
            if (input[17] <= 15.5) {
                if (input[11] <= 6.5) {
                    if (input[13] <= -2.0) {
                        if (input[17] <= 13.5) {
                            if (input[17] <= 12.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[5] <= 1136.0) {
                                if (input[17] <= 14.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[21] <= 737.0) {
                                        if (input[21] <= -900.0) {
                                            if (input[7] <= -1080.0) {
                                                memcpy(var0, (const double[]){0.9719101123595506, 0.028089887640449437}, 2 * sizeof(double));
                                            } else {
                                                if (input[8] <= 56.0) {
                                                    if (input[0] <= 24.5) {
                                                        memcpy(var0, (const double[]){0.07142857142857142, 0.9285714285714286}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.7002652519893899, 0.29973474801061006}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[7] <= -14.0) {
                                                if (input[14] <= -348.0) {
                                                    if (input[8] <= -344.0) {
                                                        memcpy(var0, (const double[]){0.7159090909090909, 0.2840909090909091}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.020050125313283207, 0.9799498746867168}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[7] <= -956.0) {
                                                        if (input[13] <= -4384.0) {
                                                            memcpy(var0, (const double[]){0.07017543859649122, 0.9298245614035088}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[13] <= -920.0) {
                                                                if (input[8] <= -368.0) {
                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.669735327963176, 0.3302646720368239}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.16901408450704225, 0.8309859154929577}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.36129032258064514, 0.6387096774193548}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.05687203791469194, 0.943127962085308}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[21] <= 423875328.0) {
                                            if (input[6] <= 2.5) {
                                                if (input[23] <= -27.5) {
                                                    memcpy(var0, (const double[]){0.9861751152073732, 0.013824884792626729}, 2 * sizeof(double));
                                                } else {
                                                    if (input[14] <= -344.0) {
                                                        if (input[8] <= -368.0) {
                                                            memcpy(var0, (const double[]){0.8450704225352113, 0.15492957746478872}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[3] <= 1.0) {
                                                            memcpy(var0, (const double[]){0.392, 0.608}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[22] <= -79.5) {
                                                                if (input[15] <= -4256.0) {
                                                                    if (input[20] <= 37.5) {
                                                                        memcpy(var0, (const double[]){0.7403846153846154, 0.25961538461538464}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9559748427672956, 0.0440251572327044}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[21] <= 6272.5) {
                                                                    if (input[5] <= 432.0) {
                                                                        if (input[14] <= -32.0) {
                                                                            memcpy(var0, (const double[]){0.30927835051546393, 0.6907216494845361}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[13] <= -224.0) {
                                                                                memcpy(var0, (const double[]){0.36363636363636365, 0.6363636363636364}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[14] <= 32.0) {
                                                                                    if (input[13] <= -160.0) {
                                                                                        memcpy(var0, (const double[]){0.9947916666666666, 0.005208333333333333}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.5098039215686274, 0.49019607843137253}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.5174825174825175, 0.4825174825174825}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[7] <= -32.0) {
                                                                            if (input[0] <= 29.5) {
                                                                                memcpy(var0, (const double[]){0.7433628318584071, 0.25663716814159293}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.9653333333333334, 0.034666666666666665}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.3, 0.7}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[21] <= 79324928.0) {
                                                                        if (input[4] <= 1464.0) {
                                                                            memcpy(var0, (const double[]){0.2571428571428571, 0.7428571428571429}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.56672760511883, 0.43327239488117003}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[7] <= -872.0) {
                                                                            memcpy(var0, (const double[]){0.975609756097561, 0.024390243902439025}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.6524064171122995, 0.34759358288770054}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.024691358024691357, 0.9753086419753086}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[7] <= -40.0) {
                                                memcpy(var0, (const double[]){0.9498327759197325, 0.05016722408026756}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.34782608695652173, 0.6521739130434783}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[17] <= 14.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[7] <= -8.0) {
                                        if (input[6] <= 1.5) {
                                            memcpy(var0, (const double[]){0.9930898321816387, 0.006910167818361303}, 2 * sizeof(double));
                                        } else {
                                            if (input[21] <= 1721.5) {
                                                memcpy(var0, (const double[]){0.47058823529411764, 0.5294117647058824}, 2 * sizeof(double));
                                            } else {
                                                if (input[21] <= 9955.5) {
                                                    memcpy(var0, (const double[]){0.9855072463768116, 0.014492753623188406}, 2 * sizeof(double));
                                                } else {
                                                    if (input[14] <= -352.0) {
                                                        memcpy(var0, (const double[]){0.2, 0.8}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9055690072639225, 0.09443099273607748}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.1891891891891892, 0.8108108108108109}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[13] <= 2.0) {
                            if (input[14] <= -2.0) {
                                if (input[8] <= -2.0) {
                                    if (input[17] <= 12.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[17] <= 13.5) {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[23] <= -6.5) {
                                                if (input[22] <= -1.5) {
                                                    memcpy(var0, (const double[]){0.19047619047619047, 0.8095238095238095}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.9833333333333333, 0.016666666666666666}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[17] <= 14.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[5] <= 328.0) {
                                                        memcpy(var0, (const double[]){0.7133757961783439, 0.28662420382165604}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.3827751196172249, 0.6172248803827751}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[17] <= 14.5) {
                                        memcpy(var0, (const double[]){0.47058823529411764, 0.5294117647058824}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.10588235294117647, 0.8941176470588236}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[14] <= 2.0) {
                                    if (input[16] <= -6.0) {
                                        memcpy(var0, (const double[]){0.5128205128205128, 0.48717948717948717}, 2 * sizeof(double));
                                    } else {
                                        if (input[15] <= 2.0) {
                                            if (input[15] <= -2.0) {
                                                memcpy(var0, (const double[]){0.5432098765432098, 0.4567901234567901}, 2 * sizeof(double));
                                            } else {
                                                if (input[16] <= 2.0) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.6153846153846154, 0.38461538461538464}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.608, 0.392}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[8] <= 2.0) {
                                        if (input[14] <= 12.0) {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 14.5) {
                                                memcpy(var0, (const double[]){0.5365853658536586, 0.4634146341463415}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.12096774193548387, 0.8790322580645161}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[17] <= 12.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 13.5) {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[8] <= 40.0) {
                                                    memcpy(var0, (const double[]){0.6363636363636364, 0.36363636363636365}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.9906542056074766, 0.009345794392523364}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[7] <= 2.0) {
                                if (input[13] <= 12.0) {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[5] <= 1568.0) {
                                        memcpy(var0, (const double[]){0.2251655629139073, 0.7748344370860927}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                    }
                                }
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
                                            if (input[4] <= 1352.0) {
                                                if (input[21] <= 398436992.0) {
                                                    memcpy(var0, (const double[]){0.4372670807453416, 0.5627329192546584}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.8260869565217391, 0.17391304347826086}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[21] <= -191.5) {
                                                    memcpy(var0, (const double[]){0.9953051643192489, 0.004694835680751174}, 2 * sizeof(double));
                                                } else {
                                                    if (input[21] <= 2245.5) {
                                                        memcpy(var0, (const double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9356223175965666, 0.06437768240343347}, 2 * sizeof(double));
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
                    if (input[17] <= 14.5) {
                        if (input[17] <= 13.5) {
                            if (input[17] <= 12.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[13] <= -2.0) {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[19] <= 6.5) {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[19] <= 6.5) {
                            if (input[11] <= 7.5) {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[13] <= -366.0) {
                                    if (input[6] <= 0.5) {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[14] <= -348.0) {
                                            memcpy(var0, (const double[]){0.06462585034013606, 0.935374149659864}, 2 * sizeof(double));
                                        } else {
                                            if (input[21] <= 7537.0) {
                                                memcpy(var0, (const double[]){0.16339869281045752, 0.8366013071895425}, 2 * sizeof(double));
                                            } else {
                                                if (input[13] <= -4300.0) {
                                                    memcpy(var0, (const double[]){0.5033112582781457, 0.4966887417218543}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.21327967806841047, 0.7867203219315896}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[5] <= 1648.0) {
                                        if (input[12] <= 3.0) {
                                            if (input[6] <= 0.5) {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.0666058394160584, 0.9333941605839416}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.4293785310734463, 0.5706214689265536}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                }
            } else {
                if (input[12] <= 8.0) {
                    if (input[17] <= 16.5) {
                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[11] <= 7.5) {
                            if (input[17] <= 17.5) {
                                if (input[11] <= 6.5) {
                                    if (input[21] <= 79325056.0) {
                                        if (input[6] <= 0.5) {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[21] <= -629.5) {
                                                memcpy(var0, (const double[]){0.8458149779735683, 0.15418502202643172}, 2 * sizeof(double));
                                            } else {
                                                if (input[21] <= 647.0) {
                                                    if (input[13] <= -24.0) {
                                                        memcpy(var0, (const double[]){0.33927056827820185, 0.6607294317217981}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[13] <= 20.0) {
                                                            memcpy(var0, (const double[]){0.8066666666666666, 0.19333333333333333}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.37383177570093457, 0.6261682242990654}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[6] <= 2.5) {
                                                        if (input[21] <= 5236.5) {
                                                            if (input[22] <= -3.5) {
                                                                memcpy(var0, (const double[]){0.6782006920415224, 0.3217993079584775}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.8958990536277602, 0.10410094637223975}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[2] <= 1.5) {
                                                                memcpy(var0, (const double[]){0.6096033402922756, 0.3903966597077244}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.09523809523809523, 0.9047619047619048}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.28169014084507044, 0.7183098591549296}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.8782816229116945, 0.12171837708830549}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[22] <= -0.5) {
                                        if (input[6] <= 2.5) {
                                            if (input[3] <= 1.0) {
                                                if (input[16] <= -6.0) {
                                                    memcpy(var0, (const double[]){0.18691588785046728, 0.8130841121495327}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.5668202764976958, 0.43317972350230416}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[20] <= 28.5) {
                                                    memcpy(var0, (const double[]){0.6348884381338742, 0.36511156186612576}, 2 * sizeof(double));
                                                } else {
                                                    if (input[12] <= 3.0) {
                                                        if (input[15] <= -120.0) {
                                                            if (input[4] <= 2000.0) {
                                                                if (input[7] <= 168.0) {
                                                                    memcpy(var0, (const double[]){0.8733459357277883, 0.1266540642722117}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9967637540453075, 0.003236245954692557}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[21] <= 2766.5) {
                                                                if (input[7] <= -40.0) {
                                                                    memcpy(var0, (const double[]){0.9552238805970149, 0.04477611940298507}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[20] <= 33.0) {
                                                                        if (input[20] <= 30.5) {
                                                                            memcpy(var0, (const double[]){0.9846153846153847, 0.015384615384615385}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9219330855018587, 0.07806691449814127}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[13] <= -2.0) {
                                                                    if (input[7] <= -50.0) {
                                                                        if (input[13] <= -72.0) {
                                                                            if (input[15] <= -40.0) {
                                                                                if (input[20] <= 39.0) {
                                                                                    memcpy(var0, (const double[]){0.4297520661157025, 0.5702479338842975}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.8421052631578947, 0.15789473684210525}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.8904109589041096, 0.1095890410958904}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[21] <= 11989.0) {
                                                                                memcpy(var0, (const double[]){0.8663594470046083, 0.1336405529953917}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.5542168674698795, 0.4457831325301205}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.4685714285714286, 0.5314285714285715}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[15] <= -2.0) {
                                                                        memcpy(var0, (const double[]){0.6450116009280742, 0.35498839907192575}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[16] <= 8.0) {
                                                                            if (input[16] <= -12.0) {
                                                                                memcpy(var0, (const double[]){0.6226415094339622, 0.37735849056603776}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[15] <= 8.0) {
                                                                                    if (input[14] <= -4.0) {
                                                                                        memcpy(var0, (const double[]){0.5333333333333333, 0.4666666666666667}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[14] <= 8.0) {
                                                                                            memcpy(var0, (const double[]){0.9811866859623734, 0.01881331403762663}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.5806451612903226, 0.41935483870967744}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.5656565656565656, 0.43434343434343436}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[16] <= -4.0) {
                                                            if (input[10] <= -14.0) {
                                                                memcpy(var0, (const double[]){0.8864468864468864, 0.11355311355311355}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.4411764705882353, 0.5588235294117647}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[16] <= 8.0) {
                                                                if (input[6] <= 1.5) {
                                                                    memcpy(var0, (const double[]){0.8936170212765957, 0.10638297872340426}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.9789954337899544, 0.021004566210045664}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[10] <= 8.0) {
                                                                    memcpy(var0, (const double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.9375, 0.0625}, 2 * sizeof(double));
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
                                        if (input[6] <= 2.5) {
                                            if (input[13] <= 2.0) {
                                                if (input[6] <= 0.5) {
                                                    if (input[14] <= -120.0) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[13] <= -2.0) {
                                                            memcpy(var0, (const double[]){0.2857142857142857, 0.7142857142857143}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[21] <= 5790.5) {
                                                                if (input[16] <= 2.0) {
                                                                    memcpy(var0, (const double[]){0.8173076923076923, 0.18269230769230768}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.32727272727272727, 0.6727272727272727}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.3790849673202614, 0.6209150326797386}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[14] <= -8.0) {
                                                        if (input[13] <= -72.0) {
                                                            if (input[20] <= 39.0) {
                                                                memcpy(var0, (const double[]){0.9293966623876765, 0.07060333761232349}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9894982497082847, 0.010501750291715286}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[8] <= -8.0) {
                                                                if (input[20] <= 33.0) {
                                                                    memcpy(var0, (const double[]){0.683982683982684, 0.31601731601731603}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[21] <= 7971.5) {
                                                                        memcpy(var0, (const double[]){0.9318918918918919, 0.0681081081081081}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.8112244897959183, 0.18877551020408162}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[6] <= 1.5) {
                                                                    memcpy(var0, (const double[]){0.675392670157068, 0.32460732984293195}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.22033898305084745, 0.7796610169491526}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[16] <= 8.0) {
                                                            if (input[14] <= 8.0) {
                                                                if (input[16] <= -8.0) {
                                                                    if (input[18] <= 0.5) {
                                                                        if (input[23] <= -2.5) {
                                                                            memcpy(var0, (const double[]){0.8888888888888888, 0.1111111111111111}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[21] <= 7591.5) {
                                                                                if (input[20] <= 33.0) {
                                                                                    memcpy(var0, (const double[]){0.35294117647058826, 0.6470588235294118}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.8311688311688312, 0.16883116883116883}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.23300970873786409, 0.7669902912621359}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9583333333333334, 0.041666666666666664}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[15] <= -8.0) {
                                                                        if (input[7] <= -8.0) {
                                                                            memcpy(var0, (const double[]){0.9621993127147767, 0.037800687285223365}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.323943661971831, 0.676056338028169}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[15] <= 8.0) {
                                                                            if (input[13] <= -8.0) {
                                                                                if (input[7] <= -8.0) {
                                                                                    memcpy(var0, (const double[]){0.9963369963369964, 0.003663003663003663}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.6428571428571429, 0.35714285714285715}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[18] <= 0.5) {
                                                                                    if (input[6] <= 1.5) {
                                                                                        memcpy(var0, (const double[]){0.9909604519774011, 0.00903954802259887}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.9999224024210445, 0.00007759757895553658}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[5] <= 1008.0) {
                                                                                        memcpy(var0, (const double[]){0.980327868852459, 0.019672131147540985}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[9] <= 8.0) {
                                                                                if (input[13] <= -24.0) {
                                                                                    memcpy(var0, (const double[]){0.92, 0.08}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.6026490066225165, 0.3973509933774834}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[10] <= 8.0) {
                                                                                    memcpy(var0, (const double[]){0.9831029185867896, 0.016897081413210446}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.6875, 0.3125}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[13] <= -56.0) {
                                                                    if (input[4] <= 1904.0) {
                                                                        memcpy(var0, (const double[]){0.9472182596291013, 0.052781740370898715}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9976580796252927, 0.00234192037470726}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[8] <= 8.0) {
                                                                        if (input[6] <= 1.5) {
                                                                            memcpy(var0, (const double[]){0.6753246753246753, 0.3246753246753247}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.05333333333333334, 0.9466666666666667}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.8844884488448845, 0.11551155115511551}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[18] <= 0.5) {
                                                                if (input[20] <= 35.0) {
                                                                    if (input[10] <= 56.0) {
                                                                        memcpy(var0, (const double[]){0.4, 0.6}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9818181818181818, 0.01818181818181818}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[14] <= 8.0) {
                                                                        if (input[21] <= 2599.0) {
                                                                            memcpy(var0, (const double[]){0.970873786407767, 0.02912621359223301}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[10] <= 8.0) {
                                                                                memcpy(var0, (const double[]){0.5073170731707317, 0.4926829268292683}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.9444444444444444, 0.05555555555555555}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9282051282051282, 0.07179487179487179}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9735294117647059, 0.026470588235294117}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[7] <= 58.0) {
                                                    if (input[21] <= 4243.5) {
                                                        if (input[20] <= 33.0) {
                                                            memcpy(var0, (const double[]){0.4057971014492754, 0.5942028985507246}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.852589641434263, 0.14741035856573706}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[15] <= -10.0) {
                                                            memcpy(var0, (const double[]){0.6470588235294118, 0.35294117647058826}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[5] <= 432.0) {
                                                                memcpy(var0, (const double[]){0.23370786516853934, 0.7662921348314606}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.5, 0.5}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[4] <= 752.0) {
                                                        if (input[5] <= 736.0) {
                                                            if (input[21] <= 4967.5) {
                                                                memcpy(var0, (const double[]){0.8668730650154799, 0.13312693498452013}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6191646191646192, 0.3808353808353808}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9938650306748467, 0.006134969325153374}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[23] <= -23.5) {
                                                            memcpy(var0, (const double[]){0.6842105263157895, 0.3157894736842105}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[21] <= 8142.5) {
                                                                memcpy(var0, (const double[]){0.991304347826087, 0.008695652173913044}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9178470254957507, 0.0821529745042493}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[17] <= 17.5) {
                                if (input[19] <= 6.5) {
                                    if (input[11] <= 8.5) {
                                        if (input[6] <= 0.5) {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[13] <= -28.0) {
                                                if (input[6] <= 2.5) {
                                                    if (input[23] <= -24.5) {
                                                        memcpy(var0, (const double[]){0.7415730337078652, 0.25842696629213485}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[21] <= -57.0) {
                                                            memcpy(var0, (const double[]){0.48091603053435117, 0.5190839694656488}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[5] <= 1328.0) {
                                                                memcpy(var0, (const double[]){0.23386581469648562, 0.7661341853035144}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.5679012345679012, 0.43209876543209874}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[13] <= -468.0) {
                                                        memcpy(var0, (const double[]){0.74, 0.26}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.17582417582417584, 0.8241758241758241}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.5, 0.5}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[12] <= 3.0) {
                                            if (input[18] <= 0.5) {
                                                if (input[14] <= 42.0) {
                                                    if (input[6] <= 0.5) {
                                                        if (input[21] <= 2196.5) {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.15819209039548024, 0.8418079096045198}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[21] <= 3680.0) {
                                                            if (input[20] <= 37.0) {
                                                                memcpy(var0, (const double[]){0.1474493361285814, 0.8525506638714185}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[11] <= 9.5) {
                                                                    memcpy(var0, (const double[]){0.5732484076433121, 0.4267515923566879}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.15789473684210525, 0.8421052631578947}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[22] <= -16.5) {
                                                                memcpy(var0, (const double[]){0.18723404255319148, 0.8127659574468085}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[13] <= -4.0) {
                                                                    memcpy(var0, (const double[]){0.02282453637660485, 0.9771754636233951}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.0962962962962963, 0.9037037037037037}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.05352547606793618, 0.9464745239320638}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[17] <= 16.5) {
                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[17] <= 17.5) {
                            if (input[11] <= 8.5) {
                                if (input[6] <= 0.5) {
                                    if (input[20] <= 35.0) {
                                        memcpy(var0, (const double[]){0.22459893048128343, 0.7754010695187166}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.03529411764705882, 0.9647058823529412}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[6] <= 2.5) {
                                        if (input[16] <= 8.0) {
                                            if (input[15] <= -8.0) {
                                                if (input[12] <= 10.0) {
                                                    if (input[18] <= 0.5) {
                                                        if (input[22] <= 2.5) {
                                                            memcpy(var0, (const double[]){0.18412698412698414, 0.8158730158730159}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.88, 0.12}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6630434782608695, 0.33695652173913043}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.7022222222222222, 0.29777777777777775}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[16] <= -8.0) {
                                                    if (input[12] <= 10.0) {
                                                        memcpy(var0, (const double[]){0.5093167701863354, 0.4906832298136646}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.779874213836478, 0.22012578616352202}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[6] <= 1.5) {
                                                        if (input[18] <= 0.5) {
                                                            memcpy(var0, (const double[]){0.5741626794258373, 0.4258373205741627}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.795869737887212, 0.20413026211278792}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[15] <= 32.0) {
                                                            if (input[7] <= 32.0) {
                                                                if (input[23] <= -0.5) {
                                                                    memcpy(var0, (const double[]){0.8760330578512396, 0.12396694214876033}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.9810366624525917, 0.018963337547408345}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.5882352941176471, 0.4117647058823529}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[7] <= -32.0) {
                                                                memcpy(var0, (const double[]){0.9186046511627907, 0.08139534883720931}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.5276073619631901, 0.4723926380368098}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[5] <= 1120.0) {
                                                if (input[10] <= 40.0) {
                                                    if (input[18] <= 0.5) {
                                                        memcpy(var0, (const double[]){0.4020100502512563, 0.5979899497487438}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6575809199318569, 0.3424190800681431}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[18] <= 0.5) {
                                                        if (input[23] <= 4.5) {
                                                            memcpy(var0, (const double[]){0.10273972602739725, 0.8972602739726028}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.37962962962962965, 0.6203703703703703}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.5568181818181818, 0.4431818181818182}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.9704142011834319, 0.029585798816568046}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.009569377990430622, 0.9904306220095693}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[6] <= 1.5) {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[19] <= 6.5) {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            if (input[18] <= 0.5) {
                if (input[19] <= 6.5) {
                    if (input[17] <= 19.5) {
                        if (input[11] <= 7.5) {
                            if (input[6] <= 2.5) {
                                if (input[11] <= 6.5) {
                                    if (input[6] <= 0.5) {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[21] <= -1796.5) {
                                            memcpy(var0, (const double[]){0.8872180451127819, 0.11278195488721804}, 2 * sizeof(double));
                                        } else {
                                            if (input[21] <= 841.5) {
                                                memcpy(var0, (const double[]){0.4027072758037225, 0.5972927241962775}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.6930091185410334, 0.3069908814589666}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[21] <= 4034.5) {
                                        if (input[6] <= 0.5) {
                                            memcpy(var0, (const double[]){0.2891566265060241, 0.7108433734939759}, 2 * sizeof(double));
                                        } else {
                                            if (input[20] <= 35.0) {
                                                if (input[6] <= 1.5) {
                                                    if (input[12] <= 8.0) {
                                                        memcpy(var0, (const double[]){0.7682403433476395, 0.2317596566523605}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.48951048951048953, 0.5104895104895105}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[16] <= 96.0) {
                                                        memcpy(var0, (const double[]){0.8880526810912511, 0.11194731890874883}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.25, 0.75}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[21] <= 2523.0) {
                                                    memcpy(var0, (const double[]){0.9965635738831615, 0.003436426116838488}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.8996960486322189, 0.10030395136778116}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[4] <= 1752.0) {
                                            if (input[23] <= -1.5) {
                                                if (input[5] <= 688.0) {
                                                    memcpy(var0, (const double[]){0.40076335877862596, 0.5992366412213741}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.7777777777777778, 0.2222222222222222}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[12] <= 10.0) {
                                                    if (input[14] <= 2.0) {
                                                        if (input[13] <= 2.0) {
                                                            memcpy(var0, (const double[]){0.8213592233009709, 0.1786407766990291}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.6133333333333333, 0.38666666666666666}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.5776805251641138, 0.4223194748358862}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.5049833887043189, 0.4950166112956811}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.8932461873638344, 0.10675381263616558}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var0, (const double[]){0.14432989690721648, 0.8556701030927835}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[11] <= 10.5) {
                                if (input[6] <= 0.5) {
                                    if (input[21] <= 1264.0) {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.2801120448179272, 0.7198879551820728}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[12] <= 8.0) {
                                        if (input[12] <= 3.0) {
                                            if (input[21] <= -41.5) {
                                                memcpy(var0, (const double[]){0.5138339920948617, 0.48616600790513836}, 2 * sizeof(double));
                                            } else {
                                                if (input[11] <= 9.5) {
                                                    if (input[16] <= 28.0) {
                                                        if (input[14] <= 28.0) {
                                                            memcpy(var0, (const double[]){0.39299397920087575, 0.6070060207991242}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.22650602409638554, 0.7734939759036145}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[14] <= 28.0) {
                                                            memcpy(var0, (const double[]){0.0963855421686747, 0.9036144578313253}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.3652173913043478, 0.6347826086956522}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[6] <= 1.5) {
                                                        if (input[4] <= 1176.0) {
                                                            memcpy(var0, (const double[]){0.4461942257217848, 0.5538057742782152}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[14] <= 56.0) {
                                                                memcpy(var0, (const double[]){0.28651685393258425, 0.7134831460674157}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.028985507246376812, 0.9710144927536232}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.5055131467345207, 0.4944868532654792}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[10] <= -4.0) {
                                                memcpy(var0, (const double[]){0.6081081081081081, 0.3918918918918919}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.8614072494669509, 0.13859275053304904}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[15] <= -4.0) {
                                            memcpy(var0, (const double[]){0.05142857142857143, 0.9485714285714286}, 2 * sizeof(double));
                                        } else {
                                            if (input[21] <= 2220.0) {
                                                memcpy(var0, (const double[]){0.5467625899280576, 0.45323741007194246}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.12213740458015267, 0.8778625954198473}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[6] <= 0.5) {
                                    if (input[11] <= 11.5) {
                                        memcpy(var0, (const double[]){0.11173184357541899, 0.888268156424581}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[12] <= 3.0) {
                                        if (input[13] <= -2096.0) {
                                            if (input[14] <= -348.0) {
                                                memcpy(var0, (const double[]){0.09230769230769231, 0.9076923076923077}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.3783783783783784, 0.6216216216216216}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.12109264995775838, 0.8789073500422416}, 2 * sizeof(double));
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
                            if (input[6] <= 2.5) {
                                if (input[17] <= 21.5) {
                                    if (input[11] <= 12.5) {
                                        if (input[6] <= 0.5) {
                                            if (input[21] <= 888.5) {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[12] <= 10.0) {
                                                    if (input[15] <= 30.0) {
                                                        if (input[11] <= 7.5) {
                                                            memcpy(var0, (const double[]){0.6631016042780749, 0.33689839572192515}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.39223300970873787, 0.6077669902912621}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.0392156862745098, 0.9607843137254902}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.16216216216216217, 0.8378378378378378}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[11] <= 7.5) {
                                                if (input[21] <= 258.5) {
                                                    memcpy(var0, (const double[]){0.4066666666666667, 0.5933333333333334}, 2 * sizeof(double));
                                                } else {
                                                    if (input[21] <= 5688.0) {
                                                        memcpy(var0, (const double[]){0.7915492957746478, 0.2084507042253521}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.5960874568469505, 0.4039125431530495}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[12] <= 8.0) {
                                                    if (input[12] <= 3.0) {
                                                        if (input[11] <= 11.5) {
                                                            if (input[21] <= -59.5) {
                                                                memcpy(var0, (const double[]){0.5477178423236515, 0.45228215767634855}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.312026913372582, 0.687973086627418}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[16] <= -72.0) {
                                                                if (input[7] <= -4216.0) {
                                                                    memcpy(var0, (const double[]){0.3181818181818182, 0.6818181818181818}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.7759197324414716, 0.22408026755852842}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[16] <= 296.0) {
                                                                    if (input[20] <= 32.0) {
                                                                        memcpy(var0, (const double[]){0.35691318327974275, 0.6430868167202572}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.5696594427244582, 0.43034055727554177}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.7317073170731707, 0.2682926829268293}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8222222222222222, 0.17777777777777778}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[21] <= 2869.0) {
                                                        memcpy(var0, (const double[]){0.4, 0.6}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.08062015503875969, 0.9193798449612403}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[6] <= 0.5) {
                                            if (input[21] <= 2684.0) {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.16541353383458646, 0.8345864661654135}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[5] <= 1608.0) {
                                                if (input[4] <= 1608.0) {
                                                    if (input[12] <= 3.0) {
                                                        memcpy(var0, (const double[]){0.1875, 0.8125}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[15] <= -536.0) {
                                                        memcpy(var0, (const double[]){0.1893939393939394, 0.8106060606060606}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[21] <= -60.0) {
                                                            memcpy(var0, (const double[]){0.3111111111111111, 0.6888888888888889}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[16] <= -288.0) {
                                                                memcpy(var0, (const double[]){0.2727272727272727, 0.7272727272727273}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.01715686274509804, 0.9828431372549019}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.5263157894736842, 0.47368421052631576}, 2 * sizeof(double));
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
                                                    if (input[21] <= 736.5) {
                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[20] <= 44.0) {
                                                            if (input[11] <= 9.5) {
                                                                memcpy(var0, (const double[]){0.5888077858880778, 0.41119221411192214}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.3139240506329114, 0.6860759493670886}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[12] <= 8.0) {
                                                        if (input[12] <= 3.0) {
                                                            if (input[0] <= 29.5) {
                                                                if (input[4] <= 1672.0) {
                                                                    if (input[20] <= 30.5) {
                                                                        memcpy(var0, (const double[]){0.5249788314987299, 0.47502116850127013}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.2916666666666667, 0.7083333333333334}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[22] <= -31.5) {
                                                                        memcpy(var0, (const double[]){0.4701195219123506, 0.5298804780876494}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[23] <= 0.5) {
                                                                            memcpy(var0, (const double[]){0.33191489361702126, 0.6680851063829787}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[22] <= 2.5) {
                                                                                memcpy(var0, (const double[]){0.031545741324921134, 0.9684542586750788}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.34615384615384615, 0.6538461538461539}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[11] <= 7.5) {
                                                                    if (input[3] <= 1.0) {
                                                                        memcpy(var0, (const double[]){0.2926829268292683, 0.7073170731707317}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.8086642599277978, 0.19133574007220217}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[11] <= 11.5) {
                                                                        memcpy(var0, (const double[]){0.386317907444668, 0.613682092555332}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.592896174863388, 0.40710382513661203}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8364779874213837, 0.16352201257861634}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[11] <= 8.0) {
                                                            memcpy(var0, (const double[]){0.5675675675675675, 0.43243243243243246}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[21] <= 4930.5) {
                                                                memcpy(var0, (const double[]){0.3357664233576642, 0.6642335766423357}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.06896551724137931, 0.9310344827586207}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[6] <= 0.5) {
                                                    if (input[11] <= 15.5) {
                                                        memcpy(var0, (const double[]){0.15625, 0.84375}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.0031397174254317113, 0.9968602825745683}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[0] <= 29.5) {
                                                        if (input[8] <= 8.0) {
                                                            memcpy(var0, (const double[]){0.15501519756838905, 0.8449848024316109}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.05807200929152149, 0.9419279907084785}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.24476650563607086, 0.7552334943639292}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[17] <= 24.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 25.5) {
                                                    if (input[11] <= 16.5) {
                                                        if (input[6] <= 0.5) {
                                                            if (input[21] <= 1542.5) {
                                                                memcpy(var0, (const double[]){0.0024330900243309003, 0.9975669099756691}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[12] <= 10.0) {
                                                                    if (input[11] <= 10.0) {
                                                                        memcpy(var0, (const double[]){0.7553191489361702, 0.24468085106382978}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.4801864801864802, 0.5198135198135199}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.20833333333333334, 0.7916666666666666}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[20] <= 34.5) {
                                                                if (input[11] <= 14.5) {
                                                                    if (input[14] <= 88.0) {
                                                                        memcpy(var0, (const double[]){0.3497854077253219, 0.6502145922746781}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.17494089834515367, 0.8250591016548463}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[8] <= -184.0) {
                                                                        memcpy(var0, (const double[]){0.7241379310344828, 0.27586206896551724}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.455743879472693, 0.544256120527307}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[12] <= 8.0) {
                                                                    if (input[12] <= 3.0) {
                                                                        if (input[11] <= 15.5) {
                                                                            memcpy(var0, (const double[]){0.4681818181818182, 0.5318181818181819}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.6818181818181818, 0.3181818181818182}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9438202247191011, 0.056179775280898875}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.2723735408560311, 0.7276264591439688}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[6] <= 0.5) {
                                                            if (input[21] <= 3088.5) {
                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.17391304347826086, 0.8260869565217391}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[4] <= 1624.0) {
                                                                if (input[11] <= 18.5) {
                                                                    memcpy(var0, (const double[]){0.16569767441860464, 0.8343023255813954}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.31844660194174756, 0.6815533980582524}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[15] <= -544.0) {
                                                                    memcpy(var0, (const double[]){0.23293172690763053, 0.7670682730923695}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.05413105413105413, 0.9458689458689459}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[17] <= 26.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 27.5) {
                                                            if (input[21] <= 65.5) {
                                                                if (input[6] <= 0.5) {
                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[11] <= 19.0) {
                                                                        if (input[22] <= -61.5) {
                                                                            memcpy(var0, (const double[]){0.7295081967213115, 0.27049180327868855}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[0] <= 24.5) {
                                                                                if (input[15] <= 56.0) {
                                                                                    if (input[16] <= -88.0) {
                                                                                        memcpy(var0, (const double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.10052910052910052, 0.8994708994708994}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.6511627906976745, 0.3488372093023256}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[4] <= 3136.0) {
                                                                                    memcpy(var0, (const double[]){0.4864864864864865, 0.5135135135135135}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.045454545454545456, 0.9545454545454546}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[0] <= 29.5) {
                                                                            if (input[14] <= 24.0) {
                                                                                memcpy(var0, (const double[]){0.2153209109730849, 0.7846790890269151}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.07109737248840804, 0.9289026275115919}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.3208791208791209, 0.6791208791208792}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[11] <= 18.5) {
                                                                    if (input[11] <= 17.5) {
                                                                        if (input[16] <= -50.0) {
                                                                            memcpy(var0, (const double[]){0.2916666666666667, 0.7083333333333334}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[11] <= 11.5) {
                                                                                if (input[15] <= -304.0) {
                                                                                    memcpy(var0, (const double[]){0.27906976744186046, 0.7209302325581395}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.6479750778816199, 0.35202492211838005}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[22] <= -77.5) {
                                                                                    memcpy(var0, (const double[]){0.819672131147541, 0.18032786885245902}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.366120218579235, 0.6338797814207651}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.7428571428571429, 0.2571428571428571}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.2612244897959184, 0.7387755102040816}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[17] <= 28.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[17] <= 29.5) {
                                                                    if (input[11] <= 20.5) {
                                                                        if (input[11] <= 18.5) {
                                                                            if (input[21] <= 1523.5) {
                                                                                if (input[6] <= 0.5) {
                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[20] <= 28.5) {
                                                                                        memcpy(var0, (const double[]){0.19148936170212766, 0.8085106382978723}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.4188235294117647, 0.5811764705882353}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[7] <= 62.0) {
                                                                                    memcpy(var0, (const double[]){0.5063291139240507, 0.4936708860759494}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.2926829268292683, 0.7073170731707317}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[6] <= 0.5) {
                                                                                memcpy(var0, (const double[]){0.1339712918660287, 0.8660287081339713}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[20] <= 28.5) {
                                                                                    memcpy(var0, (const double[]){0.4831168831168831, 0.5168831168831168}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.7308228730822873, 0.2691771269177127}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[6] <= 0.5) {
                                                                            memcpy(var0, (const double[]){0.004219409282700422, 0.9957805907172996}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[11] <= 22.5) {
                                                                                memcpy(var0, (const double[]){0.13310580204778158, 0.8668941979522184}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[22] <= -251.5) {
                                                                                    memcpy(var0, (const double[]){0.8717948717948718, 0.1282051282051282}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[20] <= 27.5) {
                                                                                        memcpy(var0, (const double[]){0.16216216216216217, 0.8378378378378378}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.37606837606837606, 0.6239316239316239}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[17] <= 30.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[7] <= -3782.0) {
                                                                            if (input[4] <= 2736.0) {
                                                                                if (input[5] <= 240.0) {
                                                                                    if (input[22] <= -349.5) {
                                                                                        memcpy(var0, (const double[]){0.9947735191637631, 0.005226480836236934}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[4] <= 552.0) {
                                                                                            memcpy(var0, (const double[]){0.9957356076759062, 0.0042643923240938165}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.5471698113207547, 0.4528301886792453}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[8] <= 1340.0) {
                                                                                        if (input[4] <= 648.0) {
                                                                                            if (input[15] <= -4064.0) {
                                                                                                memcpy(var0, (const double[]){0.38461538461538464, 0.6153846153846154}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.9686450167973124, 0.03135498320268757}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[13] <= -6862.0) {
                                                                                                memcpy(var0, (const double[]){0.9220103986135182, 0.0779896013864818}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.6625766871165644, 0.3374233128834356}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (input[4] <= 392.0) {
                                                                                            memcpy(var0, (const double[]){0.8770491803278688, 0.12295081967213115}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[22] <= -640.5) {
                                                                                                memcpy(var0, (const double[]){0.9288389513108615, 0.07116104868913857}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.4064665127020785, 0.5935334872979214}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[15] <= -692.0) {
                                                                                    memcpy(var0, (const double[]){0.7391304347826086, 0.2608695652173913}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[16] <= 8.0) {
                                                                                        memcpy(var0, (const double[]){0.7037037037037037, 0.2962962962962963}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.0947867298578199, 0.9052132701421801}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[17] <= 31.5) {
                                                                                if (input[11] <= 23.5) {
                                                                                    if (input[11] <= 21.5) {
                                                                                        if (input[20] <= 24.5) {
                                                                                            if (input[6] <= 0.5) {
                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[21] <= 134.5) {
                                                                                                    memcpy(var0, (const double[]){0.1552511415525114, 0.8447488584474886}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.8695652173913043, 0.13043478260869565}, 2 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            if (input[15] <= -110.0) {
                                                                                                if (input[22] <= -82.0) {
                                                                                                    memcpy(var0, (const double[]){0.6153846153846154, 0.38461538461538464}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.22266401590457258, 0.7773359840954275}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.45541125541125543, 0.5445887445887446}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (input[6] <= 0.5) {
                                                                                            memcpy(var0, (const double[]){0.029197080291970802, 0.9708029197080292}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[4] <= 624.0) {
                                                                                                memcpy(var0, (const double[]){0.8484848484848485, 0.15151515151515152}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[0] <= 24.5) {
                                                                                                    memcpy(var0, (const double[]){0.4577114427860697, 0.5422885572139303}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.7396593673965937, 0.26034063260340634}, 2 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[6] <= 0.5) {
                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[20] <= 32.0) {
                                                                                            if (input[15] <= -536.0) {
                                                                                                memcpy(var0, (const double[]){0.3315508021390374, 0.6684491978609626}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[4] <= 48.0) {
                                                                                                    memcpy(var0, (const double[]){0.6956521739130435, 0.30434782608695654}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.08351648351648351, 0.9164835164835164}, 2 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.3702127659574468, 0.6297872340425532}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[17] <= 32.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[17] <= 33.5) {
                                                                                        if (input[11] <= 24.5) {
                                                                                            if (input[6] <= 0.5) {
                                                                                                if (input[21] <= 1318.5) {
                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[11] <= 14.0) {
                                                                                                        memcpy(var0, (const double[]){0.632258064516129, 0.36774193548387096}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.275, 0.725}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                if (input[11] <= 23.5) {
                                                                                                    memcpy(var0, (const double[]){0.40596520298260147, 0.5940347970173985}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[6] <= 1.5) {
                                                                                                        memcpy(var0, (const double[]){0.5686274509803921, 0.43137254901960786}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.7846481876332623, 0.21535181236673773}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            if (input[6] <= 0.5) {
                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[20] <= 28.5) {
                                                                                                    if (input[8] <= 112.0) {
                                                                                                        memcpy(var0, (const double[]){0.20087336244541484, 0.7991266375545851}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.031331592689295036, 0.9686684073107049}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[4] <= 968.0) {
                                                                                                        memcpy(var0, (const double[]){0.3532934131736527, 0.6467065868263473}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.16153846153846155, 0.8384615384615385}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (input[17] <= 34.5) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[17] <= 35.5) {
                                                                                                if (input[11] <= 27.5) {
                                                                                                    if (input[6] <= 0.5) {
                                                                                                        if (input[21] <= 1163.5) {
                                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[16] <= -148.0) {
                                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[21] <= 6002.0) {
                                                                                                                    memcpy(var0, (const double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.3118279569892473, 0.6881720430107527}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[11] <= 23.5) {
                                                                                                            memcpy(var0, (const double[]){0.35678391959798994, 0.6432160804020101}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[14] <= -48.0) {
                                                                                                                memcpy(var0, (const double[]){0.7739307535641547, 0.22606924643584522}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[21] <= 125.5) {
                                                                                                                    memcpy(var0, (const double[]){0.48753462603878117, 0.5124653739612188}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.819047619047619, 0.18095238095238095}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[6] <= 0.5) {
                                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[20] <= 32.0) {
                                                                                                            memcpy(var0, (const double[]){0.13701657458563535, 0.8629834254143647}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.3279569892473118, 0.6720430107526881}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                if (input[17] <= 36.5) {
                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[17] <= 37.5) {
                                                                                                        if (input[11] <= 28.5) {
                                                                                                            if (input[6] <= 0.5) {
                                                                                                                if (input[21] <= 1321.5) {
                                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[8] <= 290.0) {
                                                                                                                        memcpy(var0, (const double[]){0.4573643410852713, 0.5426356589147286}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[11] <= 27.5) {
                                                                                                                    if (input[20] <= 27.0) {
                                                                                                                        memcpy(var0, (const double[]){0.2627118644067797, 0.7372881355932204}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.5025641025641026, 0.49743589743589745}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[4] <= 1864.0) {
                                                                                                                        memcpy(var0, (const double[]){0.823045267489712, 0.17695473251028807}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.5568181818181818, 0.4431818181818182}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[6] <= 0.5) {
                                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[11] <= 30.5) {
                                                                                                                    memcpy(var0, (const double[]){0.10426540284360189, 0.8957345971563981}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.3963963963963964, 0.6036036036036037}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[17] <= 38.5) {
                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[4] <= 240.0) {
                                                                                                                if (input[21] <= 2483.5) {
                                                                                                                    if (input[22] <= -48.5) {
                                                                                                                        if (input[4] <= 88.0) {
                                                                                                                            memcpy(var0, (const double[]){0.9768303985171455, 0.023169601482854494}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[13] <= -1892.0) {
                                                                                                                                memcpy(var0, (const double[]){0.930635838150289, 0.06936416184971098}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.714828897338403, 0.28517110266159695}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        if (input[13] <= 1272.0) {
                                                                                                                            if (input[4] <= 48.0) {
                                                                                                                                memcpy(var0, (const double[]){0.860125260960334, 0.13987473903966596}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[16] <= 6.0) {
                                                                                                                                    memcpy(var0, (const double[]){0.5522041763341067, 0.44779582366589327}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var0, (const double[]){0.8571428571428571, 0.14285714285714285}, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.8929765886287625, 0.10702341137123746}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[13] <= -1918.0) {
                                                                                                                        memcpy(var0, (const double[]){0.9298245614035088, 0.07017543859649122}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[21] <= 18514.5) {
                                                                                                                            if (input[23] <= -0.5) {
                                                                                                                                if (input[21] <= 9061.5) {
                                                                                                                                    memcpy(var0, (const double[]){0.45161290322580644, 0.5483870967741935}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var0, (const double[]){0.11235955056179775, 0.8876404494382022}, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.6355685131195336, 0.36443148688046645}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.8761904761904762, 0.12380952380952381}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[17] <= 39.5) {
                                                                                                                    if (input[11] <= 30.5) {
                                                                                                                        if (input[6] <= 0.5) {
                                                                                                                            if (input[21] <= 1667.0) {
                                                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.26548672566371684, 0.7345132743362832}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            if (input[11] <= 29.5) {
                                                                                                                                memcpy(var0, (const double[]){0.38258164852255055, 0.6174183514774495}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[4] <= 2904.0) {
                                                                                                                                    memcpy(var0, (const double[]){0.8155339805825242, 0.18446601941747573}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var0, (const double[]){0.36363636363636365, 0.6363636363636364}, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.08238387379491674, 0.9176161262050833}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[17] <= 40.5) {
                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[17] <= 41.5) {
                                                                                                                            if (input[11] <= 32.5) {
                                                                                                                                if (input[6] <= 0.5) {
                                                                                                                                    if (input[11] <= 19.5) {
                                                                                                                                        memcpy(var0, (const double[]){0.2972972972972973, 0.7027027027027027}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){0.017094017094017096, 0.9829059829059829}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    if (input[11] <= 31.5) {
                                                                                                                                        memcpy(var0, (const double[]){0.3789954337899543, 0.6210045662100456}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        if (input[13] <= -1976.0) {
                                                                                                                                            memcpy(var0, (const double[]){0.4126984126984127, 0.5873015873015873}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            memcpy(var0, (const double[]){0.8421052631578947, 0.15789473684210525}, 2 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                if (input[6] <= 0.5) {
                                                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var0, (const double[]){0.1308411214953271, 0.8691588785046729}, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            if (input[17] <= 42.5) {
                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[17] <= 43.5) {
                                                                                                                                    if (input[6] <= 0.5) {
                                                                                                                                        if (input[21] <= 1853.5) {
                                                                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            memcpy(var0, (const double[]){0.23030303030303031, 0.7696969696969697}, 2 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    } else {
                                                                                                                                        if (input[11] <= 35.5) {
                                                                                                                                            if (input[11] <= 32.5) {
                                                                                                                                                memcpy(var0, (const double[]){0.44089456869009586, 0.5591054313099042}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                memcpy(var0, (const double[]){0.8253968253968254, 0.1746031746031746}, 2 * sizeof(double));
                                                                                                                                            }
                                                                                                                                        } else {
                                                                                                                                            if (input[16] <= -624.0) {
                                                                                                                                                memcpy(var0, (const double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                memcpy(var0, (const double[]){0.06130268199233716, 0.9386973180076629}, 2 * sizeof(double));
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    if (input[17] <= 44.5) {
                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        if (input[17] <= 45.5) {
                                                                                                                                            if (input[6] <= 0.5) {
                                                                                                                                                if (input[21] <= 1115.5) {
                                                                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    memcpy(var0, (const double[]){0.2754491017964072, 0.7245508982035929}, 2 * sizeof(double));
                                                                                                                                                }
                                                                                                                                            } else {
                                                                                                                                                if (input[11] <= 37.0) {
                                                                                                                                                    if (input[11] <= 35.5) {
                                                                                                                                                        if (input[0] <= 24.5) {
                                                                                                                                                            memcpy(var0, (const double[]){0.21978021978021978, 0.7802197802197802}, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            memcpy(var0, (const double[]){0.625, 0.375}, 2 * sizeof(double));
                                                                                                                                                        }
                                                                                                                                                    } else {
                                                                                                                                                        memcpy(var0, (const double[]){0.8244274809160306, 0.17557251908396945}, 2 * sizeof(double));
                                                                                                                                                    }
                                                                                                                                                } else {
                                                                                                                                                    memcpy(var0, (const double[]){0.11594202898550725, 0.8840579710144928}, 2 * sizeof(double));
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        } else {
                                                                                                                                            if (input[17] <= 46.5) {
                                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                if (input[17] <= 47.5) {
                                                                                                                                                    if (input[11] <= 38.5) {
                                                                                                                                                        if (input[6] <= 0.5) {
                                                                                                                                                            if (input[21] <= 1030.0) {
                                                                                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                                            } else {
                                                                                                                                                                memcpy(var0, (const double[]){0.304, 0.696}, 2 * sizeof(double));
                                                                                                                                                            }
                                                                                                                                                        } else {
                                                                                                                                                            memcpy(var0, (const double[]){0.48221343873517786, 0.5177865612648221}, 2 * sizeof(double));
                                                                                                                                                        }
                                                                                                                                                    } else {
                                                                                                                                                        memcpy(var0, (const double[]){0.01809954751131222, 0.9819004524886877}, 2 * sizeof(double));
                                                                                                                                                    }
                                                                                                                                                } else {
                                                                                                                                                    if (input[16] <= 1422.0) {
                                                                                                                                                        if (input[17] <= 48.5) {
                                                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            if (input[17] <= 49.5) {
                                                                                                                                                                if (input[21] <= 537.5) {
                                                                                                                                                                    if (input[6] <= 0.5) {
                                                                                                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                                                    } else {
                                                                                                                                                                        memcpy(var0, (const double[]){0.417910447761194, 0.582089552238806}, 2 * sizeof(double));
                                                                                                                                                                    }
                                                                                                                                                                } else {
                                                                                                                                                                    memcpy(var0, (const double[]){0.4939271255060729, 0.5060728744939271}, 2 * sizeof(double));
                                                                                                                                                                }
                                                                                                                                                            } else {
                                                                                                                                                                if (input[21] <= 18035.5) {
                                                                                                                                                                    if (input[17] <= 50.5) {
                                                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                    } else {
                                                                                                                                                                        if (input[17] <= 51.5) {
                                                                                                                                                                            if (input[11] <= 43.0) {
                                                                                                                                                                                memcpy(var0, (const double[]){0.2277580071174377, 0.7722419928825622}, 2 * sizeof(double));
                                                                                                                                                                            } else {
                                                                                                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                                                            }
                                                                                                                                                                        } else {
                                                                                                                                                                            if (input[0] <= 29.5) {
                                                                                                                                                                                if (input[17] <= 52.5) {
                                                                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                                } else {
                                                                                                                                                                                    if (input[21] <= 497.0) {
                                                                                                                                                                                        memcpy(var0, (const double[]){0.14705882352941177, 0.8529411764705882}, 2 * sizeof(double));
                                                                                                                                                                                    } else {
                                                                                                                                                                                        memcpy(var0, (const double[]){0.4067357512953368, 0.5932642487046632}, 2 * sizeof(double));
                                                                                                                                                                                    }
                                                                                                                                                                                }
                                                                                                                                                                            } else {
                                                                                                                                                                                if (input[17] <= 52.5) {
                                                                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                                } else {
                                                                                                                                                                                    if (input[17] <= 53.5) {
                                                                                                                                                                                        memcpy(var0, (const double[]){0.22535211267605634, 0.7746478873239436}, 2 * sizeof(double));
                                                                                                                                                                                    } else {
                                                                                                                                                                                        memcpy(var0, (const double[]){0.6805555555555556, 0.3194444444444444}, 2 * sizeof(double));
                                                                                                                                                                                    }
                                                                                                                                                                                }
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                    }
                                                                                                                                                                } else {
                                                                                                                                                                    if (input[22] <= -52.5) {
                                                                                                                                                                        memcpy(var0, (const double[]){0.9565217391304348, 0.043478260869565216}, 2 * sizeof(double));
                                                                                                                                                                    } else {
                                                                                                                                                                        memcpy(var0, (const double[]){0.6948640483383686, 0.30513595166163143}, 2 * sizeof(double));
                                                                                                                                                                    }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    } else {
                                                                                                                                                        if (input[21] <= 3227.0) {
                                                                                                                                                            memcpy(var0, (const double[]){0.9761904761904762, 0.023809523809523808}, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            memcpy(var0, (const double[]){0.5801526717557252, 0.4198473282442748}, 2 * sizeof(double));
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
                                if (input[21] <= 959.5) {
                                    if (input[17] <= 21.5) {
                                        if (input[11] <= 13.0) {
                                            memcpy(var0, (const double[]){0.5292620865139949, 0.4707379134860051}, 2 * sizeof(double));
                                        } else {
                                            if (input[13] <= -4272.0) {
                                                memcpy(var0, (const double[]){0.6, 0.4}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.16447368421052633, 0.8355263157894737}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[17] <= 43.5) {
                                            if (input[17] <= 22.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 23.5) {
                                                    if (input[11] <= 15.0) {
                                                        memcpy(var0, (const double[]){0.5644028103044496, 0.43559718969555034}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.2760416666666667, 0.7239583333333334}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[17] <= 24.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 25.5) {
                                                            if (input[11] <= 17.0) {
                                                                memcpy(var0, (const double[]){0.5405405405405406, 0.4594594594594595}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.27986348122866894, 0.7201365187713311}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[17] <= 26.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[17] <= 27.5) {
                                                                    if (input[11] <= 19.0) {
                                                                        memcpy(var0, (const double[]){0.6627906976744186, 0.3372093023255814}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.26181818181818184, 0.7381818181818182}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[17] <= 28.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[17] <= 29.5) {
                                                                            if (input[11] <= 21.0) {
                                                                                if (input[11] <= 17.0) {
                                                                                    memcpy(var0, (const double[]){0.4810126582278481, 0.5189873417721519}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.7286063569682152, 0.2713936430317848}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.29333333333333333, 0.7066666666666667}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[17] <= 30.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[17] <= 31.5) {
                                                                                    memcpy(var0, (const double[]){0.6057692307692307, 0.3942307692307692}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[17] <= 32.5) {
                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[11] <= 35.0) {
                                                                                            if (input[17] <= 41.5) {
                                                                                                if (input[17] <= 33.5) {
                                                                                                    if (input[11] <= 25.0) {
                                                                                                        memcpy(var0, (const double[]){0.7881040892193308, 0.21189591078066913}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.3404255319148936, 0.6595744680851063}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[17] <= 34.5) {
                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[17] <= 35.5) {
                                                                                                            if (input[11] <= 27.0) {
                                                                                                                memcpy(var0, (const double[]){0.8257575757575758, 0.17424242424242425}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.3194444444444444, 0.6805555555555556}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[11] <= 31.0) {
                                                                                                                if (input[17] <= 36.5) {
                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[17] <= 37.5) {
                                                                                                                        memcpy(var0, (const double[]){0.6987012987012987, 0.3012987012987013}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[17] <= 38.5) {
                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[17] <= 39.5) {
                                                                                                                                if (input[11] <= 27.0) {
                                                                                                                                    memcpy(var0, (const double[]){0.5393258426966292, 0.4606741573033708}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var0, (const double[]){0.8936170212765957, 0.10638297872340426}, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                if (input[17] <= 40.5) {
                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var0, (const double[]){0.8070175438596491, 0.19298245614035087}, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[17] <= 39.5) {
                                                                                                                    if (input[11] <= 33.0) {
                                                                                                                        if (input[17] <= 38.5) {
                                                                                                                            memcpy(var0, (const double[]){0.8813559322033898, 0.11864406779661017}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.2737642585551331, 0.7262357414448669}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.8045977011494253, 0.19540229885057472}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[11] <= 33.0) {
                                                                                                                        if (input[17] <= 40.5) {
                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.9120654396728016, 0.08793456032719836}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        if (input[17] <= 40.5) {
                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.24644549763033174, 0.7535545023696683}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                if (input[17] <= 42.5) {
                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[11] <= 31.0) {
                                                                                                        memcpy(var0, (const double[]){0.5813953488372093, 0.4186046511627907}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.9532710280373832, 0.04672897196261682}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            if (input[4] <= 2496.0) {
                                                                                                if (input[17] <= 42.5) {
                                                                                                    memcpy(var0, (const double[]){0.9226361031518625, 0.07736389684813753}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.3157894736842105, 0.6842105263157895}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.31645569620253167, 0.6835443037974683}, 2 * sizeof(double));
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
                                            if (input[4] <= 2416.0) {
                                                if (input[17] <= 47.5) {
                                                    if (input[11] <= 37.0) {
                                                        if (input[17] <= 44.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9654686398872445, 0.03453136011275546}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[17] <= 45.5) {
                                                            if (input[17] <= 44.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.3262411347517731, 0.6737588652482269}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[11] <= 39.0) {
                                                                memcpy(var0, (const double[]){0.9908592321755028, 0.009140767824497258}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.7630057803468208, 0.23699421965317918}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[15] <= -68.0) {
                                                        memcpy(var0, (const double[]){0.9666666666666667, 0.03333333333333333}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9984271783579742, 0.0015728216420257944}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[11] <= 37.0) {
                                                    memcpy(var0, (const double[]){0.95260663507109, 0.04739336492890995}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 45.5) {
                                                        memcpy(var0, (const double[]){0.2857142857142857, 0.7142857142857143}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.801358234295416, 0.19864176570458403}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[17] <= 21.5) {
                                        if (input[7] <= 12.0) {
                                            memcpy(var0, (const double[]){0.3007662835249042, 0.6992337164750958}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.0898876404494382, 0.9101123595505618}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[13] <= -1724.0) {
                                            if (input[17] <= 45.5) {
                                                memcpy(var0, (const double[]){0.8084358523725835, 0.19156414762741653}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.9605568445475638, 0.03944315545243619}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[17] <= 22.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 23.5) {
                                                    memcpy(var0, (const double[]){0.27755102040816326, 0.7224489795918367}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 24.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[20] <= 44.0) {
                                                            if (input[17] <= 25.5) {
                                                                memcpy(var0, (const double[]){0.27906976744186046, 0.7209302325581395}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[17] <= 26.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[17] <= 27.5) {
                                                                        memcpy(var0, (const double[]){0.2901353965183752, 0.7098646034816247}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[17] <= 28.5) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[17] <= 29.5) {
                                                                                memcpy(var0, (const double[]){0.32432432432432434, 0.6756756756756757}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[17] <= 30.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[11] <= 19.5) {
                                                                                        if (input[23] <= -10.5) {
                                                                                            memcpy(var0, (const double[]){0.3622641509433962, 0.6377358490566037}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[17] <= 31.5) {
                                                                                                memcpy(var0, (const double[]){0.32673267326732675, 0.6732673267326733}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[17] <= 32.5) {
                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.5889145496535797, 0.4110854503464203}, 2 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (input[21] <= 1730.0) {
                                                                                            memcpy(var0, (const double[]){0.864406779661017, 0.13559322033898305}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[20] <= 30.5) {
                                                                                                if (input[21] <= 4197.0) {
                                                                                                    memcpy(var0, (const double[]){0.3956043956043956, 0.6043956043956044}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[20] <= 28.5) {
                                                                                                        memcpy(var0, (const double[]){0.6862068965517242, 0.3137931034482759}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.8761329305135952, 0.12386706948640483}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.5514792899408284, 0.4485207100591716}, 2 * sizeof(double));
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
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
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
                if (input[11] <= 8.0) {
                    if (input[6] <= 2.5) {
                        if (input[6] <= 0.5) {
                            if (input[17] <= 23.5) {
                                if (input[21] <= 2684.5) {
                                    memcpy(var0, (const double[]){0.14754098360655737, 0.8524590163934426}, 2 * sizeof(double));
                                } else {
                                    if (input[7] <= -30.0) {
                                        memcpy(var0, (const double[]){0.06896551724137931, 0.9310344827586207}, 2 * sizeof(double));
                                    } else {
                                        if (input[20] <= 44.0) {
                                            memcpy(var0, (const double[]){0.5673469387755102, 0.4326530612244898}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[20] <= 44.0) {
                                    if (input[17] <= 29.5) {
                                        memcpy(var0, (const double[]){0.7264957264957265, 0.27350427350427353}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.9602888086642599, 0.039711191335740074}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[12] <= 8.0) {
                                memcpy(var0, (const double[]){0.8816029143897997, 0.11839708561020036}, 2 * sizeof(double));
                            } else {
                                if (input[17] <= 19.5) {
                                    memcpy(var0, (const double[]){0.6142506142506142, 0.3857493857493858}, 2 * sizeof(double));
                                } else {
                                    if (input[17] <= 20.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[13] <= -72.0) {
                                            memcpy(var0, (const double[]){0.933920704845815, 0.06607929515418502}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.6973684210526315, 0.3026315789473684}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        memcpy(var0, (const double[]){0.04477611940298507, 0.9552238805970149}, 2 * sizeof(double));
                    }
                } else {
                    if (input[12] <= 8.0) {
                        if (input[12] <= 3.0) {
                            if (input[5] <= 968.0) {
                                if (input[17] <= 19.5) {
                                    if (input[21] <= 2938.0) {
                                        if (input[11] <= 10.0) {
                                            memcpy(var0, (const double[]){0.4265402843601896, 0.5734597156398105}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[13] <= -72.0) {
                                            memcpy(var0, (const double[]){0.2918454935622318, 0.7081545064377682}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.0625, 0.9375}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[11] <= 10.0) {
                                        if (input[17] <= 20.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 21.5) {
                                                memcpy(var0, (const double[]){0.2857142857142857, 0.7142857142857143}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.5794701986754967, 0.4205298013245033}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[17] <= 31.5) {
                                            if (input[17] <= 20.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[6] <= 2.5) {
                                                    if (input[6] <= 0.5) {
                                                        if (input[20] <= 35.0) {
                                                            memcpy(var0, (const double[]){0.2558139534883721, 0.7441860465116279}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.10703363914373089, 0.8929663608562691}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[14] <= -168.0) {
                                                            memcpy(var0, (const double[]){0.5961538461538461, 0.40384615384615385}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 23.5) {
                                                                if (input[13] <= 8.0) {
                                                                    memcpy(var0, (const double[]){0.35135135135135137, 0.6486486486486487}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.09248554913294797, 0.9075144508670521}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[17] <= 24.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.3384932920536636, 0.6615067079463365}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[16] <= -12.0) {
                                                        memcpy(var0, (const double[]){0.05056179775280899, 0.949438202247191}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 23.5) {
                                                            memcpy(var0, (const double[]){0.0375, 0.9625}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.259946949602122, 0.7400530503978779}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[17] <= 32.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[6] <= 0.5) {
                                                    if (input[16] <= -58.0) {
                                                        memcpy(var0, (const double[]){0.20273348519362186, 0.7972665148063781}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[11] <= 16.0) {
                                                            if (input[17] <= 33.5) {
                                                                memcpy(var0, (const double[]){0.2222222222222222, 0.7777777777777778}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6956521739130435, 0.30434782608695654}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[17] <= 47.5) {
                                                                memcpy(var0, (const double[]){0.2163265306122449, 0.7836734693877551}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[11] <= 22.0) {
                                                                    memcpy(var0, (const double[]){0.847457627118644, 0.15254237288135594}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.4126984126984127, 0.5873015873015873}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[6] <= 2.5) {
                                                        if (input[16] <= -664.0) {
                                                            memcpy(var0, (const double[]){0.39572192513368987, 0.6042780748663101}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.5966633954857704, 0.40333660451422965}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.2812903225806452, 0.7187096774193549}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[6] <= 2.5) {
                                    if (input[6] <= 0.5) {
                                        if (input[17] <= 54.0) {
                                            memcpy(var0, (const double[]){0.21568627450980393, 0.7843137254901961}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.5365853658536586, 0.4634146341463415}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.6572934973637962, 0.3427065026362039}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.1444866920152091, 0.8555133079847909}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[6] <= 0.5) {
                                if (input[20] <= 35.0) {
                                    if (input[21] <= 3149.0) {
                                        memcpy(var0, (const double[]){0.1652892561983471, 0.8347107438016529}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.5291479820627802, 0.47085201793721976}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.091324200913242, 0.908675799086758}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[6] <= 2.5) {
                                    if (input[21] <= 5631.0) {
                                        if (input[11] <= 10.0) {
                                            memcpy(var0, (const double[]){0.878345498783455, 0.12165450121654502}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 19.5) {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.8391608391608392, 0.16083916083916083}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[17] <= 19.5) {
                                            if (input[11] <= 10.0) {
                                                if (input[20] <= 40.5) {
                                                    memcpy(var0, (const double[]){0.2975206611570248, 0.7024793388429752}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.7131782945736435, 0.2868217054263566}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[15] <= 88.0) {
                                                memcpy(var0, (const double[]){0.6413043478260869, 0.358695652173913}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.9012345679012346, 0.09876543209876543}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.08823529411764706, 0.9117647058823529}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 34.5) {
                            if (input[6] <= 2.5) {
                                if (input[21] <= 1721.5) {
                                    if (input[6] <= 0.5) {
                                        memcpy(var0, (const double[]){0.16981132075471697, 0.8301886792452831}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.5991189427312775, 0.4008810572687225}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[17] <= 19.5) {
                                        if (input[11] <= 10.0) {
                                            memcpy(var0, (const double[]){0.11118553248492967, 0.8888144675150703}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[17] <= 20.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[11] <= 10.0) {
                                                if (input[17] <= 21.5) {
                                                    if (input[12] <= 10.0) {
                                                        memcpy(var0, (const double[]){0.5328185328185329, 0.4671814671814672}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.22268041237113403, 0.777319587628866}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[17] <= 22.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[13] <= -6.0) {
                                                            memcpy(var0, (const double[]){0.2702702702702703, 0.7297297297297297}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[20] <= 35.0) {
                                                                memcpy(var0, (const double[]){0.7410714285714286, 0.25892857142857145}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.3793103448275862, 0.6206896551724138}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[17] <= 23.5) {
                                                    memcpy(var0, (const double[]){0.12968299711815562, 0.8703170028818443}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 24.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 39.5) {
                                                            if (input[11] <= 12.0) {
                                                                if (input[12] <= 12.0) {
                                                                    memcpy(var0, (const double[]){0.6161616161616161, 0.3838383838383838}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[20] <= 28.5) {
                                                                        memcpy(var0, (const double[]){0.5084745762711864, 0.4915254237288136}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.1858974358974359, 0.8141025641025641}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[17] <= 27.5) {
                                                                    memcpy(var0, (const double[]){0.13054187192118227, 0.8694581280788177}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[17] <= 28.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[11] <= 14.0) {
                                                                            memcpy(var0, (const double[]){0.44660194174757284, 0.5533980582524272}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.17801998183469572, 0.8219800181653043}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[17] <= 40.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.4298642533936652, 0.5701357466063348}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[17] <= 27.5) {
                                    memcpy(var0, (const double[]){0.08289054197662062, 0.9171094580233794}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.273972602739726, 0.726027397260274}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[6] <= 0.5) {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[6] <= 2.5) {
                                    if (input[15] <= -24.0) {
                                        if (input[21] <= 7309.0) {
                                            memcpy(var0, (const double[]){0.22972972972972974, 0.7702702702702703}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.02766798418972332, 0.9723320158102767}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[21] <= 4734.0) {
                                            memcpy(var0, (const double[]){0.6909090909090909, 0.3090909090909091}, 2 * sizeof(double));
                                        } else {
                                            if (input[12] <= 28.0) {
                                                if (input[13] <= -520.0) {
                                                    memcpy(var0, (const double[]){0.45045045045045046, 0.5495495495495496}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.18118466898954705, 0.818815331010453}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.4768211920529801, 0.5231788079470199}, 2 * sizeof(double));
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
        }
    }
    memcpy(output, var0, 2 * sizeof(double));
}
