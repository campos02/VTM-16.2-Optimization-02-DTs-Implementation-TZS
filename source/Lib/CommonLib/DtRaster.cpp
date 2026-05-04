#include <string.h>
#include "DtRaster.h"

void DtRaster::score(double * input, double * output) {
    double var0[2];
    if (input[12] <= 8.5) {
        if (input[19] <= 0.5) {
            if (input[18] <= 15.5) {
                if (input[18] <= 14.5) {
                    if (input[18] <= 13.5) {
                        if (input[18] <= 12.5) {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[21] <= -2024244224.0) {
                                memcpy(var0, (const double[]){0.42105263157894735, 0.5789473684210527}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.015107913669064749, 0.9848920863309353}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[12] <= 6.5) {
                        if (input[14] <= 2.0) {
                            if (input[14] <= -2.0) {
                                if (input[24] <= 39687.0) {
                                    memcpy(var0, (const double[]){0.2546583850931677, 0.7453416149068323}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= 924.0) {
                                    if (input[15] <= 2.0) {
                                        if (input[15] <= -2.0) {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.9929577464788732, 0.007042253521126761}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.06451612903225806, 0.9354838709677419}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.527027027027027, 0.47297297297297297}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var0, (const double[]){0.08928571428571429, 0.9107142857142857}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var0, (const double[]){0.004881980948920855, 0.9951180190510791}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[13] <= 8.0) {
                    if (input[18] <= 18.5) {
                        if (input[18] <= 16.5) {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[18] <= 17.5) {
                                if (input[13] <= 3.0) {
                                    if (input[14] <= 2.0) {
                                        if (input[14] <= -2.0) {
                                            if (input[2] <= 1.5) {
                                                if (input[25] <= 4.5) {
                                                    if (input[27] <= 180.0) {
                                                        if (input[8] <= -472.0) {
                                                            if (input[15] <= -2.0) {
                                                                memcpy(var0, (const double[]){0.3492063492063492, 0.6507936507936508}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[14] <= -656.0) {
                                                                    memcpy(var0, (const double[]){0.7103448275862069, 0.2896551724137931}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.35714285714285715, 0.6428571428571429}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[14] <= -212.0) {
                                                                if (input[16] <= -60.0) {
                                                                    memcpy(var0, (const double[]){0.1810344827586207, 0.8189655172413793}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.5789473684210527, 0.42105263157894735}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[8] <= -62.0) {
                                                                    if (input[15] <= -2.0) {
                                                                        if (input[8] <= -124.0) {
                                                                            memcpy(var0, (const double[]){0.8, 0.2}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.2727272727272727, 0.7272727272727273}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[15] <= 2.0) {
                                                                            if (input[14] <= -52.0) {
                                                                                memcpy(var0, (const double[]){0.8415841584158416, 0.15841584158415842}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.36538461538461536, 0.6346153846153846}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[27] <= 156.0) {
                                                                        if (input[14] <= -6.0) {
                                                                            if (input[14] <= -26.0) {
                                                                                memcpy(var0, (const double[]){0.15151515151515152, 0.8484848484848485}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[26] <= 1408.0) {
                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.6263736263736264, 0.37362637362637363}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.06666666666666667, 0.9333333333333333}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.08130081300813008, 0.9186991869918699}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.1969111969111969, 0.803088803088803}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.02666666666666667, 0.9733333333333334}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.0972972972972973, 0.9027027027027027}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[15] <= 2.0) {
                                                if (input[15] <= -2.0) {
                                                    if (input[9] <= -14.0) {
                                                        memcpy(var0, (const double[]){0.4411764705882353, 0.5588235294117647}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.023255813953488372, 0.9767441860465116}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[16] <= 2.0) {
                                                        if (input[16] <= -2.0) {
                                                            if (input[27] <= 120.0) {
                                                                memcpy(var0, (const double[]){0.0625, 0.9375}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.8333333333333334, 0.16666666666666666}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[17] <= 2.0) {
                                                                if (input[17] <= -2.0) {
                                                                    memcpy(var0, (const double[]){0.1, 0.9}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.9883843717001056, 0.011615628299894404}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.125, 0.875}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[27] <= 228.0) {
                                                            memcpy(var0, (const double[]){0.1388888888888889, 0.8611111111111112}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9230769230769231, 0.07692307692307693}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[9] <= 14.0) {
                                                    memcpy(var0, (const double[]){0.061855670103092786, 0.9381443298969072}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.5362318840579711, 0.463768115942029}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[22] <= 1.5) {
                                            memcpy(var0, (const double[]){0.15509761388286333, 0.8449023861171366}, 2 * sizeof(double));
                                        } else {
                                            if (input[25] <= 4.5) {
                                                if (input[14] <= 62.0) {
                                                    memcpy(var0, (const double[]){0.17616580310880828, 0.8238341968911918}, 2 * sizeof(double));
                                                } else {
                                                    if (input[15] <= 2.0) {
                                                        if (input[15] <= -2.0) {
                                                            if (input[17] <= 16.0) {
                                                                memcpy(var0, (const double[]){0.20540540540540542, 0.7945945945945946}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9090909090909091, 0.09090909090909091}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[17] <= 2.0) {
                                                                if (input[8] <= 480.0) {
                                                                    if (input[22] <= 9.5) {
                                                                        if (input[8] <= 16.0) {
                                                                            memcpy(var0, (const double[]){0.29411764705882354, 0.7058823529411765}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.864406779661017, 0.13559322033898305}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[14] <= 446.0) {
                                                                            if (input[8] <= 424.0) {
                                                                                memcpy(var0, (const double[]){0.4594594594594595, 0.5405405405405406}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.0851063829787234, 0.9148936170212766}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[4] <= 376.0) {
                                                                                memcpy(var0, (const double[]){0.35, 0.65}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.825, 0.175}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.8571428571428571, 0.14285714285714285}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.06818181818181818, 0.9318181818181818}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[9] <= 28.0) {
                                                            memcpy(var0, (const double[]){0.09933774834437085, 0.9006622516556292}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.37438423645320196, 0.625615763546798}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.013513513513513514, 0.9864864864864865}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[17] <= 2.0) {
                                        if (input[16] <= 2.0) {
                                            if (input[15] <= 2.0) {
                                                if (input[17] <= -2.0) {
                                                    if (input[11] <= -44.0) {
                                                        memcpy(var0, (const double[]){0.8115942028985508, 0.18840579710144928}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[11] <= 48.0) {
                                                            memcpy(var0, (const double[]){0.11049723756906077, 0.8895027624309392}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7222222222222222, 0.2777777777777778}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[14] <= -2.0) {
                                                        if (input[8] <= -60.0) {
                                                            if (input[10] <= -24.0) {
                                                                memcpy(var0, (const double[]){0.4875, 0.5125}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9213483146067416, 0.07865168539325842}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[8] <= -2.0) {
                                                                memcpy(var0, (const double[]){0.38461538461538464, 0.6153846153846154}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[15] <= -2.0) {
                                                            if (input[9] <= -24.0) {
                                                                memcpy(var0, (const double[]){0.8979591836734694, 0.10204081632653061}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.04819277108433735, 0.9518072289156626}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[16] <= -2.0) {
                                                                if (input[14] <= 56.0) {
                                                                    if (input[16] <= -56.0) {
                                                                        if (input[4] <= 304.0) {
                                                                            memcpy(var0, (const double[]){0.18518518518518517, 0.8148148148148148}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[5] <= 1240.0) {
                                                                                if (input[8] <= 56.0) {
                                                                                    memcpy(var0, (const double[]){0.7567567567567568, 0.24324324324324326}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.1111111111111111, 0.8888888888888888}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.04072398190045249, 0.9592760180995475}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[2] <= 2.5) {
                                                                        if (input[8] <= 50.0) {
                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.9464384318056323, 0.053561568194367755}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.38461538461538464, 0.6153846153846154}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[14] <= 2.0) {
                                                                    if (input[9] <= -2.0) {
                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[8] <= 2.0) {
                                                                            if (input[10] <= 2.0) {
                                                                                if (input[25] <= 4.5) {
                                                                                    if (input[8] <= -4.0) {
                                                                                        memcpy(var0, (const double[]){0.2, 0.8}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[9] <= 2.0) {
                                                                                            memcpy(var0, (const double[]){0.9601235352893087, 0.03987646471069125}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.5454545454545454, 0.45454545454545453}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.6607142857142857, 0.3392857142857143}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.25, 0.75}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[8] <= 2.0) {
                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.8095238095238095, 0.19047619047619047}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[9] <= 12.0) {
                                                    if (input[9] <= 2.0) {
                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.4074074074074074, 0.5925925925925926}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[21] <= 12361.5) {
                                                        if (input[9] <= 62.0) {
                                                            memcpy(var0, (const double[]){0.18181818181818182, 0.8181818181818182}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7358490566037735, 0.2641509433962264}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8961538461538462, 0.10384615384615385}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[8] <= -62.0) {
                                                if (input[16] <= 72.0) {
                                                    if (input[22] <= 2.5) {
                                                        memcpy(var0, (const double[]){0.47058823529411764, 0.5294117647058824}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[14] <= -60.0) {
                                                            memcpy(var0, (const double[]){0.971201588877855, 0.028798411122144985}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[16] <= 122.0) {
                                                        memcpy(var0, (const double[]){0.01694915254237288, 0.9830508474576272}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= -2.0) {
                                                            if (input[17] <= -56.0) {
                                                                if (input[22] <= 5.5) {
                                                                    memcpy(var0, (const double[]){0.2, 0.8}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[16] <= 264.0) {
                                                                        memcpy(var0, (const double[]){0.8489583333333334, 0.15104166666666666}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.5846153846153846, 0.4153846153846154}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.04411764705882353, 0.9558823529411765}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[25] <= 4.5) {
                                                                if (input[14] <= -136.0) {
                                                                    if (input[8] <= -288.0) {
                                                                        memcpy(var0, (const double[]){0.8830022075055187, 0.11699779249448124}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[14] <= -200.0) {
                                                                            memcpy(var0, (const double[]){0.21052631578947367, 0.7894736842105263}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.6231884057971014, 0.37681159420289856}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[15] <= -10.0) {
                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.963963963963964, 0.036036036036036036}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.09090909090909091, 0.9090909090909091}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[10] <= -28.0) {
                                                    if (input[8] <= 224.0) {
                                                        memcpy(var0, (const double[]){0.5757575757575758, 0.42424242424242425}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9325842696629213, 0.06741573033707865}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[10] <= 14.0) {
                                                        if (input[4] <= 312.0) {
                                                            memcpy(var0, (const double[]){0.0425531914893617, 0.9574468085106383}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[26] <= 2176.0) {
                                                                memcpy(var0, (const double[]){0.3508771929824561, 0.6491228070175439}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.12037037037037036, 0.8796296296296297}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[10] <= 322.0) {
                                                            if (input[14] <= -8.0) {
                                                                memcpy(var0, (const double[]){0.06756756756756757, 0.9324324324324325}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.7845303867403315, 0.2154696132596685}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[8] <= 220.0) {
                                                                if (input[11] <= -32.0) {
                                                                    memcpy(var0, (const double[]){0.6153846153846154, 0.38461538461538464}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.056451612903225805, 0.9435483870967742}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.5263157894736842, 0.47368421052631576}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[11] <= 62.0) {
                                            if (input[15] <= 48.0) {
                                                if (input[16] <= 644.0) {
                                                    memcpy(var0, (const double[]){0.09607843137254903, 0.903921568627451}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.38181818181818183, 0.6181818181818182}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.696969696969697, 0.30303030303030304}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.7780678851174935, 0.22193211488250653}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[25] <= 4.5) {
                            if (input[18] <= 22.5) {
                                if (input[2] <= 1.5) {
                                    if (input[18] <= 19.5) {
                                        if (input[13] <= 3.0) {
                                            if (input[8] <= 6.0) {
                                                if (input[27] <= 156.0) {
                                                    memcpy(var0, (const double[]){0.41336633663366334, 0.5866336633663366}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.2277992277992278, 0.7722007722007722}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[14] <= 410.0) {
                                                    memcpy(var0, (const double[]){0.09815950920245399, 0.901840490797546}, 2 * sizeof(double));
                                                } else {
                                                    if (input[16] <= 240.0) {
                                                        memcpy(var0, (const double[]){0.7083333333333334, 0.2916666666666667}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.25263157894736843, 0.7473684210526316}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[15] <= -2.0) {
                                                if (input[9] <= -56.0) {
                                                    memcpy(var0, (const double[]){0.5833333333333334, 0.4166666666666667}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.11764705882352941, 0.8823529411764706}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[21] <= 13220.5) {
                                                    memcpy(var0, (const double[]){0.4854771784232365, 0.5145228215767634}, 2 * sizeof(double));
                                                } else {
                                                    if (input[15] <= 2.0) {
                                                        if (input[14] <= 2.0) {
                                                            if (input[20] <= 40.5) {
                                                                if (input[5] <= 1992.0) {
                                                                    memcpy(var0, (const double[]){0.8112745098039216, 0.18872549019607843}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[16] <= -10.0) {
                                                                    memcpy(var0, (const double[]){0.8979591836734694, 0.10204081632653061}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.6015625, 0.3984375}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[8] <= 2.0) {
                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6194690265486725, 0.3805309734513274}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[9] <= 14.0) {
                                                            memcpy(var0, (const double[]){0.05263157894736842, 0.9473684210526315}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[8] <= 16.0) {
                                                                memcpy(var0, (const double[]){0.40384615384615385, 0.5961538461538461}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.8181818181818182, 0.18181818181818182}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[11] <= 2.0) {
                                            if (input[18] <= 20.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[18] <= 21.5) {
                                                    if (input[21] <= 14811.0) {
                                                        memcpy(var0, (const double[]){0.20074349442379183, 0.7992565055762082}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[15] <= -6.0) {
                                                            memcpy(var0, (const double[]){0.15942028985507245, 0.8405797101449275}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[15] <= 2.0) {
                                                                if (input[16] <= 2.0) {
                                                                    memcpy(var0, (const double[]){0.47474747474747475, 0.5252525252525253}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[8] <= -256.0) {
                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.76, 0.24}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.3017241379310345, 0.6982758620689655}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.18309859154929578, 0.8169014084507042}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[18] <= 21.5) {
                                        if (input[18] <= 19.5) {
                                            if (input[13] <= 3.0) {
                                                memcpy(var0, (const double[]){0.15513126491646778, 0.8448687350835322}, 2 * sizeof(double));
                                            } else {
                                                if (input[15] <= 2.0) {
                                                    if (input[5] <= 1092.0) {
                                                        if (input[15] <= -2.0) {
                                                            memcpy(var0, (const double[]){0.225, 0.775}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[4] <= 728.0) {
                                                                memcpy(var0, (const double[]){0.4666666666666667, 0.5333333333333333}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.7536231884057971, 0.2463768115942029}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.1, 0.9}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.03571428571428571, 0.9642857142857143}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[18] <= 20.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.16842105263157894, 0.8315789473684211}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[18] <= 53.5) {
                                    if (input[18] <= 23.5) {
                                        memcpy(var0, (const double[]){0.11079943899018233, 0.8892005610098177}, 2 * sizeof(double));
                                    } else {
                                        if (input[18] <= 24.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[18] <= 25.5) {
                                                memcpy(var0, (const double[]){0.07796610169491526, 0.9220338983050848}, 2 * sizeof(double));
                                            } else {
                                                if (input[18] <= 26.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[24] <= 12941.5) {
                                                        if (input[14] <= 4448.0) {
                                                            memcpy(var0, (const double[]){0.14730290456431536, 0.8526970954356846}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.5454545454545454, 0.45454545454545453}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[0] <= 34.5) {
                                                            if (input[13] <= 4.5) {
                                                                if (input[21] <= 1.5) {
                                                                    memcpy(var0, (const double[]){0.09090909090909091, 0.9090909090909091}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[4] <= 936.0) {
                                                                        if (input[18] <= 27.5) {
                                                                            memcpy(var0, (const double[]){0.23529411764705882, 0.7647058823529411}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.6693548387096774, 0.33064516129032256}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.3838383838383838, 0.6161616161616161}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.1875, 0.8125}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.19553072625698323, 0.8044692737430168}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.8877551020408163, 0.11224489795918367}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[18] <= 47.5) {
                                memcpy(var0, (const double[]){0.032138442521631644, 0.9678615574783683}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.7142857142857143, 0.2857142857142857}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[18] <= 16.5) {
                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[18] <= 22.5) {
                            if (input[18] <= 21.5) {
                                if (input[25] <= 4.5) {
                                    if (input[2] <= 1.5) {
                                        if (input[8] <= -190.0) {
                                            if (input[17] <= 62.0) {
                                                if (input[17] <= 2.0) {
                                                    if (input[15] <= 2.0) {
                                                        if (input[4] <= 120.0) {
                                                            memcpy(var0, (const double[]){0.17647058823529413, 0.8235294117647058}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.41563055062166965, 0.5843694493783304}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[16] <= 568.0) {
                                                            if (input[10] <= 368.0) {
                                                                memcpy(var0, (const double[]){0.1977401129943503, 0.8022598870056498}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.5, 0.5}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.0625, 0.9375}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.08558558558558559, 0.9144144144144144}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[17] <= 66.0) {
                                                    if (input[11] <= 32.0) {
                                                        if (input[20] <= 28.5) {
                                                            memcpy(var0, (const double[]){0.3076923076923077, 0.6923076923076923}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[27] <= 114.0) {
                                                                memcpy(var0, (const double[]){0.7889908256880734, 0.21100917431192662}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.25, 0.75}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[23] <= 5.5) {
                                                            if (input[8] <= -672.0) {
                                                                memcpy(var0, (const double[]){0.5, 0.5}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.171875, 0.828125}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[3] <= 2.5) {
                                                                memcpy(var0, (const double[]){0.6630434782608695, 0.33695652173913043}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.28125, 0.71875}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[10] <= 6496.0) {
                                                        if (input[13] <= 10.0) {
                                                            if (input[18] <= 17.5) {
                                                                memcpy(var0, (const double[]){0.2459016393442623, 0.7540983606557377}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6538461538461539, 0.34615384615384615}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.13846153846153847, 0.8615384615384616}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.7368421052631579, 0.2631578947368421}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[18] <= 17.5) {
                                                if (input[13] <= 10.0) {
                                                    if (input[14] <= 126.0) {
                                                        if (input[16] <= 2.0) {
                                                            if (input[22] <= 0.5) {
                                                                if (input[16] <= -2.0) {
                                                                    memcpy(var0, (const double[]){0.06174334140435835, 0.9382566585956417}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[10] <= -56.0) {
                                                                        memcpy(var0, (const double[]){0.8181818181818182, 0.18181818181818182}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[10] <= 40.0) {
                                                                            if (input[22] <= -0.5) {
                                                                                memcpy(var0, (const double[]){0.32710280373831774, 0.6728971962616822}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.11411992263056092, 0.8858800773694391}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.9, 0.1}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[17] <= 2.0) {
                                                                    if (input[17] <= -2.0) {
                                                                        memcpy(var0, (const double[]){0.15384615384615385, 0.8461538461538461}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[16] <= -4.0) {
                                                                            memcpy(var0, (const double[]){0.16216216216216217, 0.8378378378378378}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.6728971962616822, 0.32710280373831774}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.13157894736842105, 0.868421052631579}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.070298769771529, 0.929701230228471}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[16] <= -132.0) {
                                                            if (input[10] <= -130.0) {
                                                                if (input[10] <= -504.0) {
                                                                    if (input[1] <= 2.5) {
                                                                        memcpy(var0, (const double[]){0.625, 0.375}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.16216216216216217, 0.8378378378378378}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.04693140794223827, 0.9530685920577617}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.8333333333333334, 0.16666666666666666}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[17] <= 2.0) {
                                                                if (input[10] <= -232.0) {
                                                                    memcpy(var0, (const double[]){0.9230769230769231, 0.07692307692307693}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.35570469798657717, 0.6442953020134228}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.2047244094488189, 0.7952755905511811}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[16] <= -2.0) {
                                                        memcpy(var0, (const double[]){0.13350125944584382, 0.8664987405541562}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[16] <= 2.0) {
                                                            if (input[17] <= 2.0) {
                                                                if (input[17] <= -2.0) {
                                                                    memcpy(var0, (const double[]){0.1206896551724138, 0.8793103448275862}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.10344827586206896, 0.896551724137931}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[26] <= 2176.0) {
                                                                memcpy(var0, (const double[]){0.1164021164021164, 0.8835978835978836}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[14] <= 62.0) {
                                                                    if (input[8] <= -62.0) {
                                                                        memcpy(var0, (const double[]){0.3150684931506849, 0.684931506849315}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.03296703296703297, 0.967032967032967}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.3675675675675676, 0.6324324324324324}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[13] <= 10.0) {
                                                    if (input[11] <= 2.0) {
                                                        if (input[18] <= 18.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[0] <= 34.5) {
                                                                if (input[18] <= 19.5) {
                                                                    if (input[5] <= 76.0) {
                                                                        memcpy(var0, (const double[]){0.6530612244897959, 0.3469387755102041}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.389873417721519, 0.610126582278481}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[18] <= 20.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[2] <= 0.5) {
                                                                            memcpy(var0, (const double[]){0.7142857142857143, 0.2857142857142857}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.23376623376623376, 0.7662337662337663}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.25, 0.75}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[18] <= 18.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.188, 0.812}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[18] <= 18.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 19.5) {
                                                            memcpy(var0, (const double[]){0.09159347553324969, 0.9084065244667503}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 20.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[13] <= 12.0) {
                                                                    memcpy(var0, (const double[]){0.2962962962962963, 0.7037037037037037}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.06777493606138107, 0.9322250639386189}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[16] <= -2.0) {
                                            if (input[14] <= -318.0) {
                                                memcpy(var0, (const double[]){0.2898550724637681, 0.7101449275362319}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.07870081199250469, 0.9212991880074953}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[22] <= -1.5) {
                                                if (input[17] <= -2.0) {
                                                    memcpy(var0, (const double[]){0.08771929824561403, 0.9122807017543859}, 2 * sizeof(double));
                                                } else {
                                                    if (input[26] <= 2176.0) {
                                                        if (input[17] <= 2.0) {
                                                            if (input[11] <= 2.0) {
                                                                if (input[11] <= -2.0) {
                                                                    memcpy(var0, (const double[]){0.4166666666666667, 0.5833333333333334}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[14] <= -8.0) {
                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.8846153846153846, 0.11538461538461539}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.3225806451612903, 0.6774193548387096}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.125, 0.875}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.15315315315315314, 0.8468468468468469}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[23] <= 198.5) {
                                                    memcpy(var0, (const double[]){0.11680482290881689, 0.8831951770911831}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.02180376610505451, 0.9781962338949455}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[25] <= 1.0) {
                                if (input[16] <= -2430.0) {
                                    if (input[18] <= 58.0) {
                                        if (input[23] <= -102.0) {
                                            memcpy(var0, (const double[]){0.38372093023255816, 0.6162790697674418}, 2 * sizeof(double));
                                        } else {
                                            if (input[13] <= 44.0) {
                                                if (input[11] <= 1336.0) {
                                                    memcpy(var0, (const double[]){0.21643286573146292, 0.7835671342685371}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.3764705882352941, 0.6235294117647059}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.036585365853658534, 0.9634146341463414}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[6] <= 48.0) {
                                        if (input[26] <= 3456.0) {
                                            if (input[14] <= 2.0) {
                                                if (input[21] <= 27471.0) {
                                                    memcpy(var0, (const double[]){0.13266331658291458, 0.8673366834170855}, 2 * sizeof(double));
                                                } else {
                                                    if (input[11] <= 6.0) {
                                                        if (input[11] <= -2.0) {
                                                            memcpy(var0, (const double[]){0.15348837209302327, 0.8465116279069768}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[14] <= -2.0) {
                                                                memcpy(var0, (const double[]){0.23333333333333334, 0.7666666666666667}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[16] <= -2.0) {
                                                                    memcpy(var0, (const double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.9102564102564102, 0.08974358974358974}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.13903743315508021, 0.8609625668449198}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.05834242093784078, 0.9416575790621592}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.052072263549415514, 0.9479277364505845}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[26] <= 1408.0) {
                                            memcpy(var0, (const double[]){0.7777777777777778, 0.2222222222222222}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.18945102260495156, 0.8105489773950484}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[25] <= 4.5) {
                                    memcpy(var0, (const double[]){0.05456255879586077, 0.9454374412041392}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.007394221552786526, 0.9926057784472134}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[18] <= 15.5) {
                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                if (input[13] <= 8.0) {
                    if (input[18] <= 18.5) {
                        if (input[18] <= 16.5) {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[14] <= 2.0) {
                                if (input[16] <= 2.0) {
                                    if (input[15] <= 2.0) {
                                        if (input[15] <= -2.0) {
                                            if (input[15] <= -14.0) {
                                                memcpy(var0, (const double[]){0.8956521739130435, 0.10434782608695652}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.559322033898305, 0.4406779661016949}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[8] <= -2.0) {
                                                if (input[8] <= -12.0) {
                                                    memcpy(var0, (const double[]){0.9342105263157895, 0.06578947368421052}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.5151515151515151, 0.48484848484848486}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[22] <= 3.5) {
                                                    memcpy(var0, (const double[]){0.9833777439411242, 0.016622256058875778}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.7333333333333333, 0.26666666666666666}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[15] <= 14.0) {
                                            memcpy(var0, (const double[]){0.581081081081081, 0.4189189189189189}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.9180327868852459, 0.08196721311475409}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[10] <= 10.0) {
                                        if (input[26] <= 2176.0) {
                                            if (input[18] <= 17.5) {
                                                if (input[5] <= 260.0) {
                                                    if (input[4] <= 68.0) {
                                                        memcpy(var0, (const double[]){0.2222222222222222, 0.7777777777777778}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[9] <= 2.0) {
                                                            memcpy(var0, (const double[]){0.7285714285714285, 0.2714285714285714}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.2571428571428571, 0.7428571428571429}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.8165137614678899, 0.1834862385321101}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[0] <= 24.5) {
                                            memcpy(var0, (const double[]){0.8038740920096852, 0.19612590799031476}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.9382632293080054, 0.06173677069199457}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[8] <= 30.0) {
                                    if (input[14] <= 14.0) {
                                        if (input[18] <= 17.5) {
                                            if (input[26] <= 2176.0) {
                                                memcpy(var0, (const double[]){0.18181818181818182, 0.8181818181818182}, 2 * sizeof(double));
                                            } else {
                                                if (input[16] <= -6.0) {
                                                    memcpy(var0, (const double[]){0.09090909090909091, 0.9090909090909091}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.7407407407407407, 0.25925925925925924}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[8] <= 18.0) {
                                            if (input[13] <= 3.0) {
                                                memcpy(var0, (const double[]){0.18181818181818182, 0.8181818181818182}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.8369565217391305, 0.16304347826086957}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.2361111111111111, 0.7638888888888888}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[2] <= 1.5) {
                                        if (input[10] <= -38.0) {
                                            if (input[10] <= -42.0) {
                                                memcpy(var0, (const double[]){0.8853288364249579, 0.11467116357504216}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.4, 0.6}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[14] <= 30.0) {
                                                memcpy(var0, (const double[]){0.4166666666666667, 0.5833333333333334}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.9631578947368421, 0.03684210526315789}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[21] <= 7342.0) {
                                            memcpy(var0, (const double[]){0.9767441860465116, 0.023255813953488372}, 2 * sizeof(double));
                                        } else {
                                            if (input[2] <= 2.5) {
                                                memcpy(var0, (const double[]){0.7230769230769231, 0.27692307692307694}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.4, 0.6}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[25] <= 1.0) {
                            if (input[2] <= 1.5) {
                                if (input[18] <= 22.5) {
                                    if (input[1] <= 3.5) {
                                        if (input[15] <= -2.0) {
                                            memcpy(var0, (const double[]){0.7419354838709677, 0.25806451612903225}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.912258064516129, 0.08774193548387096}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[24] <= 16902.5) {
                                            memcpy(var0, (const double[]){0.7941176470588235, 0.20588235294117646}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.45, 0.55}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[26] <= 2176.0) {
                                        memcpy(var0, (const double[]){0.848, 0.152}, 2 * sizeof(double));
                                    } else {
                                        if (input[24] <= 21894.0) {
                                            memcpy(var0, (const double[]){0.5916666666666667, 0.4083333333333333}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[26] <= 3456.0) {
                                    if (input[2] <= 2.5) {
                                        if (input[24] <= 19719.0) {
                                            if (input[13] <= 3.0) {
                                                memcpy(var0, (const double[]){0.3181818181818182, 0.6818181818181818}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.7212121212121212, 0.2787878787878788}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.373134328358209, 0.6268656716417911}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.11538461538461539, 0.8846153846153846}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.15942028985507245, 0.8405797101449275}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var0, (const double[]){0.16129032258064516, 0.8387096774193549}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[18] <= 16.5) {
                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[2] <= 1.5) {
                            if (input[25] <= 1.0) {
                                if (input[14] <= -514.0) {
                                    if (input[13] <= 14.0) {
                                        if (input[0] <= 24.5) {
                                            memcpy(var0, (const double[]){0.6956521739130435, 0.30434782608695654}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.931740614334471, 0.06825938566552901}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[11] <= 74.0) {
                                            memcpy(var0, (const double[]){0.3870967741935484, 0.6129032258064516}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.7301587301587301, 0.2698412698412698}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[1] <= 3.5) {
                                        if (input[24] <= 15070.0) {
                                            if (input[13] <= 14.0) {
                                                if (input[21] <= 31516.5) {
                                                    memcpy(var0, (const double[]){0.6891334250343879, 0.3108665749656121}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.2727272727272727, 0.7272727272727273}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[22] <= -87.5) {
                                                    memcpy(var0, (const double[]){0.8518518518518519, 0.14814814814814814}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.36764705882352944, 0.6323529411764706}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[18] <= 41.5) {
                                                if (input[18] <= 18.5) {
                                                    if (input[18] <= 17.5) {
                                                        if (input[13] <= 10.0) {
                                                            if (input[9] <= -2.0) {
                                                                if (input[9] <= -46.0) {
                                                                    memcpy(var0, (const double[]){0.6923076923076923, 0.3076923076923077}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.1782178217821782, 0.8217821782178217}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[24] <= 48372.5) {
                                                                    if (input[5] <= 120.0) {
                                                                        memcpy(var0, (const double[]){0.7272727272727273, 0.2727272727272727}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[20] <= 44.0) {
                                                                            memcpy(var0, (const double[]){0.4306784660766962, 0.5693215339233039}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.6132075471698113, 0.3867924528301887}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.36398467432950193, 0.6360153256704981}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[10] <= 680.0) {
                                                                if (input[24] <= 149149.0) {
                                                                    if (input[14] <= 34.0) {
                                                                        memcpy(var0, (const double[]){0.803921568627451, 0.19607843137254902}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.2857142857142857, 0.7142857142857143}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.18181818181818182, 0.8181818181818182}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[18] <= 19.5) {
                                                        memcpy(var0, (const double[]){0.22878228782287824, 0.7712177121771218}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 20.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[13] <= 10.0) {
                                                                memcpy(var0, (const double[]){0.5673758865248227, 0.4326241134751773}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[17] <= 6.0) {
                                                                    if (input[18] <= 21.5) {
                                                                        memcpy(var0, (const double[]){0.2684563758389262, 0.7315436241610739}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[15] <= 2.0) {
                                                                            if (input[18] <= 22.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[18] <= 23.5) {
                                                                                    memcpy(var0, (const double[]){0.26666666666666666, 0.7333333333333333}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.5619834710743802, 0.4380165289256198}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[18] <= 22.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.32515337423312884, 0.6748466257668712}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.2603550295857988, 0.7396449704142012}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[26] <= 2176.0) {
                                                    memcpy(var0, (const double[]){0.978494623655914, 0.021505376344086023}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.38461538461538464, 0.6153846153846154}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[22] <= -44.5) {
                                            if (input[24] <= 8125.0) {
                                                memcpy(var0, (const double[]){0.7236842105263158, 0.27631578947368424}, 2 * sizeof(double));
                                            } else {
                                                if (input[11] <= 1000.0) {
                                                    memcpy(var0, (const double[]){0.3951612903225806, 0.6048387096774194}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.8823529411764706, 0.11764705882352941}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[18] <= 22.5) {
                                                if (input[18] <= 21.5) {
                                                    if (input[15] <= -2.0) {
                                                        if (input[18] <= 17.5) {
                                                            memcpy(var0, (const double[]){0.13513513513513514, 0.8648648648648649}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 18.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.2868217054263566, 0.7131782945736435}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[18] <= 18.5) {
                                                            if (input[18] <= 17.5) {
                                                                if (input[16] <= -184.0) {
                                                                    memcpy(var0, (const double[]){0.8125, 0.1875}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[14] <= 2.0) {
                                                                        memcpy(var0, (const double[]){0.4604651162790698, 0.5395348837209303}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.22727272727272727, 0.7727272727272727}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[18] <= 19.5) {
                                                                memcpy(var0, (const double[]){0.2153846153846154, 0.7846153846153846}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[13] <= 12.0) {
                                                                    memcpy(var0, (const double[]){0.5632183908045977, 0.4367816091954023}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.27450980392156865, 0.7254901960784313}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[14] <= 688.0) {
                                                    if (input[13] <= 10.0) {
                                                        memcpy(var0, (const double[]){0.5, 0.5}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.20422535211267606, 0.795774647887324}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[25] <= 4.5) {
                                    if (input[18] <= 18.5) {
                                        memcpy(var0, (const double[]){0.576271186440678, 0.423728813559322}, 2 * sizeof(double));
                                    } else {
                                        if (input[7] <= 24.0) {
                                            memcpy(var0, (const double[]){0.0979381443298969, 0.9020618556701031}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.2571428571428571, 0.7428571428571429}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[14] <= 960.0) {
                                        memcpy(var0, (const double[]){0.07142857142857142, 0.9285714285714286}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.7142857142857143, 0.2857142857142857}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[24] <= 3013.0) {
                                if (input[18] <= 20.5) {
                                    memcpy(var0, (const double[]){0.7058823529411765, 0.29411764705882354}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.24390243902439024, 0.7560975609756098}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[2] <= 2.5) {
                                    if (input[10] <= -688.0) {
                                        if (input[13] <= 40.0) {
                                            memcpy(var0, (const double[]){0.4142857142857143, 0.5857142857142857}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.06818181818181818, 0.9318181818181818}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[13] <= 12.0) {
                                            if (input[18] <= 19.5) {
                                                if (input[11] <= -62.0) {
                                                    memcpy(var0, (const double[]){0.5483870967741935, 0.45161290322580644}, 2 * sizeof(double));
                                                } else {
                                                    if (input[11] <= 14.0) {
                                                        memcpy(var0, (const double[]){0.14648910411622276, 0.8535108958837773}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 18.5) {
                                                            memcpy(var0, (const double[]){0.422680412371134, 0.5773195876288659}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.09375, 0.90625}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[18] <= 20.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[18] <= 39.5) {
                                                        memcpy(var0, (const double[]){0.203125, 0.796875}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[16] <= -816.0) {
                                                memcpy(var0, (const double[]){0.8333333333333334, 0.16666666666666666}, 2 * sizeof(double));
                                            } else {
                                                if (input[18] <= 18.5) {
                                                    memcpy(var0, (const double[]){0.3220338983050847, 0.6779661016949152}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.09238249594813615, 0.9076175040518638}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.0462046204620462, 0.9537953795379538}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[13] <= 10.5) {
            if (input[19] <= 0.5) {
                if (input[25] <= 3.0) {
                    if (input[27] <= 132.0) {
                        if (input[18] <= 17.5) {
                            if (input[18] <= 14.0) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.024291497975708502, 0.9757085020242915}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[18] <= 18.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[12] <= 10.0) {
                                    if (input[13] <= 8.0) {
                                        if (input[2] <= 1.5) {
                                            if (input[13] <= 3.0) {
                                                if (input[18] <= 19.5) {
                                                    memcpy(var0, (const double[]){0.11162790697674418, 0.8883720930232558}, 2 * sizeof(double));
                                                } else {
                                                    if (input[18] <= 20.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 21.5) {
                                                            memcpy(var0, (const double[]){0.1340782122905028, 0.8659217877094972}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 22.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[3] <= 1.5) {
                                                                    memcpy(var0, (const double[]){0.62, 0.38}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.2850467289719626, 0.7149532710280374}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[17] <= 2.0) {
                                                    if (input[18] <= 22.5) {
                                                        if (input[11] <= -2.0) {
                                                            if (input[11] <= -36.0) {
                                                                memcpy(var0, (const double[]){0.4846938775510204, 0.5153061224489796}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.13513513513513514, 0.8648648648648649}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[17] <= -2.0) {
                                                                if (input[23] <= -0.5) {
                                                                    memcpy(var0, (const double[]){0.6923076923076923, 0.3076923076923077}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.2037037037037037, 0.7962962962962963}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[9] <= -2.0) {
                                                                    if (input[15] <= -10.0) {
                                                                        if (input[15] <= -96.0) {
                                                                            memcpy(var0, (const double[]){0.38095238095238093, 0.6190476190476191}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.8181818181818182, 0.18181818181818182}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.14864864864864866, 0.8513513513513513}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[15] <= -2.0) {
                                                                        memcpy(var0, (const double[]){0.07142857142857142, 0.9285714285714286}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[9] <= 2.0) {
                                                                            if (input[15] <= 2.0) {
                                                                                if (input[16] <= -2.0) {
                                                                                    memcpy(var0, (const double[]){0.5673758865248227, 0.4326241134751773}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[24] <= 3008.5) {
                                                                                        memcpy(var0, (const double[]){0.35294117647058826, 0.6470588235294118}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.7845659163987139, 0.21543408360128619}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.14285714285714285, 0.8571428571428571}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[15] <= 12.0) {
                                                                                memcpy(var0, (const double[]){0.14814814814814814, 0.8518518518518519}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.7777777777777778, 0.2222222222222222}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.22142857142857142, 0.7785714285714286}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[16] <= 1312.0) {
                                                        if (input[15] <= -60.0) {
                                                            if (input[22] <= 89.0) {
                                                                memcpy(var0, (const double[]){0.3125, 0.6875}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.7777777777777778, 0.2222222222222222}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[15] <= -2.0) {
                                                                memcpy(var0, (const double[]){0.10619469026548672, 0.8938053097345132}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.32653061224489793, 0.673469387755102}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9473684210526315, 0.05263157894736842}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[17] <= 2.0) {
                                                if (input[13] <= 3.0) {
                                                    if (input[18] <= 19.5) {
                                                        memcpy(var0, (const double[]){0.024691358024691357, 0.9753086419753086}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 20.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[14] <= -10.0) {
                                                                memcpy(var0, (const double[]){0.037037037037037035, 0.9629629629629629}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.3238095238095238, 0.6761904761904762}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[17] <= -2.0) {
                                                        memcpy(var0, (const double[]){0.140625, 0.859375}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.35714285714285715, 0.6428571428571429}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.08754208754208755, 0.9124579124579124}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[18] <= 19.5) {
                                            if (input[16] <= -2.0) {
                                                memcpy(var0, (const double[]){0.008325624421831638, 0.9916743755781684}, 2 * sizeof(double));
                                            } else {
                                                if (input[16] <= 2.0) {
                                                    if (input[17] <= -2.0) {
                                                        memcpy(var0, (const double[]){0.007462686567164179, 0.9925373134328358}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 2.0) {
                                                            if (input[20] <= 39.0) {
                                                                if (input[21] <= 10458.0) {
                                                                    memcpy(var0, (const double[]){0.18181818181818182, 0.8181818181818182}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[4] <= 24.0) {
                                                                        memcpy(var0, (const double[]){0.09090909090909091, 0.9090909090909091}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.6761904761904762, 0.3238095238095238}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.18947368421052632, 0.8105263157894737}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.008547008547008548, 0.9914529914529915}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.024657534246575342, 0.9753424657534246}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[18] <= 20.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[21] <= 96529.0) {
                                                    if (input[20] <= 39.0) {
                                                        memcpy(var0, (const double[]){0.18886679920477137, 0.8111332007952287}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.07164179104477612, 0.9283582089552239}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[0] <= 34.5) {
                                                        memcpy(var0, (const double[]){0.5636363636363636, 0.43636363636363634}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.03225806451612903, 0.967741935483871}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[18] <= 19.5) {
                                        memcpy(var0, (const double[]){0.011001410437235543, 0.9889985895627644}, 2 * sizeof(double));
                                    } else {
                                        if (input[12] <= 12.0) {
                                            if (input[18] <= 20.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 2.0) {
                                                    if (input[13] <= 8.0) {
                                                        if (input[13] <= 3.0) {
                                                            if (input[17] <= -2.0) {
                                                                memcpy(var0, (const double[]){0.0759493670886076, 0.9240506329113924}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[24] <= 4686.5) {
                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.29064039408866993, 0.7093596059113301}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[16] <= -572.0) {
                                                                memcpy(var0, (const double[]){0.7407407407407407, 0.25925925925925924}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[18] <= 24.5) {
                                                                    if (input[24] <= 2101.0) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.40350877192982454, 0.5964912280701754}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.15294117647058825, 0.8470588235294118}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[18] <= 21.5) {
                                                            memcpy(var0, (const double[]){0.04104903078677309, 0.9589509692132269}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 22.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.15384615384615385, 0.8461538461538461}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[18] <= 21.5) {
                                                        memcpy(var0, (const double[]){0.06325301204819277, 0.9367469879518072}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 22.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.13628318584070798, 0.863716814159292}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[18] <= 20.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[18] <= 21.5) {
                                                    memcpy(var0, (const double[]){0.005457025920873124, 0.9945429740791268}, 2 * sizeof(double));
                                                } else {
                                                    if (input[18] <= 22.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[20] <= 44.0) {
                                                            if (input[21] <= 21057.5) {
                                                                memcpy(var0, (const double[]){0.061652165777902515, 0.9383478342220974}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[10] <= -2.0) {
                                                                    if (input[10] <= -62.0) {
                                                                        memcpy(var0, (const double[]){0.10643776824034334, 0.8935622317596567}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.033106134371957155, 0.9668938656280428}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[10] <= 2.0) {
                                                                        if (input[9] <= 178.0) {
                                                                            if (input[9] <= -2.0) {
                                                                                memcpy(var0, (const double[]){0.14923954372623574, 0.8507604562737643}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[15] <= 2.0) {
                                                                                    if (input[12] <= 30.0) {
                                                                                        if (input[16] <= -2.0) {
                                                                                            if (input[24] <= 57253.0) {
                                                                                                memcpy(var0, (const double[]){0.07894736842105263, 0.9210526315789473}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.75, 0.25}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[5] <= 664.0) {
                                                                                                if (input[16] <= 24.0) {
                                                                                                    if (input[22] <= -0.5) {
                                                                                                        memcpy(var0, (const double[]){0.88, 0.12}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.4722222222222222, 0.5277777777777778}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.15789473684210525, 0.8421052631578947}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.17307692307692307, 0.8269230769230769}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.8958333333333334, 0.10416666666666667}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.16966067864271456, 0.8303393213572854}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.10268562401263823, 0.8973143759873617}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.08976510067114093, 0.910234899328859}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.03022474812709894, 0.969775251872901}, 2 * sizeof(double));
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
                        if (input[2] <= 1.5) {
                            if (input[18] <= 17.5) {
                                if (input[18] <= 9.0) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[18] <= 15.5) {
                                        memcpy(var0, (const double[]){0.021573604060913704, 0.9784263959390863}, 2 * sizeof(double));
                                    } else {
                                        if (input[18] <= 16.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.058, 0.942}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[18] <= 18.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[18] <= 19.5) {
                                        memcpy(var0, (const double[]){0.07095046854082998, 0.92904953145917}, 2 * sizeof(double));
                                    } else {
                                        if (input[18] <= 20.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[12] <= 11.5) {
                                                if (input[18] <= 21.5) {
                                                    memcpy(var0, (const double[]){0.17584369449378331, 0.8241563055062167}, 2 * sizeof(double));
                                                } else {
                                                    if (input[18] <= 22.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 23.5) {
                                                            memcpy(var0, (const double[]){0.1277533039647577, 0.8722466960352423}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[4] <= 1320.0) {
                                                                if (input[0] <= 34.5) {
                                                                    if (input[18] <= 24.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 25.5) {
                                                                            memcpy(var0, (const double[]){0.175, 0.825}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[21] <= 3166.5) {
                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[24] <= 9368.0) {
                                                                                    memcpy(var0, (const double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.8136645962732919, 0.18633540372670807}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[7] <= 24.0) {
                                                                        memcpy(var0, (const double[]){0.11764705882352941, 0.8823529411764706}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.4642857142857143, 0.5357142857142857}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[18] <= 24.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.21893491124260356, 0.7810650887573964}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[20] <= 28.5) {
                                                    if (input[18] <= 23.5) {
                                                        memcpy(var0, (const double[]){0.11764705882352941, 0.8823529411764706}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 24.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 25.5) {
                                                                memcpy(var0, (const double[]){0.0913978494623656, 0.9086021505376344}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[18] <= 26.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[5] <= 420.0) {
                                                                        if (input[12] <= 15.5) {
                                                                            memcpy(var0, (const double[]){0.7073170731707317, 0.2926829268292683}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[21] <= 22167.0) {
                                                                                if (input[18] <= 47.5) {
                                                                                    if (input[12] <= 35.5) {
                                                                                        memcpy(var0, (const double[]){0.32748538011695905, 0.672514619883041}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.1504424778761062, 0.8495575221238938}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[18] <= 48.5) {
                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.3875, 0.6125}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[20] <= 22.5) {
                                                                                    memcpy(var0, (const double[]){0.7073170731707317, 0.2926829268292683}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[12] <= 34.5) {
                                                                                        memcpy(var0, (const double[]){0.5384615384615384, 0.46153846153846156}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.20833333333333334, 0.7916666666666666}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[12] <= 32.5) {
                                                                            if (input[4] <= 1644.0) {
                                                                                if (input[18] <= 27.5) {
                                                                                    memcpy(var0, (const double[]){0.09836065573770492, 0.9016393442622951}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[18] <= 28.5) {
                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[18] <= 29.5) {
                                                                                            memcpy(var0, (const double[]){0.12698412698412698, 0.873015873015873}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[18] <= 30.5) {
                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[21] <= 1.0) {
                                                                                                    memcpy(var0, (const double[]){0.20408163265306123, 0.7959183673469388}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[18] <= 35.5) {
                                                                                                        if (input[18] <= 34.5) {
                                                                                                            if (input[18] <= 33.5) {
                                                                                                                memcpy(var0, (const double[]){0.3170731707317073, 0.6829268292682927}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.10869565217391304, 0.8913043478260869}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[18] <= 36.5) {
                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[18] <= 37.5) {
                                                                                                                memcpy(var0, (const double[]){0.22857142857142856, 0.7714285714285715}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[18] <= 38.5) {
                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.47297297297297297, 0.527027027027027}, 2 * sizeof(double));
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
                                                                                if (input[18] <= 39.5) {
                                                                                    memcpy(var0, (const double[]){0.14979757085020243, 0.8502024291497976}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.5098039215686274, 0.49019607843137253}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[2] <= 0.5) {
                                                                                memcpy(var0, (const double[]){0.6428571428571429, 0.35714285714285715}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.1826771653543307, 0.8173228346456692}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[24] <= 31299.0) {
                                                        if (input[12] <= 32.5) {
                                                            if (input[18] <= 39.5) {
                                                                if (input[20] <= 44.0) {
                                                                    if (input[18] <= 21.5) {
                                                                        memcpy(var0, (const double[]){0.024390243902439025, 0.975609756097561}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 22.5) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[18] <= 23.5) {
                                                                                memcpy(var0, (const double[]){0.046610169491525424, 0.9533898305084746}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[18] <= 24.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[18] <= 25.5) {
                                                                                        memcpy(var0, (const double[]){0.06234413965087282, 0.9376558603491272}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[18] <= 26.5) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[12] <= 18.5) {
                                                                                                if (input[18] <= 27.5) {
                                                                                                    memcpy(var0, (const double[]){0.13142857142857142, 0.8685714285714285}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[18] <= 28.5) {
                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[26] <= 3456.0) {
                                                                                                            if (input[0] <= 29.5) {
                                                                                                                memcpy(var0, (const double[]){0.6176470588235294, 0.38235294117647056}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.2631578947368421, 0.7368421052631579}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.1590909090909091, 0.8409090909090909}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.12875536480686695, 0.871244635193133}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.0038461538461538464, 0.9961538461538462}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[18] <= 40.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[18] <= 51.5) {
                                                                        memcpy(var0, (const double[]){0.19101123595505617, 0.8089887640449438}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.7368421052631579, 0.2631578947368421}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.05568814638027048, 0.9443118536197295}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[20] <= 44.0) {
                                                            if (input[12] <= 26.5) {
                                                                if (input[18] <= 33.5) {
                                                                    if (input[18] <= 21.5) {
                                                                        memcpy(var0, (const double[]){0.024691358024691357, 0.9753086419753086}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 22.5) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[18] <= 23.5) {
                                                                                memcpy(var0, (const double[]){0.08737864077669903, 0.912621359223301}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[18] <= 24.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[18] <= 25.5) {
                                                                                        memcpy(var0, (const double[]){0.08421052631578947, 0.9157894736842105}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[18] <= 26.5) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[12] <= 20.5) {
                                                                                                if (input[21] <= 68618.0) {
                                                                                                    if (input[18] <= 29.5) {
                                                                                                        memcpy(var0, (const double[]){0.23853211009174313, 0.7614678899082569}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.5434782608695652, 0.45652173913043476}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.59375, 0.40625}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.22325581395348837, 0.7767441860465116}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[9] <= -22.0) {
                                                                        memcpy(var0, (const double[]){0.423728813559322, 0.576271186440678}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[22] <= -194.5) {
                                                                            memcpy(var0, (const double[]){0.16666666666666666, 0.8333333333333334}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.7894736842105263, 0.21052631578947367}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[20] <= 33.0) {
                                                                    memcpy(var0, (const double[]){0.42045454545454547, 0.5795454545454546}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.17410071942446043, 0.8258992805755395}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.00425531914893617, 0.9957446808510638}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[21] <= 18944.5) {
                                if (input[12] <= 10.5) {
                                    if (input[18] <= 17.5) {
                                        memcpy(var0, (const double[]){0.06301824212271974, 0.9369817578772802}, 2 * sizeof(double));
                                    } else {
                                        if (input[18] <= 18.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[18] <= 19.5) {
                                                memcpy(var0, (const double[]){0.07608695652173914, 0.9239130434782609}, 2 * sizeof(double));
                                            } else {
                                                if (input[18] <= 20.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[20] <= 24.5) {
                                                        if (input[21] <= 7960.5) {
                                                            if (input[18] <= 55.5) {
                                                                memcpy(var0, (const double[]){0.2857142857142857, 0.7142857142857143}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8571428571428571, 0.14285714285714285}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.16521739130434782, 0.8347826086956521}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[12] <= 32.5) {
                                        if (input[17] <= 10.0) {
                                            if (input[18] <= 47.5) {
                                                memcpy(var0, (const double[]){0.10743567995476393, 0.8925643200452361}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.5757575757575758, 0.42424242424242425}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.06007604562737642, 0.9399239543726235}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[18] <= 18.5) {
                                            memcpy(var0, (const double[]){0.5625, 0.4375}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.045454545454545456, 0.9545454545454546}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[20] <= 22.5) {
                                    memcpy(var0, (const double[]){0.5441176470588235, 0.45588235294117646}, 2 * sizeof(double));
                                } else {
                                    if (input[20] <= 36.5) {
                                        if (input[9] <= 5470.0) {
                                            if (input[18] <= 55.5) {
                                                if (input[18] <= 18.5) {
                                                    if (input[18] <= 17.5) {
                                                        memcpy(var0, (const double[]){0.12, 0.88}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.18575624082232012, 0.8142437591776799}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.625, 0.375}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.4807692307692308, 0.5192307692307693}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.10108864696734059, 0.8989113530326595}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[25] <= 4.5) {
                        if (input[24] <= 63555.5) {
                            memcpy(var0, (const double[]){0.05542813455657492, 0.9445718654434251}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){0.16835016835016836, 0.8316498316498316}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var0, (const double[]){0.020544672718585764, 0.9794553272814143}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[10] <= 518.0) {
                    if (input[25] <= 1.0) {
                        if (input[18] <= 19.5) {
                            if (input[13] <= 8.0) {
                                if (input[18] <= 15.5) {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[18] <= 16.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[18] <= 17.5) {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[18] <= 18.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[2] <= 1.5) {
                                                    if (input[12] <= 10.0) {
                                                        if (input[24] <= 55719.0) {
                                                            if (input[20] <= 37.0) {
                                                                if (input[21] <= 21018.5) {
                                                                    memcpy(var0, (const double[]){0.5407725321888412, 0.4592274678111588}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[26] <= 3456.0) {
                                                                        memcpy(var0, (const double[]){0.27624309392265195, 0.7237569060773481}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.6428571428571429, 0.35714285714285715}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[24] <= 19104.0) {
                                                                    memcpy(var0, (const double[]){0.8260869565217391, 0.17391304347826086}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[1] <= 3.5) {
                                                                        if (input[20] <= 44.0) {
                                                                            memcpy(var0, (const double[]){0.4842105263157895, 0.5157894736842106}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.7281553398058253, 0.27184466019417475}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[7] <= 96.0) {
                                                                memcpy(var0, (const double[]){0.22580645161290322, 0.7741935483870968}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.5862068965517241, 0.41379310344827586}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[21] <= 7639.5) {
                                                        if (input[12] <= 10.0) {
                                                            memcpy(var0, (const double[]){0.6140350877192983, 0.38596491228070173}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.09403669724770643, 0.9059633027522935}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[18] <= 18.5) {
                                    if (input[2] <= 1.5) {
                                        memcpy(var0, (const double[]){0.23870967741935484, 0.7612903225806451}, 2 * sizeof(double));
                                    } else {
                                        if (input[18] <= 17.5) {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.04459585010839269, 0.9554041498916073}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[18] <= 20.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[12] <= 10.0) {
                                    if (input[2] <= 1.5) {
                                        if (input[13] <= 8.0) {
                                            if (input[1] <= 3.5) {
                                                if (input[5] <= 1400.0) {
                                                    if (input[22] <= -79.5) {
                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.831858407079646, 0.168141592920354}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.3181818181818182, 0.6818181818181818}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.53125, 0.46875}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[20] <= 44.0) {
                                                if (input[1] <= 3.5) {
                                                    if (input[5] <= 232.0) {
                                                        memcpy(var0, (const double[]){0.7377049180327869, 0.26229508196721313}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.5608108108108109, 0.4391891891891892}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[24] <= 13295.0) {
                                                        memcpy(var0, (const double[]){0.5533980582524272, 0.44660194174757284}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.28378378378378377, 0.7162162162162162}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[15] <= 76.0) {
                                                    memcpy(var0, (const double[]){0.1728395061728395, 0.8271604938271605}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[18] <= 49.5) {
                                            if (input[24] <= 10191.5) {
                                                if (input[4] <= 2388.0) {
                                                    if (input[7] <= 24.0) {
                                                        memcpy(var0, (const double[]){0.36879432624113473, 0.6312056737588653}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8235294117647058, 0.17647058823529413}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.03125, 0.96875}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.19245283018867926, 0.8075471698113208}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[2] <= 1.5) {
                                        if (input[12] <= 12.0) {
                                            if (input[13] <= 8.0) {
                                                if (input[13] <= 3.0) {
                                                    if (input[18] <= 43.5) {
                                                        memcpy(var0, (const double[]){0.16129032258064516, 0.8387096774193549}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[9] <= 14.0) {
                                                        if (input[20] <= 35.0) {
                                                            memcpy(var0, (const double[]){0.6581196581196581, 0.3418803418803419}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[14] <= -58.0) {
                                                                memcpy(var0, (const double[]){0.7575757575757576, 0.24242424242424243}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.375, 0.625}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[15] <= 34.0) {
                                                            memcpy(var0, (const double[]){0.8907563025210085, 0.1092436974789916}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.5714285714285714, 0.42857142857142855}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[18] <= 21.5) {
                                                    memcpy(var0, (const double[]){0.08277404921700224, 0.9172259507829977}, 2 * sizeof(double));
                                                } else {
                                                    if (input[18] <= 22.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 23.5) {
                                                            memcpy(var0, (const double[]){0.2484076433121019, 0.7515923566878981}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[20] <= 44.0) {
                                                                if (input[4] <= 132.0) {
                                                                    memcpy(var0, (const double[]){0.22727272727272727, 0.7727272727272727}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.05, 0.95}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[18] <= 21.5) {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[18] <= 22.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[12] <= 14.0) {
                                                        if (input[13] <= 8.0) {
                                                            if (input[18] <= 24.5) {
                                                                if (input[4] <= 972.0) {
                                                                    memcpy(var0, (const double[]){0.47368421052631576, 0.5263157894736842}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.8070175438596491, 0.19298245614035087}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.30246913580246915, 0.6975308641975309}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[18] <= 23.5) {
                                                                memcpy(var0, (const double[]){0.0684931506849315, 0.9315068493150684}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[18] <= 24.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.2867647058823529, 0.7132352941176471}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[18] <= 23.5) {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 24.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[8] <= 254.0) {
                                                                    memcpy(var0, (const double[]){0.18109756097560975, 0.8189024390243902}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[13] <= 3.0) {
                                                                        memcpy(var0, (const double[]){0.13291139240506328, 0.8670886075949367}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.32229580573951433, 0.6777041942604857}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[24] <= 5536.0) {
                                            if (input[20] <= 40.5) {
                                                memcpy(var0, (const double[]){0.17154811715481172, 0.8284518828451883}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.6875, 0.3125}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[18] <= 21.5) {
                                                memcpy(var0, (const double[]){0.028277634961439587, 0.9717223650385605}, 2 * sizeof(double));
                                            } else {
                                                if (input[18] <= 22.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.11618900077459333, 0.8838109992254066}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[25] <= 4.5) {
                            memcpy(var0, (const double[]){0.09253731343283582, 0.9074626865671642}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){0.0186536901865369, 0.981346309813463}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[5] <= 920.0) {
                        if (input[18] <= 15.5) {
                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[12] <= 16.0) {
                                if (input[18] <= 16.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[18] <= 17.5) {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[2] <= 1.5) {
                                            if (input[15] <= 22.0) {
                                                if (input[11] <= 50.0) {
                                                    if (input[25] <= 1.0) {
                                                        if (input[13] <= 8.0) {
                                                            memcpy(var0, (const double[]){0.8163265306122449, 0.1836734693877551}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.5794392523364486, 0.4205607476635514}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.37254901960784315, 0.6274509803921569}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.25, 0.75}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.12903225806451613, 0.8709677419354839}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var0, (const double[]){0.24060150375939848, 0.7593984962406015}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[21] <= 15540.5) {
                            if (input[4] <= 3208.0) {
                                memcpy(var0, (const double[]){0.38596491228070173, 0.6140350877192983}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.9230769230769231, 0.07692307692307693}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[25] <= 1.0) {
                                if (input[12] <= 12.0) {
                                    memcpy(var0, (const double[]){0.8347826086956521, 0.16521739130434782}, 2 * sizeof(double));
                                } else {
                                    if (input[16] <= 660.0) {
                                        memcpy(var0, (const double[]){0.30303030303030304, 0.696969696969697}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.7222222222222222, 0.2777777777777778}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var0, (const double[]){0.19047619047619047, 0.8095238095238095}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            if (input[18] <= 14.5) {
                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                if (input[25] <= 1.0) {
                    if (input[19] <= 0.5) {
                        if (input[20] <= 44.0) {
                            if (input[24] <= 21974.5) {
                                if (input[2] <= 1.5) {
                                    if (input[0] <= 24.5) {
                                        if (input[24] <= 6114.0) {
                                            memcpy(var0, (const double[]){0.048109965635738834, 0.9518900343642611}, 2 * sizeof(double));
                                        } else {
                                            if (input[20] <= 27.0) {
                                                if (input[12] <= 30.0) {
                                                    if (input[8] <= -42.0) {
                                                        memcpy(var0, (const double[]){0.14035087719298245, 0.8596491228070176}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.2857142857142857, 0.7142857142857143}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[12] <= 56.0) {
                                                        memcpy(var0, (const double[]){0.06639004149377593, 0.9336099585062241}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[21] <= 21798.0) {
                                                    memcpy(var0, (const double[]){0.09603174603174604, 0.903968253968254}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.16666666666666666, 0.8333333333333334}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[26] <= 1408.0) {
                                            memcpy(var0, (const double[]){0.13863636363636364, 0.8613636363636363}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.04777911164465786, 0.9522208883553421}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.034193386773547094, 0.9658066132264529}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[13] <= 53.5) {
                                    if (input[24] <= 46695.5) {
                                        if (input[20] <= 35.5) {
                                            if (input[3] <= 2.5) {
                                                memcpy(var0, (const double[]){0.12095933263816476, 0.8790406673618353}, 2 * sizeof(double));
                                            } else {
                                                if (input[12] <= 36.0) {
                                                    memcpy(var0, (const double[]){0.23357664233576642, 0.7664233576642335}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.043478260869565216, 0.9565217391304348}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.07974217311233886, 0.9202578268876611}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[12] <= 30.0) {
                                            if (input[18] <= 85.0) {
                                                if (input[24] <= 186285.0) {
                                                    memcpy(var0, (const double[]){0.1639135959339263, 0.8360864040660737}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.25061425061425063, 0.7493857493857494}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.09257265877287406, 0.907427341227126}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var0, (const double[]){0.004765535646206634, 0.9952344643537934}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[2] <= 1.5) {
                            if (input[12] <= 14.0) {
                                if (input[20] <= 44.0) {
                                    if (input[18] <= 27.5) {
                                        if (input[16] <= 516.0) {
                                            if (input[18] <= 23.5) {
                                                if (input[18] <= 22.5) {
                                                    if (input[18] <= 21.5) {
                                                        memcpy(var0, (const double[]){0.14226519337016574, 0.8577348066298343}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[12] <= 10.0) {
                                                        memcpy(var0, (const double[]){0.1875, 0.8125}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.06288032454361055, 0.9371196754563894}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[18] <= 24.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[12] <= 12.0) {
                                                        if (input[13] <= 12.0) {
                                                            if (input[0] <= 29.5) {
                                                                memcpy(var0, (const double[]){0.463855421686747, 0.536144578313253}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.23255813953488372, 0.7674418604651163}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[15] <= -28.0) {
                                                                memcpy(var0, (const double[]){0.32432432432432434, 0.6756756756756757}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[18] <= 25.5) {
                                                                    memcpy(var0, (const double[]){0.08483290488431877, 0.9151670951156813}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[18] <= 26.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.14661654135338345, 0.8533834586466166}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.1006423982869379, 0.8993576017130621}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.35377358490566035, 0.6462264150943396}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[18] <= 28.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[13] <= 14.0) {
                                                if (input[18] <= 41.5) {
                                                    if (input[6] <= 48.0) {
                                                        memcpy(var0, (const double[]){0.31223628691983124, 0.6877637130801688}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.5436893203883495, 0.4563106796116505}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.7096774193548387, 0.2903225806451613}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[18] <= 29.5) {
                                                    memcpy(var0, (const double[]){0.11797752808988764, 0.8820224719101124}, 2 * sizeof(double));
                                                } else {
                                                    if (input[18] <= 30.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[16] <= 246.0) {
                                                            memcpy(var0, (const double[]){0.2333965844402277, 0.7666034155597723}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.453781512605042, 0.5462184873949579}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[21] <= 9839.0) {
                                        memcpy(var0, (const double[]){0.5714285714285714, 0.42857142857142855}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.06461538461538462, 0.9353846153846154}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[20] <= 44.0) {
                                    if (input[21] <= 14519.5) {
                                        memcpy(var0, (const double[]){0.11301457427767835, 0.8869854257223216}, 2 * sizeof(double));
                                    } else {
                                        if (input[20] <= 33.0) {
                                            if (input[2] <= 0.5) {
                                                memcpy(var0, (const double[]){0.3732394366197183, 0.6267605633802817}, 2 * sizeof(double));
                                            } else {
                                                if (input[26] <= 3456.0) {
                                                    memcpy(var0, (const double[]){0.14309484193011648, 0.8569051580698835}, 2 * sizeof(double));
                                                } else {
                                                    if (input[21] <= 17987.5) {
                                                        if (input[21] <= 17926.0) {
                                                            memcpy(var0, (const double[]){0.34349030470914127, 0.6565096952908587}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8333333333333334, 0.16666666666666666}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[1] <= 3.5) {
                                                            memcpy(var0, (const double[]){0.260707635009311, 0.7392923649906891}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[21] <= 35609.5) {
                                                                if (input[27] <= 132.0) {
                                                                    memcpy(var0, (const double[]){0.11948051948051948, 0.8805194805194805}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.6363636363636364, 0.36363636363636365}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.7, 0.3}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.13822688274547187, 0.8617731172545281}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.03912466843501326, 0.9608753315649867}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var0, (const double[]){0.05815387534389527, 0.9418461246561047}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[20] <= 44.0) {
                        if (input[25] <= 4.5) {
                            if (input[18] <= 131.0) {
                                if (input[19] <= 0.5) {
                                    memcpy(var0, (const double[]){0.03140022501789915, 0.9685997749821008}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.05949615865642308, 0.9405038413435769}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var0, (const double[]){0.012496559317368566, 0.9875034406826314}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var0, (const double[]){0.003110566500141389, 0.9968894334998586}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    memcpy(output, var0, 2 * sizeof(double));
}
