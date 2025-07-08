//RAMIRO - VTM 16.2 - Otimização Inter-Quadros - Implementação de DTs no TZS

#include "DT_TZS_16x64.h"

#include <string.h>
void DT_TZS_16x64::score(double * input, double * output) {
    double var0[2];
    if (input[19] <= 2.5) {
        if (input[17] <= 12.5) {
            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
        } else {
            if (input[17] <= 87.5) {
                if (input[6] <= 0.5) {
                    if (input[21] <= 4915.0) {
                        memcpy(var0, (const double[]){0.0061751909697856724, 0.9938248090302143}, 2 * sizeof(double));
                    } else {
                        if (input[20] <= 35.0) {
                            if (input[11] <= 8.0) {
                                if (input[17] <= 16.0) {
                                    memcpy(var0, (const double[]){0.014814814814814815, 0.9851851851851852}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.3356643356643357, 0.6643356643356644}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[14] <= -2.0) {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[14] <= 2.0) {
                                        memcpy(var0, (const double[]){0.9256938227394808, 0.07430617726051925}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[17] <= 30.0) {
                                memcpy(var0, (const double[]){0.014565826330532213, 0.9854341736694678}, 2 * sizeof(double));
                            } else {
                                if (input[13] <= -2.0) {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[13] <= 2.0) {
                                        memcpy(var0, (const double[]){0.8751486325802615, 0.1248513674197384}, 2 * sizeof(double));
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
                memcpy(var0, (const double[]){0.9745762711864406, 0.025423728813559324}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[11] <= 7.5) {
            if (input[17] <= 15.5) {
                if (input[11] <= 6.5) {
                    if (input[13] <= -6.0) {
                        if (input[17] <= 13.5) {
                            if (input[17] <= 12.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[17] <= 14.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[20] <= 32.0) {
                                    if (input[8] <= -348.0) {
                                        memcpy(var0, (const double[]){0.8581314878892734, 0.14186851211072665}, 2 * sizeof(double));
                                    } else {
                                        if (input[14] <= -338.0) {
                                            memcpy(var0, (const double[]){0.024242424242424242, 0.9757575757575757}, 2 * sizeof(double));
                                        } else {
                                            if (input[22] <= -63.5) {
                                                if (input[22] <= -266.5) {
                                                    memcpy(var0, (const double[]){0.6022155085599195, 0.39778449144008055}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.9607390300230947, 0.03926096997690531}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[22] <= -9.5) {
                                                    if (input[1] <= 2.5) {
                                                        memcpy(var0, (const double[]){0.18090452261306533, 0.8190954773869347}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[3] <= 2.5) {
                                                            memcpy(var0, (const double[]){0.5148514851485149, 0.48514851485148514}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.28817204301075267, 0.7118279569892473}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.24175824175824176, 0.7582417582417582}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[5] <= 992.0) {
                                        if (input[1] <= 2.5) {
                                            memcpy(var0, (const double[]){0.19607843137254902, 0.803921568627451}, 2 * sizeof(double));
                                        } else {
                                            if (input[21] <= 544497536.0) {
                                                if (input[14] <= -344.0) {
                                                    if (input[8] <= -344.0) {
                                                        memcpy(var0, (const double[]){0.7899159663865546, 0.21008403361344538}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.0375, 0.9625}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[7] <= -60.0) {
                                                        if (input[4] <= 540.0) {
                                                            if (input[14] <= 8.0) {
                                                                if (input[13] <= -184.0) {
                                                                    if (input[13] <= -200.0) {
                                                                        memcpy(var0, (const double[]){0.44285714285714284, 0.5571428571428572}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9037656903765691, 0.09623430962343096}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.3023255813953488, 0.6976744186046512}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.24, 0.76}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7455166524338173, 0.25448334756618274}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.2777777777777778, 0.7222222222222222}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.9463220675944334, 0.0536779324055666}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.9089347079037801, 0.09106529209621993}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[13] <= 2.0) {
                            if (input[14] <= -2.0) {
                                if (input[8] <= -2.0) {
                                    if (input[23] <= -6.5) {
                                        memcpy(var0, (const double[]){0.9457943925233645, 0.05420560747663551}, 2 * sizeof(double));
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
                                                    if (input[8] <= -28.0) {
                                                        memcpy(var0, (const double[]){0.7047619047619048, 0.29523809523809524}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.3291139240506329, 0.6708860759493671}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.1188118811881188, 0.8811881188118812}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[14] <= 2.0) {
                                    if (input[16] <= -2.0) {
                                        memcpy(var0, (const double[]){0.5379310344827586, 0.46206896551724136}, 2 * sizeof(double));
                                    } else {
                                        if (input[15] <= 2.0) {
                                            memcpy(var0, (const double[]){0.9985008495186061, 0.001499150481393877}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.5783132530120482, 0.42168674698795183}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[8] <= 2.0) {
                                        memcpy(var0, (const double[]){0.15659955257270694, 0.843400447427293}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.8856304985337243, 0.11436950146627566}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[7] <= 2.0) {
                                memcpy(var0, (const double[]){0.1735052754982415, 0.8264947245017585}, 2 * sizeof(double));
                            } else {
                                if (input[4] <= 1272.0) {
                                    if (input[17] <= 12.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[17] <= 13.5) {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 14.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[21] <= 1707.0) {
                                                    memcpy(var0, (const double[]){0.3890160183066362, 0.6109839816933639}, 2 * sizeof(double));
                                                } else {
                                                    if (input[22] <= 3.5) {
                                                        memcpy(var0, (const double[]){0.38461538461538464, 0.6153846153846154}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.852017937219731, 0.14798206278026907}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.8806473364801078, 0.11935266351989211}, 2 * sizeof(double));
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
                        if (input[6] <= 0.5) {
                            if (input[21] <= 2072.5) {
                                if (input[17] <= 31.5) {
                                    if (input[21] <= 1075.5) {
                                        memcpy(var0, (const double[]){0.004282655246252677, 0.9957173447537473}, 2 * sizeof(double));
                                    } else {
                                        if (input[18] <= 0.5) {
                                            memcpy(var0, (const double[]){0.43986254295532645, 0.5601374570446735}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.10843373493975904, 0.891566265060241}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.8535031847133758, 0.1464968152866242}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[17] <= 17.5) {
                                    if (input[12] <= 8.0) {
                                        if (input[21] <= 32421.0) {
                                            if (input[0] <= 24.5) {
                                                if (input[15] <= 2.0) {
                                                    memcpy(var0, (const double[]){0.6556603773584906, 0.3443396226415094}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.22429906542056074, 0.7757009345794392}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.3521594684385382, 0.6478405315614618}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.1590909090909091, 0.8409090909090909}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[12] <= 10.0) {
                                        if (input[18] <= 0.5) {
                                            memcpy(var0, (const double[]){0.9007741027445461, 0.0992258972554539}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 29.5) {
                                                if (input[17] <= 18.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[20] <= 30.5) {
                                                        memcpy(var0, (const double[]){0.7912772585669782, 0.2087227414330218}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.5411334552102377, 0.45886654478976235}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.9288389513108615, 0.07116104868913857}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[0] <= 34.5) {
                                            memcpy(var0, (const double[]){0.5442708333333334, 0.4557291666666667}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[12] <= 8.5) {
                                if (input[20] <= 27.0) {
                                    if (input[3] <= 1.5) {
                                        memcpy(var0, (const double[]){0.2823529411764706, 0.7176470588235294}, 2 * sizeof(double));
                                    } else {
                                        if (input[16] <= 24.0) {
                                            if (input[16] <= -8.0) {
                                                if (input[17] <= 17.5) {
                                                    if (input[14] <= 8.0) {
                                                        memcpy(var0, (const double[]){0.3274336283185841, 0.672566371681416}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.7659574468085106, 0.23404255319148937}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[17] <= 18.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6998394863563403, 0.3001605136436597}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[15] <= -8.0) {
                                                    if (input[17] <= 17.5) {
                                                        memcpy(var0, (const double[]){0.5158730158730159, 0.48412698412698413}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 18.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7125890736342043, 0.28741092636579574}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[15] <= 8.0) {
                                                        memcpy(var0, (const double[]){0.9120545868081881, 0.08794541319181198}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.690176322418136, 0.30982367758186397}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[17] <= 17.5) {
                                                if (input[8] <= -8.0) {
                                                    memcpy(var0, (const double[]){0.6935483870967742, 0.3064516129032258}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.26959247648902823, 0.7304075235109718}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[17] <= 18.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.5223613595706619, 0.4776386404293381}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[13] <= 8.0) {
                                        if (input[22] <= -0.5) {
                                            if (input[17] <= 17.5) {
                                                if (input[13] <= -8.0) {
                                                    if (input[21] <= 960.5) {
                                                        if (input[21] <= -211676771.5) {
                                                            memcpy(var0, (const double[]){0.7909604519774012, 0.20903954802259886}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.42487046632124353, 0.5751295336787565}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[7] <= -56.0) {
                                                            if (input[21] <= 2522.5) {
                                                                memcpy(var0, (const double[]){0.9290882778581766, 0.07091172214182344}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[20] <= 30.5) {
                                                                    memcpy(var0, (const double[]){0.5171102661596958, 0.4828897338403042}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.766897746967071, 0.23310225303292895}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.5535353535353535, 0.44646464646464645}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[16] <= 8.0) {
                                                        if (input[14] <= -8.0) {
                                                            if (input[8] <= -8.0) {
                                                                memcpy(var0, (const double[]){0.8272251308900523, 0.17277486910994763}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.16981132075471697, 0.8301886792452831}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[15] <= -8.0) {
                                                                if (input[22] <= -2.5) {
                                                                    memcpy(var0, (const double[]){0.9077212806026366, 0.09227871939736347}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.4166666666666667, 0.5833333333333334}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9595170454545454, 0.040482954545454544}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.4609375, 0.5390625}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[17] <= 18.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 19.5) {
                                                        if (input[21] <= 562.5) {
                                                            memcpy(var0, (const double[]){0.475, 0.525}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7890479153702551, 0.21095208462974488}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[17] <= 20.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 21.5) {
                                                                if (input[11] <= 6.5) {
                                                                    memcpy(var0, (const double[]){0.4079601990049751, 0.5920398009950248}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.7398843930635838, 0.26011560693641617}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[17] <= 22.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.8019323671497585, 0.19806763285024154}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[14] <= -8.0) {
                                                if (input[17] <= 17.5) {
                                                    if (input[14] <= -136.0) {
                                                        memcpy(var0, (const double[]){0.9609690444145357, 0.039030955585464336}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[8] <= -8.0) {
                                                            if (input[20] <= 33.0) {
                                                                if (input[4] <= 760.0) {
                                                                    memcpy(var0, (const double[]){0.5147679324894515, 0.48523206751054854}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.8527131782945736, 0.14728682170542637}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.887189292543021, 0.11281070745697896}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[6] <= 1.5) {
                                                                memcpy(var0, (const double[]){0.772635814889336, 0.22736418511066397}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[12] <= 3.0) {
                                                                    memcpy(var0, (const double[]){0.4976958525345622, 0.5023041474654378}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.024390243902439025, 0.975609756097561}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.951634693326128, 0.04836530667387193}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[16] <= -8.0) {
                                                    if (input[18] <= 0.5) {
                                                        if (input[17] <= 17.5) {
                                                            if (input[8] <= 8.0) {
                                                                if (input[21] <= 9288.0) {
                                                                    memcpy(var0, (const double[]){0.6777777777777778, 0.32222222222222224}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.2988505747126437, 0.7011494252873564}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9204301075268817, 0.07956989247311828}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[16] <= -72.0) {
                                                                memcpy(var0, (const double[]){0.6444444444444445, 0.35555555555555557}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9383259911894273, 0.06167400881057269}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9329474191992282, 0.06705258080077182}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[16] <= 8.0) {
                                                        if (input[14] <= 8.0) {
                                                            memcpy(var0, (const double[]){0.9863764484810523, 0.013623551518947698}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8864097363083164, 0.11359026369168357}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8953997809419496, 0.10460021905805038}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[17] <= 17.5) {
                                            if (input[7] <= 56.0) {
                                                if (input[18] <= 0.5) {
                                                    if (input[11] <= 6.5) {
                                                        memcpy(var0, (const double[]){0.7065527065527065, 0.2934472934472934}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.3586698337292161, 0.6413301662707839}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.8311111111111111, 0.1688888888888889}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[11] <= 6.5) {
                                                    memcpy(var0, (const double[]){0.5227272727272727, 0.4772727272727273}, 2 * sizeof(double));
                                                } else {
                                                    if (input[3] <= 2.5) {
                                                        memcpy(var0, (const double[]){0.8861197646244375, 0.11388023537556248}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6212765957446809, 0.37872340425531914}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[17] <= 18.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[15] <= -360.0) {
                                                    memcpy(var0, (const double[]){0.5477178423236515, 0.45228215767634855}, 2 * sizeof(double));
                                                } else {
                                                    if (input[1] <= 2.5) {
                                                        memcpy(var0, (const double[]){0.4421052631578947, 0.5578947368421052}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8418283459388359, 0.1581716540611641}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[19] <= 6.5) {
                                    if (input[15] <= -8.0) {
                                        if (input[17] <= 17.5) {
                                            if (input[18] <= 0.5) {
                                                if (input[12] <= 10.0) {
                                                    if (input[9] <= -8.0) {
                                                        if (input[9] <= -184.0) {
                                                            memcpy(var0, (const double[]){0.5192307692307693, 0.4807692307692308}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.12138728323699421, 0.8786127167630058}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6495726495726496, 0.3504273504273504}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.5919003115264797, 0.40809968847352024}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.6882453151618398, 0.31175468483816016}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[17] <= 18.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.6645807259073843, 0.3354192740926158}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[16] <= 40.0) {
                                            if (input[15] <= 8.0) {
                                                if (input[6] <= 1.5) {
                                                    memcpy(var0, (const double[]){0.7874784606547961, 0.2125215393452039}, 2 * sizeof(double));
                                                } else {
                                                    if (input[16] <= -32.0) {
                                                        memcpy(var0, (const double[]){0.6574074074074074, 0.3425925925925926}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9557226399331662, 0.04427736006683375}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[5] <= 992.0) {
                                                    if (input[21] <= 6675.5) {
                                                        memcpy(var0, (const double[]){0.7654690618762475, 0.2345309381237525}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[4] <= 1900.0) {
                                                            memcpy(var0, (const double[]){0.529296875, 0.470703125}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8695652173913043, 0.13043478260869565}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.9307479224376731, 0.06925207756232687}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[17] <= 17.5) {
                                                if (input[12] <= 10.0) {
                                                    memcpy(var0, (const double[]){0.2389937106918239, 0.7610062893081762}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.6990291262135923, 0.30097087378640774}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.7728531855955678, 0.22714681440443213}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[17] <= 17.5) {
                            memcpy(var0, (const double[]){0.04434589800443459, 0.9556541019955654}, 2 * sizeof(double));
                        } else {
                            if (input[17] <= 18.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[20] <= 27.0) {
                                    memcpy(var0, (const double[]){0.532150776053215, 0.4678492239467849}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.1956745623069001, 0.8043254376930999}, 2 * sizeof(double));
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
                                    if (input[13] <= -360.0) {
                                        memcpy(var0, (const double[]){0.16371681415929204, 0.8362831858407079}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.0767416934619507, 0.9232583065380493}, 2 * sizeof(double));
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
                                    if (input[6] <= 0.5) {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[8] <= -388.0) {
                                            memcpy(var0, (const double[]){0.8395061728395061, 0.16049382716049382}, 2 * sizeof(double));
                                        } else {
                                            if (input[14] <= -348.0) {
                                                memcpy(var0, (const double[]){0.09868421052631579, 0.9013157894736842}, 2 * sizeof(double));
                                            } else {
                                                if (input[1] <= 2.5) {
                                                    memcpy(var0, (const double[]){0.1111111111111111, 0.8888888888888888}, 2 * sizeof(double));
                                                } else {
                                                    if (input[22] <= 22.5) {
                                                        memcpy(var0, (const double[]){0.39233449477351917, 0.6076655052264809}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.7142857142857143, 0.2857142857142857}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[12] <= 3.0) {
                                        memcpy(var0, (const double[]){0.10028402883985144, 0.8997159711601486}, 2 * sizeof(double));
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
                                                        if (input[21] <= 2335.5) {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.3055555555555556, 0.6944444444444444}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[2] <= 0.5) {
                                                            memcpy(var0, (const double[]){0.2328042328042328, 0.7671957671957672}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[3] <= 1.5) {
                                                                memcpy(var0, (const double[]){0.15267175572519084, 0.8473282442748091}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[14] <= 28.0) {
                                                                    if (input[16] <= 60.0) {
                                                                        memcpy(var0, (const double[]){0.4957142857142857, 0.5042857142857143}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.2781456953642384, 0.7218543046357616}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[6] <= 2.5) {
                                                                        memcpy(var0, (const double[]){0.29441624365482233, 0.7055837563451777}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.7023809523809523, 0.2976190476190476}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.8274831964152353, 0.17251680358476476}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.13343799058084774, 0.8665620094191523}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[6] <= 2.5) {
                                                memcpy(var0, (const double[]){0.07498557969621227, 0.9250144203037878}, 2 * sizeof(double));
                                            } else {
                                                if (input[13] <= -148.0) {
                                                    memcpy(var0, (const double[]){0.33497536945812806, 0.6650246305418719}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.043859649122807015, 0.956140350877193}, 2 * sizeof(double));
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
                                                                if (input[21] <= 1741.5) {
                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.4071246819338422, 0.5928753180661578}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[11] <= 11.5) {
                                                                    if (input[1] <= 2.5) {
                                                                        memcpy(var0, (const double[]){0.14426229508196722, 0.8557377049180328}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[14] <= 76.0) {
                                                                            memcpy(var0, (const double[]){0.41322928279450016, 0.5867707172054998}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.25997045790251105, 0.740029542097489}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[13] <= -20.0) {
                                                                        if (input[15] <= -664.0) {
                                                                            memcpy(var0, (const double[]){0.5490716180371353, 0.4509283819628647}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[20] <= 32.0) {
                                                                                memcpy(var0, (const double[]){0.2537634408602151, 0.7462365591397849}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.5628140703517588, 0.4371859296482412}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.6652631578947369, 0.33473684210526317}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8010973936899863, 0.19890260631001372}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.1510177281680893, 0.8489822718319107}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[6] <= 0.5) {
                                                        memcpy(var0, (const double[]){0.012903225806451613, 0.9870967741935484}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[7] <= -4276.0) {
                                                            memcpy(var0, (const double[]){0.3783783783783784, 0.6216216216216216}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.12861356932153392, 0.8713864306784661}, 2 * sizeof(double));
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
                                                    if (input[11] <= 14.5) {
                                                        if (input[19] <= 6.5) {
                                                            if (input[6] <= 0.5) {
                                                                if (input[21] <= 2377.0) {
                                                                    memcpy(var0, (const double[]){0.011337868480725623, 0.9886621315192744}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.46956521739130436, 0.5304347826086957}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[12] <= 8.0) {
                                                                    if (input[12] <= 3.0) {
                                                                        if (input[14] <= 76.0) {
                                                                            if (input[3] <= 1.5) {
                                                                                memcpy(var0, (const double[]){0.1953125, 0.8046875}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[11] <= 13.5) {
                                                                                    memcpy(var0, (const double[]){0.46253746253746253, 0.5374625374625375}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.6382536382536382, 0.36174636174636177}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[16] <= 132.0) {
                                                                                memcpy(var0, (const double[]){0.22306717363751585, 0.7769328263624842}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.4987012987012987, 0.5012987012987012}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.8359133126934984, 0.16408668730650156}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.18181818181818182, 0.8181818181818182}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.12726794635813832, 0.8727320536418617}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[17] <= 24.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 25.5) {
                                                            if (input[11] <= 16.5) {
                                                                if (input[19] <= 6.5) {
                                                                    if (input[6] <= 1.5) {
                                                                        if (input[4] <= 1316.0) {
                                                                            if (input[11] <= 9.5) {
                                                                                memcpy(var0, (const double[]){0.5535248041775457, 0.4464751958224543}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[6] <= 0.5) {
                                                                                    if (input[21] <= 2177.0) {
                                                                                        memcpy(var0, (const double[]){0.02318840579710145, 0.9768115942028985}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[23] <= 0.5) {
                                                                                            memcpy(var0, (const double[]){0.5144694533762058, 0.4855305466237942}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.211864406779661, 0.788135593220339}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.4141519250780437, 0.5858480749219563}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[6] <= 0.5) {
                                                                                memcpy(var0, (const double[]){0.020512820512820513, 0.9794871794871794}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[0] <= 24.5) {
                                                                                    memcpy(var0, (const double[]){0.1099476439790576, 0.8900523560209425}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.3622641509433962, 0.6377358490566037}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[11] <= 15.5) {
                                                                            memcpy(var0, (const double[]){0.3777437468095967, 0.6222562531904032}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.627039627039627, 0.372960372960373}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[6] <= 1.5) {
                                                                    memcpy(var0, (const double[]){0.06514285714285714, 0.9348571428571428}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.1997690531177829, 0.8002309468822171}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[17] <= 26.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[17] <= 27.5) {
                                                                    if (input[11] <= 18.5) {
                                                                        if (input[6] <= 1.5) {
                                                                            if (input[21] <= 77.5) {
                                                                                if (input[21] <= -14.5) {
                                                                                    memcpy(var0, (const double[]){0.5255474452554745, 0.4744525547445255}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[6] <= 0.5) {
                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.23157894736842105, 0.7684210526315789}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[12] <= 12.0) {
                                                                                    if (input[16] <= 384.0) {
                                                                                        memcpy(var0, (const double[]){0.4920235096557515, 0.5079764903442485}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.16793893129770993, 0.8320610687022901}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.16535433070866143, 0.8346456692913385}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[11] <= 17.5) {
                                                                                if (input[19] <= 6.5) {
                                                                                    if (input[12] <= 10.0) {
                                                                                        memcpy(var0, (const double[]){0.42168674698795183, 0.5783132530120482}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.1619047619047619, 0.8380952380952381}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.6886363636363636, 0.31136363636363634}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[6] <= 0.5) {
                                                                            memcpy(var0, (const double[]){0.014388489208633094, 0.9856115107913669}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[14] <= 28.0) {
                                                                                if (input[5] <= 96.0) {
                                                                                    memcpy(var0, (const double[]){0.6105263157894737, 0.3894736842105263}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.2369146005509642, 0.7630853994490359}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.10635155096011817, 0.8936484490398818}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[17] <= 28.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[17] <= 29.5) {
                                                                            if (input[11] <= 20.5) {
                                                                                if (input[11] <= 19.5) {
                                                                                    if (input[14] <= 30.0) {
                                                                                        if (input[21] <= 9.5) {
                                                                                            if (input[6] <= 0.5) {
                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.4166666666666667, 0.5833333333333334}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[16] <= 14.0) {
                                                                                                memcpy(var0, (const double[]){0.5227272727272727, 0.4772727272727273}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.32342007434944237, 0.6765799256505576}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.2490895848506919, 0.7509104151493081}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[6] <= 0.5) {
                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[22] <= -111.0) {
                                                                                            memcpy(var0, (const double[]){0.92, 0.08}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.605724838411819, 0.394275161588181}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[6] <= 0.5) {
                                                                                    memcpy(var0, (const double[]){0.016233766233766232, 0.9837662337662337}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[11] <= 24.5) {
                                                                                        memcpy(var0, (const double[]){0.171, 0.829}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[14] <= 28.0) {
                                                                                            memcpy(var0, (const double[]){0.5779467680608364, 0.4220532319391635}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.20657276995305165, 0.7934272300469484}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[17] <= 30.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[17] <= 31.5) {
                                                                                    if (input[11] <= 22.5) {
                                                                                        if (input[11] <= 21.5) {
                                                                                            if (input[14] <= 66.0) {
                                                                                                if (input[6] <= 1.5) {
                                                                                                    if (input[21] <= 1509.0) {
                                                                                                        if (input[6] <= 0.5) {
                                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.39069767441860465, 0.6093023255813953}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[11] <= 12.5) {
                                                                                                            memcpy(var0, (const double[]){0.6878980891719745, 0.31210191082802546}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.3416666666666667, 0.6583333333333333}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.519280205655527, 0.480719794344473}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.2607843137254902, 0.7392156862745098}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[6] <= 0.5) {
                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[0] <= 24.5) {
                                                                                                    memcpy(var0, (const double[]){0.5638297872340425, 0.43617021276595747}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.7857142857142857, 0.21428571428571427}, 2 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (input[6] <= 0.5) {
                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[11] <= 28.5) {
                                                                                                memcpy(var0, (const double[]){0.17339795368874528, 0.8266020463112547}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.460093896713615, 0.539906103286385}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[17] <= 32.5) {
                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[17] <= 33.5) {
                                                                                            if (input[11] <= 24.5) {
                                                                                                if (input[11] <= 22.5) {
                                                                                                    if (input[4] <= 812.0) {
                                                                                                        memcpy(var0, (const double[]){0.4447058823529412, 0.5552941176470588}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[6] <= 0.5) {
                                                                                                            memcpy(var0, (const double[]){0.10065645514223195, 0.899343544857768}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.3126177024482109, 0.687382297551789}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[6] <= 0.5) {
                                                                                                        memcpy(var0, (const double[]){0.06451612903225806, 0.9354838709677419}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[4] <= 2216.0) {
                                                                                                            memcpy(var0, (const double[]){0.7393162393162394, 0.2606837606837607}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[14] <= 220.0) {
                                                                                                                memcpy(var0, (const double[]){0.64, 0.36}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.1, 0.9}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                if (input[6] <= 0.5) {
                                                                                                    memcpy(var0, (const double[]){0.007633587786259542, 0.9923664122137404}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[7] <= -2884.0) {
                                                                                                        memcpy(var0, (const double[]){0.47904191616766467, 0.5209580838323353}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.18133895624670532, 0.8186610437532946}, 2 * sizeof(double));
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
                                                                                                            if (input[21] <= 1836.5) {
                                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.41847826086956524, 0.5815217391304348}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[11] <= 23.5) {
                                                                                                                if (input[8] <= 28.0) {
                                                                                                                    memcpy(var0, (const double[]){0.47041420118343197, 0.5295857988165681}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.2529182879377432, 0.7470817120622568}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[4] <= 1208.0) {
                                                                                                                    memcpy(var0, (const double[]){0.8397790055248618, 0.16022099447513813}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[16] <= -4.0) {
                                                                                                                        memcpy(var0, (const double[]){0.8685258964143426, 0.13147410358565736}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[15] <= -552.0) {
                                                                                                                            memcpy(var0, (const double[]){0.8062015503875969, 0.1937984496124031}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.38509316770186336, 0.6149068322981367}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[11] <= 30.5) {
                                                                                                            memcpy(var0, (const double[]){0.1320754716981132, 0.8679245283018868}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[6] <= 0.5) {
                                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.5358255451713395, 0.46417445482866043}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[17] <= 36.5) {
                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[17] <= 37.5) {
                                                                                                            if (input[11] <= 29.5) {
                                                                                                                if (input[6] <= 0.5) {
                                                                                                                    if (input[21] <= 1216.5) {
                                                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[23] <= -10.0) {
                                                                                                                            memcpy(var0, (const double[]){0.09615384615384616, 0.9038461538461539}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.5865384615384616, 0.41346153846153844}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[11] <= 27.5) {
                                                                                                                        memcpy(var0, (const double[]){0.40321402483564645, 0.5967859751643535}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[4] <= 1960.0) {
                                                                                                                            memcpy(var0, (const double[]){0.8077858880778589, 0.1922141119221411}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[16] <= 40.0) {
                                                                                                                                memcpy(var0, (const double[]){0.7604166666666666, 0.23958333333333334}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.1981981981981982, 0.8018018018018018}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[13] <= -4976.0) {
                                                                                                                    memcpy(var0, (const double[]){0.5679012345679012, 0.43209876543209874}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.13544241225902126, 0.8645575877409788}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[17] <= 38.5) {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[17] <= 39.5) {
                                                                                                                    if (input[11] <= 30.5) {
                                                                                                                        if (input[6] <= 0.5) {
                                                                                                                            memcpy(var0, (const double[]){0.1234991423670669, 0.8765008576329331}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[11] <= 27.5) {
                                                                                                                                memcpy(var0, (const double[]){0.36289500509684, 0.6371049949031601}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[4] <= 940.0) {
                                                                                                                                    memcpy(var0, (const double[]){0.8858131487889274, 0.11418685121107267}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[15] <= -592.0) {
                                                                                                                                        memcpy(var0, (const double[]){0.8666666666666667, 0.13333333333333333}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){0.5585106382978723, 0.44148936170212766}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.1264131551901336, 0.8735868448098664}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[17] <= 40.5) {
                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[17] <= 41.5) {
                                                                                                                            if (input[11] <= 32.5) {
                                                                                                                                if (input[6] <= 0.5) {
                                                                                                                                    memcpy(var0, (const double[]){0.11350293542074363, 0.8864970645792564}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[11] <= 30.5) {
                                                                                                                                        if (input[22] <= -188.0) {
                                                                                                                                            memcpy(var0, (const double[]){0.8433734939759037, 0.1566265060240964}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            memcpy(var0, (const double[]){0.4276729559748428, 0.5723270440251572}, 2 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){0.8320355951056729, 0.16796440489432704}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                if (input[6] <= 0.5) {
                                                                                                                                    memcpy(var0, (const double[]){0.0032626427406199023, 0.9967373572593801}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[11] <= 37.0) {
                                                                                                                                        memcpy(var0, (const double[]){0.1535312180143296, 0.8464687819856704}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){0.6046511627906976, 0.3953488372093023}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            if (input[17] <= 42.5) {
                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[17] <= 43.5) {
                                                                                                                                    if (input[11] <= 34.5) {
                                                                                                                                        if (input[11] <= 31.5) {
                                                                                                                                            if (input[6] <= 0.5) {
                                                                                                                                                memcpy(var0, (const double[]){0.13548387096774195, 0.864516129032258}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                memcpy(var0, (const double[]){0.4022346368715084, 0.5977653631284916}, 2 * sizeof(double));
                                                                                                                                            }
                                                                                                                                        } else {
                                                                                                                                            if (input[6] <= 0.5) {
                                                                                                                                                memcpy(var0, (const double[]){0.01694915254237288, 0.9830508474576272}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                memcpy(var0, (const double[]){0.8826382153249273, 0.11736178467507274}, 2 * sizeof(double));
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){0.08780487804878048, 0.9121951219512195}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    if (input[17] <= 44.5) {
                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        if (input[17] <= 45.5) {
                                                                                                                                            if (input[6] <= 0.5) {
                                                                                                                                                memcpy(var0, (const double[]){0.04118173679498657, 0.9588182632050134}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                if (input[11] <= 36.5) {
                                                                                                                                                    if (input[11] <= 33.5) {
                                                                                                                                                        memcpy(var0, (const double[]){0.4685908319185059, 0.5314091680814941}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        memcpy(var0, (const double[]){0.8628495339547271, 0.13715046604527298}, 2 * sizeof(double));
                                                                                                                                                    }
                                                                                                                                                } else {
                                                                                                                                                    memcpy(var0, (const double[]){0.16977225672877846, 0.8302277432712215}, 2 * sizeof(double));
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        } else {
                                                                                                                                            if (input[17] <= 46.5) {
                                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                if (input[17] <= 47.5) {
                                                                                                                                                    if (input[6] <= 0.5) {
                                                                                                                                                        memcpy(var0, (const double[]){0.047619047619047616, 0.9523809523809523}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        if (input[11] <= 39.0) {
                                                                                                                                                            if (input[11] <= 35.5) {
                                                                                                                                                                memcpy(var0, (const double[]){0.41379310344827586, 0.5862068965517241}, 2 * sizeof(double));
                                                                                                                                                            } else {
                                                                                                                                                                if (input[4] <= 2552.0) {
                                                                                                                                                                    memcpy(var0, (const double[]){0.9621848739495799, 0.037815126050420166}, 2 * sizeof(double));
                                                                                                                                                                } else {
                                                                                                                                                                    memcpy(var0, (const double[]){0.5576923076923077, 0.4423076923076923}, 2 * sizeof(double));
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        } else {
                                                                                                                                                            memcpy(var0, (const double[]){0.20447284345047922, 0.7955271565495208}, 2 * sizeof(double));
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                } else {
                                                                                                                                                    if (input[11] <= 37.5) {
                                                                                                                                                        if (input[17] <= 48.5) {
                                                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            if (input[6] <= 0.5) {
                                                                                                                                                                if (input[20] <= 40.5) {
                                                                                                                                                                    if (input[21] <= 640.5) {
                                                                                                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                                                    } else {
                                                                                                                                                                        if (input[11] <= 22.0) {
                                                                                                                                                                            if (input[21] <= 5136.0) {
                                                                                                                                                                                memcpy(var0, (const double[]){0.8771929824561403, 0.12280701754385964}, 2 * sizeof(double));
                                                                                                                                                                            } else {
                                                                                                                                                                                memcpy(var0, (const double[]){0.4797047970479705, 0.5202952029520295}, 2 * sizeof(double));
                                                                                                                                                                            }
                                                                                                                                                                        } else {
                                                                                                                                                                            memcpy(var0, (const double[]){0.30303030303030304, 0.696969696969697}, 2 * sizeof(double));
                                                                                                                                                                        }
                                                                                                                                                                    }
                                                                                                                                                                } else {
                                                                                                                                                                    memcpy(var0, (const double[]){0.7290322580645161, 0.2709677419354839}, 2 * sizeof(double));
                                                                                                                                                                }
                                                                                                                                                            } else {
                                                                                                                                                                if (input[21] <= 1840.5) {
                                                                                                                                                                    memcpy(var0, (const double[]){0.901840490797546, 0.09815950920245399}, 2 * sizeof(double));
                                                                                                                                                                } else {
                                                                                                                                                                    memcpy(var0, (const double[]){0.5941343424787133, 0.40586565752128667}, 2 * sizeof(double));
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    } else {
                                                                                                                                                        if (input[4] <= 1884.0) {
                                                                                                                                                            if (input[22] <= -163.5) {
                                                                                                                                                                if (input[5] <= 1056.0) {
                                                                                                                                                                    memcpy(var0, (const double[]){0.9693669162695712, 0.03063308373042886}, 2 * sizeof(double));
                                                                                                                                                                } else {
                                                                                                                                                                    if (input[4] <= 412.0) {
                                                                                                                                                                        memcpy(var0, (const double[]){0.9104477611940298, 0.08955223880597014}, 2 * sizeof(double));
                                                                                                                                                                    } else {
                                                                                                                                                                        memcpy(var0, (const double[]){0.46846846846846846, 0.5315315315315315}, 2 * sizeof(double));
                                                                                                                                                                    }
                                                                                                                                                                }
                                                                                                                                                            } else {
                                                                                                                                                                if (input[17] <= 48.5) {
                                                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                } else {
                                                                                                                                                                    if (input[17] <= 49.5) {
                                                                                                                                                                        if (input[6] <= 0.5) {
                                                                                                                                                                            memcpy(var0, (const double[]){0.007782101167315175, 0.9922178988326849}, 2 * sizeof(double));
                                                                                                                                                                        } else {
                                                                                                                                                                            memcpy(var0, (const double[]){0.8, 0.2}, 2 * sizeof(double));
                                                                                                                                                                        }
                                                                                                                                                                    } else {
                                                                                                                                                                        if (input[17] <= 50.5) {
                                                                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                        } else {
                                                                                                                                                                            if (input[6] <= 1.5) {
                                                                                                                                                                                if (input[11] <= 45.5) {
                                                                                                                                                                                    memcpy(var0, (const double[]){0.15950920245398773, 0.8404907975460123}, 2 * sizeof(double));
                                                                                                                                                                                } else {
                                                                                                                                                                                    memcpy(var0, (const double[]){0.7741935483870968, 0.22580645161290322}, 2 * sizeof(double));
                                                                                                                                                                                }
                                                                                                                                                                            } else {
                                                                                                                                                                                memcpy(var0, (const double[]){0.9637462235649547, 0.03625377643504532}, 2 * sizeof(double));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                    }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        } else {
                                                                                                                                                            if (input[6] <= 0.5) {
                                                                                                                                                                if (input[17] <= 48.5) {
                                                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                } else {
                                                                                                                                                                    if (input[16] <= 2.0) {
                                                                                                                                                                        memcpy(var0, (const double[]){0.6109324758842444, 0.3890675241157556}, 2 * sizeof(double));
                                                                                                                                                                    } else {
                                                                                                                                                                        if (input[5] <= 224.0) {
                                                                                                                                                                            memcpy(var0, (const double[]){0.5777777777777777, 0.4222222222222222}, 2 * sizeof(double));
                                                                                                                                                                        } else {
                                                                                                                                                                            memcpy(var0, (const double[]){0.07775377969762419, 0.9222462203023758}, 2 * sizeof(double));
                                                                                                                                                                        }
                                                                                                                                                                    }
                                                                                                                                                                }
                                                                                                                                                            } else {
                                                                                                                                                                if (input[22] <= 248.0) {
                                                                                                                                                                    memcpy(var0, (const double[]){0.8898186889818689, 0.1101813110181311}, 2 * sizeof(double));
                                                                                                                                                                } else {
                                                                                                                                                                    memcpy(var0, (const double[]){0.48739495798319327, 0.5126050420168067}, 2 * sizeof(double));
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
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
                if (input[12] <= 8.0) {
                    if (input[6] <= 2.5) {
                        if (input[6] <= 0.5) {
                            if (input[20] <= 28.5) {
                                if (input[17] <= 19.5) {
                                    memcpy(var0, (const double[]){0.16071428571428573, 0.8392857142857143}, 2 * sizeof(double));
                                } else {
                                    if (input[15] <= 10.0) {
                                        if (input[13] <= 26.0) {
                                            memcpy(var0, (const double[]){0.599009900990099, 0.400990099009901}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.29818181818181816, 0.7018181818181818}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.2815533980582524, 0.7184466019417476}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[17] <= 43.5) {
                                    if (input[20] <= 35.0) {
                                        if (input[21] <= 2754.5) {
                                            memcpy(var0, (const double[]){0.08767123287671233, 0.9123287671232877}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.3157894736842105, 0.6842105263157895}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.13986013986013987, 0.8601398601398601}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[11] <= 16.0) {
                                        memcpy(var0, (const double[]){0.7387387387387387, 0.26126126126126126}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.324435318275154, 0.675564681724846}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
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
                                    if (input[22] <= 57.5) {
                                        if (input[17] <= 18.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 27.5) {
                                                if (input[5] <= 992.0) {
                                                    if (input[21] <= 3516.0) {
                                                        memcpy(var0, (const double[]){0.4544, 0.5456}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[4] <= 1628.0) {
                                                            memcpy(var0, (const double[]){0.21063394683026584, 0.7893660531697342}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.47019867549668876, 0.5298013245033113}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.5947955390334573, 0.4052044609665427}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[17] <= 28.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[13] <= 632.0) {
                                                        memcpy(var0, (const double[]){0.4992134242265338, 0.5007865757734662}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.2422145328719723, 0.7577854671280276}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.6345885634588564, 0.36541143654114366}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[11] <= 10.0) {
                                        if (input[21] <= 6740.5) {
                                            memcpy(var0, (const double[]){0.8987854251012146, 0.10121457489878542}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.7017543859649122, 0.2982456140350877}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[17] <= 19.5) {
                                            memcpy(var0, (const double[]){0.14285714285714285, 0.8571428571428571}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.7371007371007371, 0.2628992628992629}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[17] <= 35.5) {
                            memcpy(var0, (const double[]){0.11409395973154363, 0.8859060402684564}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){0.2892561983471074, 0.7107438016528925}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[0] <= 34.5) {
                        if (input[17] <= 19.5) {
                            if (input[17] <= 17.5) {
                                memcpy(var0, (const double[]){0.03125, 0.96875}, 2 * sizeof(double));
                            } else {
                                if (input[17] <= 18.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[21] <= 2462.5) {
                                        memcpy(var0, (const double[]){0.2997416020671835, 0.7002583979328165}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.08867924528301886, 0.9113207547169812}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[17] <= 20.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[11] <= 10.0) {
                                    if (input[12] <= 10.0) {
                                        memcpy(var0, (const double[]){0.5736434108527132, 0.4263565891472868}, 2 * sizeof(double));
                                    } else {
                                        if (input[17] <= 21.5) {
                                            memcpy(var0, (const double[]){0.1704718417047184, 0.8295281582952816}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.4508670520231214, 0.5491329479768786}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[17] <= 43.5) {
                                        if (input[17] <= 23.5) {
                                            memcpy(var0, (const double[]){0.1262541806020067, 0.8737458193979933}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 24.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[12] <= 12.0) {
                                                    if (input[17] <= 29.5) {
                                                        memcpy(var0, (const double[]){0.30501089324618735, 0.6949891067538126}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6041666666666666, 0.3958333333333333}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[6] <= 0.5) {
                                                        memcpy(var0, (const double[]){0.14839924670433144, 0.8516007532956685}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.2635046113306983, 0.7364953886693018}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[11] <= 22.0) {
                                            memcpy(var0, (const double[]){0.6790697674418604, 0.3209302325581395}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.33088235294117646, 0.6691176470588235}, 2 * sizeof(double));
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
                                if (input[11] <= 18.0) {
                                    memcpy(var0, (const double[]){0.16321353065539113, 0.8367864693446089}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.3948220064724919, 0.6051779935275081}, 2 * sizeof(double));
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
    memcpy(output, var0, 2 * sizeof(double));
}
