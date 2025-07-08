//RAMIRO - VTM 16.2 - Otimização Inter-Quadros - Implementação de DTs no TZS

#include "DT_TZS_16x32.h"

#include <string.h>
void DT_TZS_16x32::score(double * input, double * output) {
    double var0[2];
    if (input[19] <= 2.5) {
        if (input[6] <= 0.5) {
            if (input[21] <= 2124.5) {
                if (input[17] <= 62.0) {
                    memcpy(var0, (const double[]){0.002694000919902753, 0.9973059990800972}, 2 * sizeof(double));
                } else {
                    memcpy(var0, (const double[]){0.2564102564102564, 0.7435897435897436}, 2 * sizeof(double));
                }
            } else {
                if (input[20] <= 33.0) {
                    if (input[16] <= 2.0) {
                        if (input[16] <= -2.0) {
                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[17] <= 16.0) {
                                memcpy(var0, (const double[]){0.05, 0.95}, 2 * sizeof(double));
                            } else {
                                if (input[15] <= -2.0) {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[15] <= 2.0) {
                                        if (input[13] <= -2.0) {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[13] <= 2.0) {
                                                memcpy(var0, (const double[]){0.9932177844762623, 0.006782215523737754}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[13] <= -2.0) {
                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        if (input[13] <= 2.0) {
                            if (input[17] <= 24.0) {
                                if (input[17] <= 20.0) {
                                    memcpy(var0, (const double[]){0.025284450063211124, 0.9747155499367889}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[16] <= 2.0) {
                                    if (input[16] <= -2.0) {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[20] <= 44.0) {
                                            if (input[15] <= -2.0) {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.9745454545454545, 0.025454545454545455}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
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
                            if (input[14] <= -2.0) {
                                if (input[8] <= -14.0) {
                                    if (input[16] <= -332.0) {
                                        if (input[16] <= -592.0) {
                                            memcpy(var0, (const double[]){0.972176759410802, 0.027823240589198037}, 2 * sizeof(double));
                                        } else {
                                            if (input[0] <= 29.5) {
                                                memcpy(var0, (const double[]){0.601823708206687, 0.3981762917933131}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.9192546583850931, 0.08074534161490683}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[14] <= -328.0) {
                                            memcpy(var0, (const double[]){0.14347826086956522, 0.8565217391304348}, 2 * sizeof(double));
                                        } else {
                                            if (input[13] <= -136.0) {
                                                if (input[13] <= -4408.0) {
                                                    memcpy(var0, (const double[]){0.2033898305084746, 0.7966101694915254}, 2 * sizeof(double));
                                                } else {
                                                    if (input[20] <= 26.0) {
                                                        memcpy(var0, (const double[]){0.6343283582089553, 0.3656716417910448}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[13] <= -840.0) {
                                                            memcpy(var0, (const double[]){0.875, 0.125}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.6932270916334662, 0.30677290836653387}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[5] <= 984.0) {
                                                    if (input[6] <= 2.5) {
                                                        if (input[6] <= 0.5) {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[16] <= -56.0) {
                                                                if (input[14] <= -72.0) {
                                                                    if (input[8] <= -72.0) {
                                                                        if (input[13] <= -88.0) {
                                                                            memcpy(var0, (const double[]){0.3148148148148148, 0.6851851851851852}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.6159844054580896, 0.3840155945419103}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.0821917808219178, 0.9178082191780822}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[8] <= -72.0) {
                                                                        memcpy(var0, (const double[]){0.19047619047619047, 0.8095238095238095}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.7974947807933194, 0.20250521920668058}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[14] <= -24.0) {
                                                                    if (input[8] <= -24.0) {
                                                                        memcpy(var0, (const double[]){0.47023809523809523, 0.5297619047619048}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.08, 0.92}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.6889952153110048, 0.31100478468899523}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.88, 0.12}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.1016949152542373, 0.8983050847457628}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[14] <= 2.0) {
                                    if (input[13] <= -2.0) {
                                        if (input[7] <= -4.0) {
                                            if (input[8] <= 4.0) {
                                                if (input[13] <= -240.0) {
                                                    if (input[7] <= -224.0) {
                                                        if (input[20] <= 26.0) {
                                                            memcpy(var0, (const double[]){0.3576158940397351, 0.6423841059602649}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[13] <= -928.0) {
                                                                memcpy(var0, (const double[]){0.9090909090909091, 0.09090909090909091}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.639386189258312, 0.36061381074168797}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.0106951871657754, 0.9893048128342246}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[13] <= -136.0) {
                                                        memcpy(var0, (const double[]){0.9776286353467561, 0.02237136465324385}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[7] <= -160.0) {
                                                            memcpy(var0, (const double[]){0.11851851851851852, 0.8814814814814815}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8711340206185567, 0.12886597938144329}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.16346153846153846, 0.8365384615384616}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.16033755274261605, 0.8396624472573839}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[13] <= 2.0) {
                                            if (input[8] <= -24.0) {
                                                memcpy(var0, (const double[]){0.417910447761194, 0.582089552238806}, 2 * sizeof(double));
                                            } else {
                                                if (input[6] <= 2.5) {
                                                    if (input[15] <= 24.0) {
                                                        memcpy(var0, (const double[]){0.9983723550770002, 0.0016276449229998748}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.4, 0.6}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[7] <= 14.0) {
                                                memcpy(var0, (const double[]){0.12371134020618557, 0.8762886597938144}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.7084233261339092, 0.2915766738660907}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[8] <= 14.0) {
                                        memcpy(var0, (const double[]){0.07535641547861507, 0.924643584521385}, 2 * sizeof(double));
                                    } else {
                                        if (input[0] <= 29.5) {
                                            if (input[5] <= 1136.0) {
                                                if (input[4] <= 1188.0) {
                                                    memcpy(var0, (const double[]){0.6917293233082706, 0.3082706766917293}, 2 * sizeof(double));
                                                } else {
                                                    if (input[5] <= 88.0) {
                                                        memcpy(var0, (const double[]){0.8275862068965517, 0.1724137931034483}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[22] <= 2.5) {
                                                            if (input[15] <= -472.0) {
                                                                memcpy(var0, (const double[]){0.5525291828793775, 0.4474708171206226}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.3314285714285714, 0.6685714285714286}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9523809523809523, 0.047619047619047616}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.95, 0.05}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[13] <= -56.0) {
                                                if (input[6] <= 1.5) {
                                                    memcpy(var0, (const double[]){0.9711934156378601, 0.02880658436213992}, 2 * sizeof(double));
                                                } else {
                                                    if (input[21] <= 7387.0) {
                                                        memcpy(var0, (const double[]){0.9401709401709402, 0.05982905982905983}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.7129337539432177, 0.2870662460567823}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.549618320610687, 0.45038167938931295}, 2 * sizeof(double));
                                            }
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
                        if (input[17] <= 17.5) {
                            if (input[15] <= -2.0) {
                                if (input[20] <= 33.0) {
                                    if (input[21] <= 1701.5) {
                                        if (input[11] <= 6.5) {
                                            if (input[5] <= 624.0) {
                                                memcpy(var0, (const double[]){0.4896073903002309, 0.5103926096997691}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.22807017543859648, 0.7719298245614035}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[13] <= -8.0) {
                                                if (input[21] <= 1248.0) {
                                                    memcpy(var0, (const double[]){0.9550561797752809, 0.0449438202247191}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.6827586206896552, 0.31724137931034485}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.5645645645645646, 0.43543543543543545}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[18] <= 0.5) {
                                            if (input[21] <= 1945979520.0) {
                                                if (input[22] <= 1.5) {
                                                    if (input[6] <= 1.5) {
                                                        if (input[4] <= 472.0) {
                                                            memcpy(var0, (const double[]){0.1044776119402985, 0.8955223880597015}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.2939068100358423, 0.7060931899641577}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[4] <= 1220.0) {
                                                            if (input[21] <= 3127.5) {
                                                                memcpy(var0, (const double[]){0.5754189944134078, 0.4245810055865922}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.36875, 0.63125}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.2850574712643678, 0.7149425287356321}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.6363636363636364, 0.36363636363636365}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.8192771084337349, 0.18072289156626506}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.6331360946745562, 0.3668639053254438}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[21] <= 2258.5) {
                                        if (input[11] <= 6.5) {
                                            memcpy(var0, (const double[]){0.6307692307692307, 0.36923076923076925}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.9244558258642765, 0.07554417413572344}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[5] <= 840.0) {
                                            if (input[22] <= 2.5) {
                                                if (input[21] <= 4235.0) {
                                                    if (input[14] <= 2.0) {
                                                        if (input[14] <= -18.0) {
                                                            memcpy(var0, (const double[]){0.45544554455445546, 0.5445544554455446}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8020565552699229, 0.19794344473007713}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.5217391304347826, 0.4782608695652174}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[15] <= -200.0) {
                                                        memcpy(var0, (const double[]){0.6844660194174758, 0.3155339805825243}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[5] <= 368.0) {
                                                            if (input[7] <= 14.0) {
                                                                memcpy(var0, (const double[]){0.278372591006424, 0.721627408993576}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6055045871559633, 0.3944954128440367}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.5740318906605922, 0.42596810933940776}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.831353919239905, 0.16864608076009502}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[20] <= 41.5) {
                                                memcpy(var0, (const double[]){0.75, 0.25}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.9385474860335196, 0.061452513966480445}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[13] <= 2.0) {
                                    if (input[14] <= -2.0) {
                                        if (input[5] <= 688.0) {
                                            if (input[8] <= -14.0) {
                                                if (input[7] <= 2.0) {
                                                    if (input[13] <= -2.0) {
                                                        memcpy(var0, (const double[]){0.6451612903225806, 0.3548387096774194}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[20] <= 33.0) {
                                                            memcpy(var0, (const double[]){0.7077922077922078, 0.2922077922077922}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.923728813559322, 0.07627118644067797}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.32142857142857145, 0.6785714285714286}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[21] <= 2656.0) {
                                                    memcpy(var0, (const double[]){0.5739644970414202, 0.4260355029585799}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.2783018867924528, 0.7216981132075472}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[20] <= 36.5) {
                                                memcpy(var0, (const double[]){0.6153846153846154, 0.38461538461538464}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.9645868465430016, 0.03541315345699832}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[16] <= 2.0) {
                                            if (input[15] <= 2.0) {
                                                if (input[13] <= -2.0) {
                                                    if (input[23] <= -1.5) {
                                                        memcpy(var0, (const double[]){0.3116883116883117, 0.6883116883116883}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.7351778656126482, 0.2648221343873518}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[16] <= -2.0) {
                                                        if (input[8] <= 10.0) {
                                                            memcpy(var0, (const double[]){0.6157760814249363, 0.3842239185750636}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9318181818181818, 0.06818181818181818}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[14] <= 40.0) {
                                                            if (input[18] <= 0.5) {
                                                                memcpy(var0, (const double[]){0.9911194204253331, 0.008880579574666978}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[6] <= 0.5) {
                                                                    memcpy(var0, (const double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[12] <= 8.0) {
                                                                        memcpy(var0, (const double[]){0.9577098243331165, 0.04229017566688354}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.8075471698113208, 0.19245283018867926}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.6415094339622641, 0.3584905660377358}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[13] <= -14.0) {
                                                    if (input[22] <= 2.5) {
                                                        memcpy(var0, (const double[]){0.6914893617021277, 0.30851063829787234}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8792569659442725, 0.12074303405572756}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[22] <= 2.5) {
                                                        memcpy(var0, (const double[]){0.3210702341137124, 0.6789297658862876}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6808510638297872, 0.3191489361702128}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[18] <= 0.5) {
                                                if (input[8] <= 12.0) {
                                                    memcpy(var0, (const double[]){0.36446469248291574, 0.6355353075170843}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.7509578544061303, 0.24904214559386972}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.9095477386934674, 0.09045226130653267}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[5] <= 624.0) {
                                        if (input[21] <= 2186.5) {
                                            if (input[6] <= 0.5) {
                                                memcpy(var0, (const double[]){0.13953488372093023, 0.8604651162790697}, 2 * sizeof(double));
                                            } else {
                                                if (input[11] <= 6.5) {
                                                    memcpy(var0, (const double[]){0.5826086956521739, 0.41739130434782606}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.8, 0.2}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[4] <= 1016.0) {
                                                if (input[7] <= 2.0) {
                                                    memcpy(var0, (const double[]){0.1686046511627907, 0.8313953488372093}, 2 * sizeof(double));
                                                } else {
                                                    if (input[14] <= -2.0) {
                                                        memcpy(var0, (const double[]){0.32360742705570295, 0.6763925729442971}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[14] <= 6.0) {
                                                            if (input[16] <= 2.0) {
                                                                memcpy(var0, (const double[]){0.6649874055415617, 0.3350125944584383}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.20689655172413793, 0.7931034482758621}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.36075949367088606, 0.6392405063291139}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.7171052631578947, 0.28289473684210525}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[20] <= 27.0) {
                                            memcpy(var0, (const double[]){0.36036036036036034, 0.6396396396396397}, 2 * sizeof(double));
                                        } else {
                                            if (input[22] <= 83.5) {
                                                if (input[13] <= 872.0) {
                                                    memcpy(var0, (const double[]){0.8054862842892768, 0.19451371571072318}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.15384615384615385, 0.8461538461538461}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.9868995633187773, 0.013100436681222707}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[17] <= 18.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[17] <= 19.5) {
                                    if (input[19] <= 6.5) {
                                        if (input[21] <= 2490.5) {
                                            if (input[6] <= 0.5) {
                                                memcpy(var0, (const double[]){0.29850746268656714, 0.7014925373134329}, 2 * sizeof(double));
                                            } else {
                                                if (input[20] <= 27.0) {
                                                    memcpy(var0, (const double[]){0.5560344827586207, 0.44396551724137934}, 2 * sizeof(double));
                                                } else {
                                                    if (input[11] <= 6.5) {
                                                        memcpy(var0, (const double[]){0.6575342465753424, 0.3424657534246575}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[21] <= 1493.5) {
                                                            memcpy(var0, (const double[]){0.9365079365079365, 0.06349206349206349}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[20] <= 33.0) {
                                                                memcpy(var0, (const double[]){0.6705202312138728, 0.32947976878612717}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9073170731707317, 0.09268292682926829}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[14] <= -2.0) {
                                                if (input[8] <= -14.0) {
                                                    if (input[13] <= -424.0) {
                                                        memcpy(var0, (const double[]){0.779874213836478, 0.22012578616352202}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[14] <= -18.0) {
                                                            if (input[8] <= -20.0) {
                                                                memcpy(var0, (const double[]){0.5277777777777778, 0.4722222222222222}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.09302325581395349, 0.9069767441860465}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7192982456140351, 0.2807017543859649}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.3104325699745547, 0.6895674300254453}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[22] <= -1.5) {
                                                    if (input[23] <= 2.5) {
                                                        memcpy(var0, (const double[]){0.5809128630705395, 0.4190871369294606}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.408, 0.592}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[5] <= 624.0) {
                                                        if (input[15] <= 28.0) {
                                                            if (input[14] <= 30.0) {
                                                                memcpy(var0, (const double[]){0.7495741056218058, 0.2504258943781942}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.5379310344827586, 0.46206896551724136}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.4806201550387597, 0.5193798449612403}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8055130168453293, 0.19448698315467075}, 2 * sizeof(double));
                                                    }
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
                                                if (input[20] <= 24.5) {
                                                    memcpy(var0, (const double[]){0.3055555555555556, 0.6944444444444444}, 2 * sizeof(double));
                                                } else {
                                                    if (input[22] <= -2.5) {
                                                        if (input[21] <= 20553778.0) {
                                                            memcpy(var0, (const double[]){0.5484460694698354, 0.4515539305301645}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8771929824561403, 0.12280701754385964}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[21] <= 22642.0) {
                                                            if (input[11] <= 6.5) {
                                                                memcpy(var0, (const double[]){0.49624060150375937, 0.5037593984962406}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[13] <= 2.0) {
                                                                    if (input[6] <= 0.5) {
                                                                        memcpy(var0, (const double[]){0.5857142857142857, 0.4142857142857143}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.8257918552036199, 0.17420814479638008}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.6461538461538462, 0.35384615384615387}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.30434782608695654, 0.6956521739130435}, 2 * sizeof(double));
                                                        }
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
                                                    if (input[11] <= 6.5) {
                                                        memcpy(var0, (const double[]){0.47686832740213525, 0.5231316725978647}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[21] <= 24826.5) {
                                                            memcpy(var0, (const double[]){0.7180851063829787, 0.28191489361702127}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[17] <= 24.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 25.5) {
                                                            if (input[21] <= 468.5) {
                                                                memcpy(var0, (const double[]){0.37681159420289856, 0.6231884057971014}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[16] <= -264.0) {
                                                                    memcpy(var0, (const double[]){0.44776119402985076, 0.5522388059701493}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.7408829174664108, 0.2591170825335892}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[17] <= 26.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[20] <= 24.5) {
                                                                    memcpy(var0, (const double[]){0.5146198830409356, 0.4853801169590643}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[22] <= -17.5) {
                                                                        if (input[13] <= -728.0) {
                                                                            memcpy(var0, (const double[]){0.8828828828828829, 0.11711711711711711}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.6354166666666666, 0.3645833333333333}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[17] <= 27.5) {
                                                                            memcpy(var0, (const double[]){0.75, 0.25}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[17] <= 28.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.85451197053407, 0.14548802946593}, 2 * sizeof(double));
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
                        if (input[17] <= 17.5) {
                            memcpy(var0, (const double[]){0.04081632653061224, 0.9591836734693877}, 2 * sizeof(double));
                        } else {
                            if (input[17] <= 18.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[17] <= 19.5) {
                                    memcpy(var0, (const double[]){0.09345794392523364, 0.9065420560747663}, 2 * sizeof(double));
                                } else {
                                    if (input[17] <= 20.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.2748414376321353, 0.7251585623678647}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[18] <= 0.5) {
                if (input[17] <= 15.5) {
                    if (input[6] <= 0.5) {
                        if (input[11] <= 8.5) {
                            if (input[17] <= 14.5) {
                                if (input[17] <= 13.5) {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[19] <= 6.5) {
                            if (input[17] <= 13.5) {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[17] <= 14.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[13] <= -344.0) {
                                        if (input[14] <= -332.0) {
                                            memcpy(var0, (const double[]){0.08793969849246232, 0.9120603015075377}, 2 * sizeof(double));
                                        } else {
                                            if (input[13] <= -4284.0) {
                                                memcpy(var0, (const double[]){0.3177083333333333, 0.6822916666666666}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.1572052401746725, 0.8427947598253275}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[5] <= 1928.0) {
                                            memcpy(var0, (const double[]){0.07984031936127745, 0.9201596806387226}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.5128205128205128, 0.48717948717948717}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[17] <= 16.5) {
                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[17] <= 17.5) {
                            if (input[19] <= 6.5) {
                                if (input[11] <= 8.5) {
                                    if (input[21] <= 2481.0) {
                                        if (input[21] <= -382925952.0) {
                                            if (input[13] <= -24.0) {
                                                memcpy(var0, (const double[]){0.2706270627062706, 0.7293729372937293}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.5726872246696035, 0.42731277533039647}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[6] <= 0.5) {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.19767441860465115, 0.8023255813953488}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[6] <= 1.5) {
                                            if (input[5] <= 88.0) {
                                                memcpy(var0, (const double[]){0.6, 0.4}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.25968109339407747, 0.7403189066059226}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[7] <= -4252.0) {
                                                memcpy(var0, (const double[]){0.23, 0.77}, 2 * sizeof(double));
                                            } else {
                                                if (input[6] <= 2.5) {
                                                    if (input[21] <= 3265.5) {
                                                        memcpy(var0, (const double[]){0.2956521739130435, 0.7043478260869566}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[22] <= -19.5) {
                                                            memcpy(var0, (const double[]){0.47393364928909953, 0.5260663507109005}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.6767895878524945, 0.3232104121475054}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.37462235649546827, 0.6253776435045317}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[21] <= -323357312.0) {
                                        memcpy(var0, (const double[]){0.19759036144578312, 0.8024096385542169}, 2 * sizeof(double));
                                    } else {
                                        if (input[12] <= 3.0) {
                                            memcpy(var0, (const double[]){0.08410587128845895, 0.9158941287115411}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
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
                                            if (input[6] <= 0.5) {
                                                if (input[21] <= 837.0) {
                                                    memcpy(var0, (const double[]){0.00558659217877095, 0.994413407821229}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.2803030303030303, 0.7196969696969697}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[12] <= 3.0) {
                                                    if (input[5] <= 1176.0) {
                                                        if (input[11] <= 9.5) {
                                                            if (input[21] <= -996274816.0) {
                                                                memcpy(var0, (const double[]){0.6153846153846154, 0.38461538461538464}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[20] <= 34.5) {
                                                                    memcpy(var0, (const double[]){0.2747047855811063, 0.7252952144188938}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[22] <= 87.5) {
                                                                        if (input[13] <= 28.0) {
                                                                            if (input[15] <= 28.0) {
                                                                                memcpy(var0, (const double[]){0.4430769230769231, 0.556923076923077}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.19047619047619047, 0.8095238095238095}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.22941176470588234, 0.7705882352941177}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.8275862068965517, 0.1724137931034483}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[6] <= 1.5) {
                                                                if (input[4] <= 1416.0) {
                                                                    memcpy(var0, (const double[]){0.46833013435700577, 0.5316698656429942}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.2112676056338028, 0.7887323943661971}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[22] <= 40.0) {
                                                                    if (input[21] <= 5045.0) {
                                                                        memcpy(var0, (const double[]){0.38676844783715014, 0.6132315521628499}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.5617977528089888, 0.43820224719101125}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.8709677419354839, 0.12903225806451613}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.64, 0.36}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[12] <= 8.0) {
                                                        memcpy(var0, (const double[]){0.8734693877551021, 0.12653061224489795}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.19638242894056848, 0.8036175710594315}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[6] <= 0.5) {
                                                memcpy(var0, (const double[]){0.02403204272363151, 0.9759679572763685}, 2 * sizeof(double));
                                            } else {
                                                if (input[16] <= -28.0) {
                                                    if (input[11] <= 11.5) {
                                                        memcpy(var0, (const double[]){0.06289308176100629, 0.9371069182389937}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.2543859649122807, 0.7456140350877193}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[13] <= -764.0) {
                                                        memcpy(var0, (const double[]){0.22797927461139897, 0.772020725388601}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[4] <= 924.0) {
                                                            if (input[11] <= 11.5) {
                                                                memcpy(var0, (const double[]){0.04918032786885246, 0.9508196721311475}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[11] <= 33.0) {
                                                                    memcpy(var0, (const double[]){0.21904761904761905, 0.780952380952381}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.9090909090909091, 0.09090909090909091}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.04977079240340537, 0.9502292075965947}, 2 * sizeof(double));
                                                        }
                                                    }
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
                                                    if (input[6] <= 0.5) {
                                                        if (input[21] <= 719.5) {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.43312101910828027, 0.5668789808917197}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[11] <= 11.5) {
                                                            if (input[12] <= 8.0) {
                                                                if (input[12] <= 3.0) {
                                                                    if (input[21] <= -621071744.0) {
                                                                        memcpy(var0, (const double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[5] <= 1008.0) {
                                                                            if (input[21] <= 18312.0) {
                                                                                if (input[13] <= 1528.0) {
                                                                                    if (input[16] <= 28.0) {
                                                                                        if (input[14] <= 136.0) {
                                                                                            memcpy(var0, (const double[]){0.3480825958702065, 0.6519174041297935}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.12280701754385964, 0.8771929824561403}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.22585924713584288, 0.7741407528641571}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.6382978723404256, 0.3617021276595745}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.44623655913978494, 0.553763440860215}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.5087108013937283, 0.4912891986062718}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.7911392405063291, 0.2088607594936709}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.17233560090702948, 0.8276643990929705}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[21] <= 2038.5) {
                                                                if (input[16] <= -520.0) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[20] <= 32.0) {
                                                                        memcpy(var0, (const double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.54421768707483, 0.4557823129251701}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[16] <= -20.0) {
                                                                    memcpy(var0, (const double[]){0.7403846153846154, 0.25961538461538464}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[0] <= 24.5) {
                                                                        memcpy(var0, (const double[]){0.4039408866995074, 0.5960591133004927}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.6075471698113207, 0.39245283018867927}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[21] <= 3289.5) {
                                                        if (input[21] <= -323357312.0) {
                                                            memcpy(var0, (const double[]){0.24701195219123506, 0.7529880478087649}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.06632939853850478, 0.9336706014614953}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[11] <= 13.5) {
                                                            memcpy(var0, (const double[]){0.03587443946188341, 0.9641255605381166}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[0] <= 34.5) {
                                                                memcpy(var0, (const double[]){0.20923656927426956, 0.7907634307257304}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.4083044982698962, 0.5916955017301038}, 2 * sizeof(double));
                                                            }
                                                        }
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
                                                    if (input[19] <= 6.5) {
                                                        if (input[11] <= 14.5) {
                                                            if (input[21] <= 773.0) {
                                                                if (input[6] <= 0.5) {
                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[20] <= 27.0) {
                                                                        memcpy(var0, (const double[]){0.294478527607362, 0.7055214723926381}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[21] <= -1352883072.0) {
                                                                            memcpy(var0, (const double[]){0.2647058823529412, 0.7352941176470589}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.5902335456475584, 0.40976645435244163}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[11] <= 13.5) {
                                                                    if (input[12] <= 8.0) {
                                                                        if (input[12] <= 3.0) {
                                                                            if (input[7] <= -664.0) {
                                                                                memcpy(var0, (const double[]){0.581151832460733, 0.418848167539267}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[6] <= 0.5) {
                                                                                    memcpy(var0, (const double[]){0.5515587529976019, 0.44844124700239807}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[15] <= 1108.0) {
                                                                                        if (input[13] <= 472.0) {
                                                                                            if (input[4] <= 2808.0) {
                                                                                                if (input[5] <= 1432.0) {
                                                                                                    memcpy(var0, (const double[]){0.3628048780487805, 0.6371951219512195}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.7619047619047619, 0.23809523809523808}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.13333333333333333, 0.8666666666666667}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.15384615384615385, 0.8461538461538461}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.7307692307692307, 0.2692307692307692}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.8, 0.2}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.26666666666666666, 0.7333333333333333}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[21] <= 2522.0) {
                                                                        memcpy(var0, (const double[]){0.3010752688172043, 0.6989247311827957}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[14] <= 92.0) {
                                                                            if (input[21] <= 1290542464.0) {
                                                                                memcpy(var0, (const double[]){0.7355021216407355, 0.26449787835926447}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.2222222222222222, 0.7777777777777778}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.4533333333333333, 0.5466666666666666}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[21] <= 4493.0) {
                                                                if (input[6] <= 0.5) {
                                                                    memcpy(var0, (const double[]){0.019880715705765408, 0.9801192842942346}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[20] <= 30.5) {
                                                                        memcpy(var0, (const double[]){0.09821428571428571, 0.9017857142857143}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.2471264367816092, 0.7528735632183908}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[11] <= 16.5) {
                                                                    if (input[15] <= -2496.0) {
                                                                        memcpy(var0, (const double[]){0.5384615384615384, 0.46153846153846156}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.18652849740932642, 0.8134715025906736}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[0] <= 24.5) {
                                                                        memcpy(var0, (const double[]){0.20652173913043478, 0.7934782608695652}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.4153846153846154, 0.5846153846153846}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[6] <= 2.5) {
                                                        if (input[20] <= 28.5) {
                                                            if (input[4] <= 1912.0) {
                                                                if (input[17] <= 24.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[17] <= 25.5) {
                                                                        if (input[19] <= 6.5) {
                                                                            if (input[11] <= 17.5) {
                                                                                if (input[21] <= 655.0) {
                                                                                    memcpy(var0, (const double[]){0.1917808219178082, 0.8082191780821918}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.44368600682593856, 0.5563139931740614}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.12681159420289856, 0.8731884057971014}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[17] <= 26.5) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[17] <= 27.5) {
                                                                                if (input[21] <= 417.5) {
                                                                                    memcpy(var0, (const double[]){0.12037037037037036, 0.8796296296296297}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[11] <= 18.5) {
                                                                                        if (input[21] <= 1625.0) {
                                                                                            memcpy(var0, (const double[]){0.7387387387387387, 0.26126126126126126}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.46551724137931033, 0.5344827586206896}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.18796992481203006, 0.8120300751879699}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[16] <= 1510.0) {
                                                                                    if (input[8] <= 62.0) {
                                                                                        if (input[17] <= 28.5) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[17] <= 29.5) {
                                                                                                if (input[19] <= 6.5) {
                                                                                                    if (input[21] <= 525.0) {
                                                                                                        memcpy(var0, (const double[]){0.18947368421052632, 0.8105263157894737}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.39903846153846156, 0.6009615384615384}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[17] <= 30.5) {
                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[17] <= 31.5) {
                                                                                                        if (input[11] <= 22.5) {
                                                                                                            memcpy(var0, (const double[]){0.5292479108635098, 0.47075208913649025}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.23469387755102042, 0.7653061224489796}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[17] <= 32.5) {
                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[17] <= 33.5) {
                                                                                                                memcpy(var0, (const double[]){0.3879310344827586, 0.6120689655172413}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[22] <= -171.5) {
                                                                                                                    if (input[5] <= 328.0) {
                                                                                                                        memcpy(var0, (const double[]){0.986627043090639, 0.01337295690936107}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.7876447876447876, 0.21235521235521235}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[17] <= 34.5) {
                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[4] <= 92.0) {
                                                                                                                            memcpy(var0, (const double[]){0.9277899343544858, 0.07221006564551423}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[17] <= 35.5) {
                                                                                                                                memcpy(var0, (const double[]){0.3582089552238806, 0.6417910447761194}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[17] <= 36.5) {
                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[17] <= 37.5) {
                                                                                                                                        memcpy(var0, (const double[]){0.2984126984126984, 0.7015873015873015}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        if (input[17] <= 38.5) {
                                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            if (input[17] <= 39.5) {
                                                                                                                                                memcpy(var0, (const double[]){0.34782608695652173, 0.6521739130434783}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                if (input[17] <= 40.5) {
                                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    if (input[17] <= 41.5) {
                                                                                                                                                        memcpy(var0, (const double[]){0.31213872832369943, 0.6878612716763006}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        if (input[17] <= 42.5) {
                                                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            if (input[17] <= 43.5) {
                                                                                                                                                                memcpy(var0, (const double[]){0.34532374100719426, 0.6546762589928058}, 2 * sizeof(double));
                                                                                                                                                            } else {
                                                                                                                                                                if (input[17] <= 44.5) {
                                                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                } else {
                                                                                                                                                                    if (input[17] <= 45.5) {
                                                                                                                                                                        memcpy(var0, (const double[]){0.24719101123595505, 0.7528089887640449}, 2 * sizeof(double));
                                                                                                                                                                    } else {
                                                                                                                                                                        if (input[17] <= 46.5) {
                                                                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                        } else {
                                                                                                                                                                            memcpy(var0, (const double[]){0.5375, 0.4625}, 2 * sizeof(double));
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
                                                                                        if (input[16] <= 14.0) {
                                                                                            if (input[4] <= 156.0) {
                                                                                                if (input[20] <= 24.5) {
                                                                                                    memcpy(var0, (const double[]){0.7962085308056872, 0.2037914691943128}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.25, 0.75}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[16] <= -2.0) {
                                                                                                    if (input[20] <= 24.5) {
                                                                                                        if (input[4] <= 676.0) {
                                                                                                            memcpy(var0, (const double[]){0.48068669527896996, 0.51931330472103}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[5] <= 1120.0) {
                                                                                                                if (input[21] <= 1186405760.0) {
                                                                                                                    if (input[16] <= -68.0) {
                                                                                                                        memcpy(var0, (const double[]){0.888, 0.112}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.7074235807860262, 0.2925764192139738}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.38596491228070173, 0.6140350877192983}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.3169811320754717, 0.6830188679245283}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[6] <= 0.5) {
                                                                                                        if (input[5] <= 376.0) {
                                                                                                            memcpy(var0, (const double[]){0.7562642369020501, 0.2437357630979499}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.30933333333333335, 0.6906666666666667}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[15] <= -8.0) {
                                                                                                            memcpy(var0, (const double[]){0.7657142857142857, 0.2342857142857143}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[17] <= 28.5) {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[7] <= -6232.0) {
                                                                                                                    memcpy(var0, (const double[]){0.55, 0.45}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[4] <= 248.0) {
                                                                                                                        memcpy(var0, (const double[]){0.4918032786885246, 0.5081967213114754}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[3] <= 1.5) {
                                                                                                                            memcpy(var0, (const double[]){0.2878787878787879, 0.7121212121212122}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[21] <= 5113.0) {
                                                                                                                                memcpy(var0, (const double[]){0.03156708004509583, 0.9684329199549042}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.16091954022988506, 0.8390804597701149}, 2 * sizeof(double));
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
                                                                                            if (input[20] <= 24.5) {
                                                                                                if (input[11] <= 17.0) {
                                                                                                    memcpy(var0, (const double[]){0.5079365079365079, 0.49206349206349204}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.8274173806609547, 0.17258261933904528}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.5943152454780362, 0.40568475452196384}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[11] <= 15.5) {
                                                                                        memcpy(var0, (const double[]){0.25, 0.75}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.9635499207606973, 0.03645007923930269}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[14] <= 22.0) {
                                                                    if (input[16] <= 6.0) {
                                                                        if (input[17] <= 24.5) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[17] <= 25.5) {
                                                                                memcpy(var0, (const double[]){0.26548672566371684, 0.7345132743362832}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[6] <= 1.5) {
                                                                                    if (input[11] <= 17.0) {
                                                                                        memcpy(var0, (const double[]){0.2975206611570248, 0.7024793388429752}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[8] <= 22.0) {
                                                                                            if (input[17] <= 26.5) {
                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[17] <= 27.5) {
                                                                                                    memcpy(var0, (const double[]){0.2711864406779661, 0.7288135593220338}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[17] <= 28.5) {
                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[17] <= 29.5) {
                                                                                                            memcpy(var0, (const double[]){0.2727272727272727, 0.7272727272727273}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[17] <= 30.5) {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[17] <= 31.5) {
                                                                                                                    memcpy(var0, (const double[]){0.2545454545454545, 0.7454545454545455}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.7673179396092362, 0.23268206039076378}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.24390243902439024, 0.7560975609756098}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.8729508196721312, 0.12704918032786885}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[4] <= 3748.0) {
                                                                            if (input[15] <= -584.0) {
                                                                                memcpy(var0, (const double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[15] <= -284.0) {
                                                                                    memcpy(var0, (const double[]){0.10256410256410256, 0.8974358974358975}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.4011627906976744, 0.5988372093023255}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.7586206896551724, 0.2413793103448276}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[15] <= -538.0) {
                                                                        if (input[11] <= 13.0) {
                                                                            memcpy(var0, (const double[]){0.23333333333333334, 0.7666666666666667}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[15] <= -1068.0) {
                                                                                memcpy(var0, (const double[]){0.4485981308411215, 0.5514018691588785}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.708994708994709, 0.291005291005291}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[16] <= -44.0) {
                                                                            memcpy(var0, (const double[]){0.4305555555555556, 0.5694444444444444}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[5] <= 1304.0) {
                                                                                if (input[17] <= 24.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[21] <= -542371200.0) {
                                                                                        memcpy(var0, (const double[]){0.7058823529411765, 0.29411764705882354}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[8] <= -1854.0) {
                                                                                            memcpy(var0, (const double[]){0.8888888888888888, 0.1111111111111111}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.06239870340356564, 0.9376012965964343}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.6190476190476191, 0.38095238095238093}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[17] <= 24.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[17] <= 25.5) {
                                                                    if (input[19] <= 6.5) {
                                                                        if (input[11] <= 16.5) {
                                                                            if (input[11] <= 14.5) {
                                                                                if (input[21] <= 1425.0) {
                                                                                    memcpy(var0, (const double[]){0.25316455696202533, 0.7468354430379747}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[6] <= 0.5) {
                                                                                        memcpy(var0, (const double[]){0.6363636363636364, 0.36363636363636365}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[7] <= -504.0) {
                                                                                            memcpy(var0, (const double[]){0.5543478260869565, 0.44565217391304346}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[12] <= 10.0) {
                                                                                                if (input[15] <= -40.0) {
                                                                                                    memcpy(var0, (const double[]){0.248, 0.752}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.4273972602739726, 0.5726027397260274}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.11538461538461539, 0.8846153846153846}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[6] <= 0.5) {
                                                                                    memcpy(var0, (const double[]){0.15584415584415584, 0.8441558441558441}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[21] <= 1290542464.0) {
                                                                                        memcpy(var0, (const double[]){0.7085852478839177, 0.2914147521160822}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[6] <= 0.5) {
                                                                                memcpy(var0, (const double[]){0.048, 0.952}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[0] <= 29.5) {
                                                                                    if (input[15] <= -2408.0) {
                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[11] <= 21.5) {
                                                                                            memcpy(var0, (const double[]){0.135, 0.865}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.366412213740458, 0.6335877862595419}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.3915900131406045, 0.6084099868593955}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[17] <= 26.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[17] <= 27.5) {
                                                                            if (input[11] <= 18.5) {
                                                                                if (input[6] <= 0.5) {
                                                                                    if (input[21] <= 879.0) {
                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.6334310850439883, 0.36656891495601174}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[11] <= 17.5) {
                                                                                        if (input[19] <= 6.5) {
                                                                                            if (input[22] <= -54.5) {
                                                                                                memcpy(var0, (const double[]){0.6774193548387096, 0.3225806451612903}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[5] <= 1480.0) {
                                                                                                    memcpy(var0, (const double[]){0.40621531631520535, 0.5937846836847946}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.75, 0.25}, 2 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[21] <= 928554112.0) {
                                                                                            if (input[21] <= 3918.5) {
                                                                                                memcpy(var0, (const double[]){0.711864406779661, 0.288135593220339}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.8822055137844611, 0.11779448621553884}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.3448275862068966, 0.6551724137931034}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[6] <= 0.5) {
                                                                                    memcpy(var0, (const double[]){0.02727272727272727, 0.9727272727272728}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[11] <= 20.5) {
                                                                                        if (input[19] <= 6.5) {
                                                                                            if (input[5] <= 1432.0) {
                                                                                                memcpy(var0, (const double[]){0.19256756756756757, 0.8074324324324325}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[5] <= 304.0) {
                                                                                            memcpy(var0, (const double[]){0.7368421052631579, 0.2631578947368421}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[16] <= 8.0) {
                                                                                                memcpy(var0, (const double[]){0.509090909090909, 0.4909090909090909}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.27692307692307694, 0.7230769230769231}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[17] <= 28.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[17] <= 29.5) {
                                                                                    if (input[11] <= 20.5) {
                                                                                        if (input[6] <= 0.5) {
                                                                                            if (input[21] <= 1324.0) {
                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.631578947368421, 0.3684210526315789}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[11] <= 17.5) {
                                                                                                if (input[19] <= 6.5) {
                                                                                                    if (input[12] <= 10.0) {
                                                                                                        if (input[5] <= 1360.0) {
                                                                                                            memcpy(var0, (const double[]){0.47104247104247104, 0.528957528957529}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.8076923076923077, 0.19230769230769232}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.17647058823529413, 0.8235294117647058}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[21] <= 3087.5) {
                                                                                                    memcpy(var0, (const double[]){0.6547314578005116, 0.3452685421994885}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[21] <= 36815.5) {
                                                                                                        memcpy(var0, (const double[]){0.8738317757009346, 0.1261682242990654}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.6627906976744186, 0.3372093023255814}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (input[6] <= 0.5) {
                                                                                            memcpy(var0, (const double[]){0.021621621621621623, 0.9783783783783784}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[19] <= 6.5) {
                                                                                                if (input[11] <= 22.5) {
                                                                                                    if (input[20] <= 30.5) {
                                                                                                        memcpy(var0, (const double[]){0.15849056603773584, 0.8415094339622642}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.3342036553524804, 0.6657963446475196}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.45098039215686275, 0.5490196078431373}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[17] <= 30.5) {
                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[17] <= 31.5) {
                                                                                            if (input[11] <= 22.5) {
                                                                                                if (input[6] <= 0.5) {
                                                                                                    memcpy(var0, (const double[]){0.31295843520782396, 0.687041564792176}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[11] <= 19.5) {
                                                                                                        if (input[19] <= 6.5) {
                                                                                                            if (input[5] <= 1392.0) {
                                                                                                                memcpy(var0, (const double[]){0.42003853564547206, 0.5799614643545279}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.8571428571428571, 0.14285714285714285}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[6] <= 1.5) {
                                                                                                            memcpy(var0, (const double[]){0.673469387755102, 0.32653061224489793}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.8641425389755011, 0.1358574610244989}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                if (input[6] <= 0.5) {
                                                                                                    memcpy(var0, (const double[]){0.023668639053254437, 0.9763313609467456}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[19] <= 6.5) {
                                                                                                        if (input[16] <= -328.0) {
                                                                                                            memcpy(var0, (const double[]){0.6582278481012658, 0.34177215189873417}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[11] <= 25.0) {
                                                                                                                memcpy(var0, (const double[]){0.245136186770428, 0.754863813229572}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.41825095057034223, 0.5817490494296578}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
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
                                                                                                            memcpy(var0, (const double[]){0.2973621103117506, 0.7026378896882494}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[11] <= 21.5) {
                                                                                                                if (input[13] <= 8.0) {
                                                                                                                    memcpy(var0, (const double[]){0.5679012345679012, 0.43209876543209874}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.34517766497461927, 0.6548223350253807}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[14] <= 920.0) {
                                                                                                                    memcpy(var0, (const double[]){0.8375558867362146, 0.16244411326378538}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.59375, 0.40625}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[6] <= 0.5) {
                                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[19] <= 6.5) {
                                                                                                                if (input[11] <= 26.5) {
                                                                                                                    if (input[22] <= -20.0) {
                                                                                                                        memcpy(var0, (const double[]){0.36036036036036034, 0.6396396396396397}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.14107883817427386, 0.8589211618257261}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.46545454545454545, 0.5345454545454545}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[17] <= 34.5) {
                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[17] <= 35.5) {
                                                                                                            if (input[11] <= 26.5) {
                                                                                                                if (input[6] <= 0.5) {
                                                                                                                    memcpy(var0, (const double[]){0.32098765432098764, 0.6790123456790124}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[11] <= 21.5) {
                                                                                                                        memcpy(var0, (const double[]){0.5185185185185185, 0.48148148148148145}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.8235294117647058, 0.17647058823529413}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[6] <= 0.5) {
                                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[19] <= 6.5) {
                                                                                                                        if (input[16] <= 504.0) {
                                                                                                                            if (input[16] <= -168.0) {
                                                                                                                                memcpy(var0, (const double[]){0.4835164835164835, 0.5164835164835165}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.2134251290877797, 0.7865748709122203}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.6530612244897959, 0.3469387755102041}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
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
                                                                                                                            memcpy(var0, (const double[]){0.21176470588235294, 0.788235294117647}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[11] <= 27.5) {
                                                                                                                                if (input[5] <= 1200.0) {
                                                                                                                                    memcpy(var0, (const double[]){0.5758157389635317, 0.42418426103646834}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var0, (const double[]){0.8275862068965517, 0.1724137931034483}, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.8501118568232662, 0.14988814317673377}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        if (input[19] <= 6.5) {
                                                                                                                            if (input[15] <= -1416.0) {
                                                                                                                                memcpy(var0, (const double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.14306569343065692, 0.8569343065693431}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[17] <= 38.5) {
                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[17] <= 39.5) {
                                                                                                                            if (input[11] <= 31.5) {
                                                                                                                                if (input[6] <= 0.5) {
                                                                                                                                    memcpy(var0, (const double[]){0.1722488038277512, 0.8277511961722488}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[11] <= 27.5) {
                                                                                                                                        memcpy(var0, (const double[]){0.5151515151515151, 0.48484848484848486}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){0.8329809725158562, 0.16701902748414377}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                if (input[19] <= 6.5) {
                                                                                                                                    if (input[15] <= 1032.0) {
                                                                                                                                        memcpy(var0, (const double[]){0.14487632508833923, 0.8551236749116607}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){0.7058823529411765, 0.29411764705882354}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            if (input[17] <= 40.5) {
                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[17] <= 41.5) {
                                                                                                                                    if (input[6] <= 0.5) {
                                                                                                                                        memcpy(var0, (const double[]){0.09912536443148688, 0.9008746355685131}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        if (input[11] <= 33.0) {
                                                                                                                                            if (input[11] <= 31.5) {
                                                                                                                                                memcpy(var0, (const double[]){0.584070796460177, 0.415929203539823}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                memcpy(var0, (const double[]){0.8807947019867549, 0.11920529801324503}, 2 * sizeof(double));
                                                                                                                                            }
                                                                                                                                        } else {
                                                                                                                                            memcpy(var0, (const double[]){0.28368794326241137, 0.7163120567375887}, 2 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    if (input[17] <= 42.5) {
                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        if (input[17] <= 43.5) {
                                                                                                                                            if (input[6] <= 0.5) {
                                                                                                                                                memcpy(var0, (const double[]){0.03636363636363636, 0.9636363636363636}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                if (input[11] <= 35.5) {
                                                                                                                                                    if (input[16] <= 8.0) {
                                                                                                                                                        memcpy(var0, (const double[]){0.8795518207282913, 0.12044817927170869}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        memcpy(var0, (const double[]){0.5694444444444444, 0.4305555555555556}, 2 * sizeof(double));
                                                                                                                                                    }
                                                                                                                                                } else {
                                                                                                                                                    memcpy(var0, (const double[]){0.23728813559322035, 0.7627118644067796}, 2 * sizeof(double));
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        } else {
                                                                                                                                            if (input[17] <= 44.5) {
                                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                if (input[17] <= 45.5) {
                                                                                                                                                    if (input[6] <= 0.5) {
                                                                                                                                                        memcpy(var0, (const double[]){0.08461538461538462, 0.9153846153846154}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        memcpy(var0, (const double[]){0.5707196029776674, 0.4292803970223325}, 2 * sizeof(double));
                                                                                                                                                    }
                                                                                                                                                } else {
                                                                                                                                                    if (input[17] <= 46.5) {
                                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        if (input[17] <= 47.5) {
                                                                                                                                                            if (input[6] <= 0.5) {
                                                                                                                                                                memcpy(var0, (const double[]){0.08178438661710037, 0.9182156133828996}, 2 * sizeof(double));
                                                                                                                                                            } else {
                                                                                                                                                                memcpy(var0, (const double[]){0.5614035087719298, 0.43859649122807015}, 2 * sizeof(double));
                                                                                                                                                            }
                                                                                                                                                        } else {
                                                                                                                                                            if (input[17] <= 48.5) {
                                                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                            } else {
                                                                                                                                                                if (input[17] <= 49.5) {
                                                                                                                                                                    memcpy(var0, (const double[]){0.35802469135802467, 0.6419753086419753}, 2 * sizeof(double));
                                                                                                                                                                } else {
                                                                                                                                                                    if (input[17] <= 50.5) {
                                                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                    } else {
                                                                                                                                                                        if (input[17] <= 51.5) {
                                                                                                                                                                            memcpy(var0, (const double[]){0.4383561643835616, 0.5616438356164384}, 2 * sizeof(double));
                                                                                                                                                                        } else {
                                                                                                                                                                            if (input[17] <= 52.5) {
                                                                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                            } else {
                                                                                                                                                                                if (input[17] <= 53.5) {
                                                                                                                                                                                    memcpy(var0, (const double[]){0.33557046979865773, 0.6644295302013423}, 2 * sizeof(double));
                                                                                                                                                                                } else {
                                                                                                                                                                                    if (input[17] <= 54.5) {
                                                                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                                    } else {
                                                                                                                                                                                        if (input[17] <= 55.5) {
                                                                                                                                                                                            memcpy(var0, (const double[]){0.3382352941176471, 0.6617647058823529}, 2 * sizeof(double));
                                                                                                                                                                                        } else {
                                                                                                                                                                                            if (input[17] <= 56.5) {
                                                                                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                                            } else {
                                                                                                                                                                                                if (input[8] <= 1888.0) {
                                                                                                                                                                                                    if (input[21] <= 10959.0) {
                                                                                                                                                                                                        memcpy(var0, (const double[]){0.6554621848739496, 0.3445378151260504}, 2 * sizeof(double));
                                                                                                                                                                                                    } else {
                                                                                                                                                                                                        memcpy(var0, (const double[]){0.9358974358974359, 0.0641025641025641}, 2 * sizeof(double));
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
                                                        if (input[11] <= 21.5) {
                                                            if (input[17] <= 24.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[17] <= 25.5) {
                                                                    if (input[11] <= 16.5) {
                                                                        if (input[11] <= 13.5) {
                                                                            if (input[20] <= 30.5) {
                                                                                memcpy(var0, (const double[]){0.5016722408026756, 0.4983277591973244}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.30414746543778803, 0.695852534562212}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[21] <= 9040.0) {
                                                                                memcpy(var0, (const double[]){0.5670731707317073, 0.4329268292682927}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.7918781725888325, 0.20812182741116753}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.35684647302904565, 0.6431535269709544}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[17] <= 26.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[17] <= 27.5) {
                                                                            if (input[11] <= 18.5) {
                                                                                if (input[11] <= 15.5) {
                                                                                    memcpy(var0, (const double[]){0.45454545454545453, 0.5454545454545454}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[21] <= 2289.5) {
                                                                                        memcpy(var0, (const double[]){0.28, 0.72}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.7759815242494227, 0.22401847575057737}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.25, 0.75}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[17] <= 28.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[20] <= 24.5) {
                                                                                    if (input[21] <= 788.5) {
                                                                                        memcpy(var0, (const double[]){0.3, 0.7}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.9205426356589147, 0.07945736434108527}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[23] <= -32.5) {
                                                                                        memcpy(var0, (const double[]){0.5129411764705882, 0.48705882352941177}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[17] <= 29.5) {
                                                                                            if (input[21] <= 11980.5) {
                                                                                                memcpy(var0, (const double[]){0.49206349206349204, 0.5079365079365079}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.7789473684210526, 0.22105263157894736}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[17] <= 30.5) {
                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[17] <= 31.5) {
                                                                                                    memcpy(var0, (const double[]){0.5093167701863354, 0.4906832298136646}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[17] <= 32.5) {
                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[17] <= 33.5) {
                                                                                                            memcpy(var0, (const double[]){0.5673076923076923, 0.4326923076923077}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[17] <= 34.5) {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[17] <= 35.5) {
                                                                                                                    memcpy(var0, (const double[]){0.4186046511627907, 0.5813953488372093}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[17] <= 36.5) {
                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[17] <= 37.5) {
                                                                                                                            memcpy(var0, (const double[]){0.48214285714285715, 0.5178571428571429}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.7741935483870968, 0.22580645161290322}, 2 * sizeof(double));
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
                                                            if (input[21] <= 1018.5) {
                                                                memcpy(var0, (const double[]){0.2247191011235955, 0.7752808988764045}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[20] <= 36.5) {
                                                                    if (input[4] <= 3404.0) {
                                                                        if (input[17] <= 31.5) {
                                                                            if (input[21] <= 3029.0) {
                                                                                memcpy(var0, (const double[]){0.6595744680851063, 0.3404255319148936}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[17] <= 30.5) {
                                                                                    if (input[17] <= 29.5) {
                                                                                        if (input[17] <= 28.5) {
                                                                                            memcpy(var0, (const double[]){0.9009247027741083, 0.09907529722589167}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.4927536231884058, 0.5072463768115942}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.734006734006734, 0.265993265993266}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[17] <= 58.5) {
                                                                                if (input[21] <= 2638.5) {
                                                                                    memcpy(var0, (const double[]){0.832579185520362, 0.167420814479638}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[15] <= -4.0) {
                                                                                        memcpy(var0, (const double[]){0.9215260545905707, 0.07847394540942929}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.967741935483871, 0.03225806451612903}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.6596858638743456, 0.3403141361256545}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[7] <= 4160.0) {
                                                                            if (input[14] <= 1572.0) {
                                                                                memcpy(var0, (const double[]){0.7462039045553145, 0.25379609544468545}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.2608695652173913, 0.7391304347826086}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.2, 0.8}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[0] <= 34.5) {
                                                                        memcpy(var0, (const double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[20] <= 41.5) {
                                                                            if (input[8] <= -528.0) {
                                                                                memcpy(var0, (const double[]){0.6792452830188679, 0.32075471698113206}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.8492922564529559, 0.15070774354704414}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.47619047619047616, 0.5238095238095238}, 2 * sizeof(double));
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
                            if (input[17] <= 19.5) {
                                memcpy(var0, (const double[]){0.1385390428211587, 0.8614609571788413}, 2 * sizeof(double));
                            } else {
                                if (input[11] <= 10.0) {
                                    if (input[20] <= 30.5) {
                                        if (input[17] <= 20.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 21.5) {
                                                memcpy(var0, (const double[]){0.48214285714285715, 0.5178571428571429}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.7832167832167832, 0.21678321678321677}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.4177545691906005, 0.5822454308093995}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[20] <= 28.5) {
                                        if (input[16] <= -34.0) {
                                            memcpy(var0, (const double[]){0.25249169435215946, 0.7475083056478405}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 23.5) {
                                                memcpy(var0, (const double[]){0.3082706766917293, 0.6917293233082706}, 2 * sizeof(double));
                                            } else {
                                                if (input[11] <= 12.0) {
                                                    memcpy(var0, (const double[]){0.7188612099644128, 0.28113879003558717}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 45.5) {
                                                        if (input[11] <= 16.0) {
                                                            memcpy(var0, (const double[]){0.46153846153846156, 0.5384615384615384}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.2644628099173554, 0.7355371900826446}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6607142857142857, 0.3392857142857143}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[17] <= 51.5) {
                                            if (input[22] <= 31.5) {
                                                if (input[17] <= 37.5) {
                                                    if (input[8] <= -42.0) {
                                                        memcpy(var0, (const double[]){0.11377245508982035, 0.8862275449101796}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 20.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 23.5) {
                                                                memcpy(var0, (const double[]){0.1766109785202864, 0.8233890214797136}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[17] <= 24.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[11] <= 16.0) {
                                                                        if (input[17] <= 33.5) {
                                                                            if (input[8] <= 6.0) {
                                                                                memcpy(var0, (const double[]){0.367816091954023, 0.632183908045977}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.21890547263681592, 0.7810945273631841}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.17894736842105263, 0.8210526315789474}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[17] <= 38.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[11] <= 16.0) {
                                                            memcpy(var0, (const double[]){0.6021505376344086, 0.3978494623655914}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.29069767441860467, 0.7093023255813954}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.15280135823429541, 0.8471986417657046}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[11] <= 32.0) {
                                                memcpy(var0, (const double[]){0.5774278215223098, 0.4225721784776903}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.2727272727272727, 0.7272727272727273}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[17] <= 19.5) {
                            if (input[21] <= 1812.5) {
                                if (input[20] <= 33.0) {
                                    memcpy(var0, (const double[]){0.365296803652968, 0.634703196347032}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.7870370370370371, 0.21296296296296297}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[17] <= 16.5) {
                                    memcpy(var0, (const double[]){0.5445544554455446, 0.45544554455445546}, 2 * sizeof(double));
                                } else {
                                    if (input[17] <= 17.5) {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[17] <= 18.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[22] <= -1.5) {
                                                memcpy(var0, (const double[]){0.06928406466512702, 0.930715935334873}, 2 * sizeof(double));
                                            } else {
                                                if (input[11] <= 10.0) {
                                                    if (input[22] <= 54.0) {
                                                        if (input[7] <= -328.0) {
                                                            memcpy(var0, (const double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.22955145118733508, 0.7704485488126649}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8095238095238095, 0.19047619047619047}, 2 * sizeof(double));
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
                            if (input[13] <= 24.0) {
                                if (input[17] <= 20.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[12] <= 10.0) {
                                        if (input[17] <= 21.5) {
                                            if (input[11] <= 12.0) {
                                                if (input[12] <= 3.0) {
                                                    memcpy(var0, (const double[]){0.42032332563510394, 0.5796766743648961}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.6854460093896714, 0.3145539906103286}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[17] <= 22.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 23.5) {
                                                    if (input[12] <= 3.0) {
                                                        memcpy(var0, (const double[]){0.34328358208955223, 0.6567164179104478}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.7131782945736435, 0.2868217054263566}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[17] <= 24.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 25.5) {
                                                            memcpy(var0, (const double[]){0.4256410256410256, 0.5743589743589743}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 26.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[17] <= 27.5) {
                                                                    memcpy(var0, (const double[]){0.43373493975903615, 0.5662650602409639}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[17] <= 28.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[6] <= 1.5) {
                                                                            if (input[17] <= 31.5) {
                                                                                if (input[17] <= 30.5) {
                                                                                    memcpy(var0, (const double[]){0.6086956521739131, 0.391304347826087}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.3900414937759336, 0.6099585062240664}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[17] <= 32.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[14] <= 104.0) {
                                                                                        if (input[13] <= -216.0) {
                                                                                            memcpy(var0, (const double[]){0.731995277449823, 0.2680047225501771}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.6197718631178707, 0.38022813688212925}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.5543478260869565, 0.44565217391304346}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.8497854077253219, 0.15021459227467812}, 2 * sizeof(double));
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
                                        if (input[21] <= 1468.5) {
                                            memcpy(var0, (const double[]){0.691358024691358, 0.30864197530864196}, 2 * sizeof(double));
                                        } else {
                                            if (input[13] <= -376.0) {
                                                memcpy(var0, (const double[]){0.5407407407407407, 0.45925925925925926}, 2 * sizeof(double));
                                            } else {
                                                if (input[10] <= -1840.0) {
                                                    memcpy(var0, (const double[]){0.7307692307692307, 0.2692307692307692}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.3080684596577017, 0.6919315403422983}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[17] <= 35.5) {
                                    if (input[17] <= 20.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[15] <= -8.0) {
                                            if (input[6] <= 1.5) {
                                                if (input[17] <= 27.5) {
                                                    if (input[11] <= 10.0) {
                                                        memcpy(var0, (const double[]){0.35714285714285715, 0.6428571428571429}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.16877637130801687, 0.8312236286919831}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.355, 0.645}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.5333333333333333, 0.4666666666666667}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.5915492957746479, 0.4084507042253521}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[0] <= 29.5) {
                                        memcpy(var0, (const double[]){0.4375, 0.5625}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.6577181208053692, 0.3422818791946309}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[17] <= 31.5) {
                        if (input[12] <= 30.0) {
                            memcpy(var0, (const double[]){0.13726437892701787, 0.8627356210729821}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){0.4727272727272727, 0.5272727272727272}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[20] <= 36.0) {
                            if (input[16] <= -20.0) {
                                memcpy(var0, (const double[]){0.34615384615384615, 0.6538461538461539}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.5830903790087464, 0.41690962099125367}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[22] <= 7.5) {
                                memcpy(var0, (const double[]){0.24070021881838075, 0.7592997811816192}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.08372093023255814, 0.9162790697674419}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            }
        }
    }
    memcpy(output, var0, 2 * sizeof(double));
}
