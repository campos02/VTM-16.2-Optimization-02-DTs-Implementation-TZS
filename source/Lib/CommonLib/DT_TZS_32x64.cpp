//RAMIRO - VTM 16.2 - Otimização Inter-Quadros - Implementação de DTs no TZS

#include "DT_TZS_32x64.h"

#include <string.h>
void DT_TZS_32x64::score(double * input, double * output) {
    double var0[2];
    if (input[19] <= 2.5) {
        if (input[17] <= 12.5) {
            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
        } else {
            if (input[6] <= 0.5) {
                if (input[21] <= 5481.0) {
                    if (input[21] <= 2403.5) {
                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (const double[]){0.008962426749396759, 0.9910375732506033}, 2 * sizeof(double));
                    }
                } else {
                    if (input[17] <= 24.0) {
                        if (input[0] <= 29.5) {
                            if (input[15] <= -2.0) {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[15] <= 2.0) {
                                    if (input[17] <= 15.5) {
                                        memcpy(var0, (const double[]){0.061068702290076333, 0.9389312977099237}, 2 * sizeof(double));
                                    } else {
                                        if (input[14] <= -2.0) {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.7506297229219143, 0.24937027707808565}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[17] <= 17.5) {
                                memcpy(var0, (const double[]){0.0017099497702254996, 0.9982900502297745}, 2 * sizeof(double));
                            } else {
                                if (input[13] <= -2.0) {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[13] <= 2.0) {
                                        if (input[20] <= 44.0) {
                                            memcpy(var0, (const double[]){0.14339622641509434, 0.8566037735849057}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
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
                                            memcpy(var0, (const double[]){0.9903691813804173, 0.009630818619582664}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.8709677419354839, 0.12903225806451613}, 2 * sizeof(double));
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
                                    if (input[20] <= 32.0) {
                                        if (input[21] <= -161673142.0) {
                                            if (input[22] <= -59.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.6507936507936508, 0.3492063492063492}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[13] <= -190.0) {
                                                if (input[16] <= -432.0) {
                                                    memcpy(var0, (const double[]){0.9285714285714286, 0.07142857142857142}, 2 * sizeof(double));
                                                } else {
                                                    if (input[14] <= -376.0) {
                                                        memcpy(var0, (const double[]){0.11690363349131122, 0.8830963665086888}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[7] <= -956.0) {
                                                            if (input[13] <= -4384.0) {
                                                                memcpy(var0, (const double[]){0.09876543209876543, 0.9012345679012346}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.5900846432889963, 0.40991535671100365}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[13] <= -948.0) {
                                                                memcpy(var0, (const double[]){0.08121827411167512, 0.9187817258883249}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.3608768971332209, 0.6391231028667791}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.11992945326278659, 0.8800705467372134}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[5] <= 864.0) {
                                            if (input[8] <= -392.0) {
                                                memcpy(var0, (const double[]){0.9774436090225563, 0.022556390977443608}, 2 * sizeof(double));
                                            } else {
                                                if (input[14] <= -376.0) {
                                                    memcpy(var0, (const double[]){0.08275862068965517, 0.9172413793103448}, 2 * sizeof(double));
                                                } else {
                                                    if (input[21] <= -84.5) {
                                                        memcpy(var0, (const double[]){0.8113879003558719, 0.18861209964412812}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[21] <= 900.0) {
                                                            memcpy(var0, (const double[]){0.3515541264737406, 0.6484458735262594}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[23] <= 3.5) {
                                                                memcpy(var0, (const double[]){0.5659121171770972, 0.4340878828229028}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.8583333333333333, 0.14166666666666666}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[14] <= -354.0) {
                                                if (input[23] <= -23.0) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[0] <= 34.5) {
                                                    memcpy(var0, (const double[]){0.727061556329849, 0.27293844367015097}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.8994845360824743, 0.10051546391752578}, 2 * sizeof(double));
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
                                    if (input[23] <= -7.5) {
                                        memcpy(var0, (const double[]){0.9806451612903225, 0.01935483870967742}, 2 * sizeof(double));
                                    } else {
                                        if (input[17] <= 12.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[8] <= -28.0) {
                                                if (input[17] <= 13.5) {
                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.7647058823529411, 0.23529411764705882}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.14736842105263157, 0.8526315789473684}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[16] <= -6.0) {
                                        memcpy(var0, (const double[]){0.49504950495049505, 0.504950495049505}, 2 * sizeof(double));
                                    } else {
                                        if (input[15] <= 2.0) {
                                            memcpy(var0, (const double[]){0.9990561407482916, 0.0009438592517083853}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.6306306306306306, 0.36936936936936937}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[17] <= 12.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[8] <= 24.0) {
                                        if (input[14] <= 14.0) {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 14.5) {
                                                memcpy(var0, (const double[]){0.5783132530120482, 0.42168674698795183}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.08391608391608392, 0.916083916083916}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.9316770186335404, 0.06832298136645963}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[7] <= 2.0) {
                                if (input[17] <= 14.5) {
                                    memcpy(var0, (const double[]){0.35502958579881655, 0.6449704142011834}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.05805515239477504, 0.941944847605225}, 2 * sizeof(double));
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
                                            if (input[21] <= -441114624.0) {
                                                memcpy(var0, (const double[]){0.9774436090225563, 0.022556390977443608}, 2 * sizeof(double));
                                            } else {
                                                if (input[21] <= 5195.5) {
                                                    memcpy(var0, (const double[]){0.3515439429928741, 0.6484560570071259}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.7648902821316614, 0.23510971786833856}, 2 * sizeof(double));
                                                }
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
                        if (input[12] <= 8.0) {
                            if (input[21] <= 3638.0) {
                                if (input[6] <= 0.5) {
                                    if (input[21] <= 2051.5) {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[17] <= 23.5) {
                                            memcpy(var0, (const double[]){0.2848101265822785, 0.7151898734177216}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.8026315789473685, 0.19736842105263158}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[17] <= 17.5) {
                                        if (input[9] <= 8.0) {
                                            if (input[20] <= 40.5) {
                                                if (input[16] <= 24.0) {
                                                    if (input[16] <= -8.0) {
                                                        memcpy(var0, (const double[]){0.4232209737827715, 0.5767790262172284}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[14] <= -8.0) {
                                                            memcpy(var0, (const double[]){0.4078091106290672, 0.5921908893709328}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[14] <= 24.0) {
                                                                memcpy(var0, (const double[]){0.7635253054101222, 0.23647469458987783}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.40106951871657753, 0.5989304812834224}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.30963665086887837, 0.6903633491311216}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.9024856596558317, 0.09751434034416825}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.9723502304147466, 0.027649769585253458}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[17] <= 18.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[20] <= 35.5) {
                                                if (input[16] <= 24.0) {
                                                    if (input[17] <= 19.5) {
                                                        if (input[21] <= 1830.5) {
                                                            memcpy(var0, (const double[]){0.4420131291028446, 0.5579868708971554}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7670682730923695, 0.23293172690763053}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[17] <= 20.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 21.5) {
                                                                memcpy(var0, (const double[]){0.42718446601941745, 0.5728155339805825}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[17] <= 22.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.7228915662650602, 0.27710843373493976}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.4986737400530504, 0.5013262599469496}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.8911671924290221, 0.10883280757097792}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[15] <= -2.0) {
                                    if (input[17] <= 17.5) {
                                        if (input[22] <= 1.5) {
                                            if (input[9] <= -10.0) {
                                                memcpy(var0, (const double[]){0.8739669421487604, 0.12603305785123967}, 2 * sizeof(double));
                                            } else {
                                                if (input[15] <= -94.0) {
                                                    if (input[22] <= -21.5) {
                                                        if (input[6] <= 1.5) {
                                                            memcpy(var0, (const double[]){0.8369565217391305, 0.16304347826086957}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.4665314401622718, 0.5334685598377282}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[4] <= 1072.0) {
                                                            memcpy(var0, (const double[]){0.7144508670520231, 0.2855491329479769}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9354838709677419, 0.06451612903225806}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[14] <= 10.0) {
                                                        if (input[13] <= -46.0) {
                                                            if (input[13] <= -84.0) {
                                                                memcpy(var0, (const double[]){0.4790874524714829, 0.5209125475285171}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[14] <= -8.0) {
                                                                    memcpy(var0, (const double[]){0.46153846153846156, 0.5384615384615384}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.8737864077669902, 0.1262135922330097}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.46199701937406856, 0.5380029806259314}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[8] <= 14.0) {
                                                            memcpy(var0, (const double[]){0.15272727272727274, 0.8472727272727273}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.5075757575757576, 0.49242424242424243}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.8603196664350243, 0.13968033356497567}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[17] <= 18.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 19.5) {
                                                memcpy(var0, (const double[]){0.6996904024767802, 0.30030959752321984}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 20.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[13] <= -18.0) {
                                                        memcpy(var0, (const double[]){0.9083333333333333, 0.09166666666666666}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.7514262428687857, 0.24857375713121435}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[14] <= -2.0) {
                                        if (input[9] <= 200.0) {
                                            if (input[17] <= 17.5) {
                                                if (input[8] <= -38.0) {
                                                    if (input[5] <= 992.0) {
                                                        memcpy(var0, (const double[]){0.8276877761413843, 0.1723122238586156}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9863760217983651, 0.013623978201634877}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[18] <= 0.5) {
                                                        if (input[8] <= -14.0) {
                                                            memcpy(var0, (const double[]){0.5362318840579711, 0.463768115942029}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[11] <= 6.5) {
                                                                memcpy(var0, (const double[]){0.8285714285714286, 0.17142857142857143}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.16906474820143885, 0.8309352517985612}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[13] <= -14.0) {
                                                            memcpy(var0, (const double[]){0.8845070422535212, 0.11549295774647887}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[8] <= -14.0) {
                                                                memcpy(var0, (const double[]){0.8029925187032418, 0.1970074812967581}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.4674329501915709, 0.5325670498084292}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[17] <= 18.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 19.5) {
                                                        memcpy(var0, (const double[]){0.6533018867924528, 0.3466981132075472}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 20.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 21.5) {
                                                                memcpy(var0, (const double[]){0.6689655172413793, 0.3310344827586207}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9184549356223176, 0.0815450643776824}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.9991836734693877, 0.0008163265306122449}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[16] <= 2.0) {
                                            if (input[16] <= -2.0) {
                                                if (input[18] <= 0.5) {
                                                    if (input[17] <= 17.5) {
                                                        if (input[15] <= 48.0) {
                                                            if (input[8] <= 2.0) {
                                                                if (input[21] <= 18347.0) {
                                                                    memcpy(var0, (const double[]){0.3832752613240418, 0.6167247386759582}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.04678362573099415, 0.9532163742690059}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.7327586206896551, 0.2672413793103448}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[4] <= 1656.0) {
                                                                memcpy(var0, (const double[]){0.7565543071161048, 0.24344569288389514}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.990990990990991, 0.009009009009009009}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[15] <= 14.0) {
                                                            memcpy(var0, (const double[]){0.9476372924648787, 0.05236270753512133}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.698292220113852, 0.301707779886148}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[23] <= -0.5) {
                                                        memcpy(var0, (const double[]){0.9614438063986874, 0.03855619360131255}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.7828571428571428, 0.21714285714285714}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[15] <= 2.0) {
                                                    if (input[13] <= 2.0) {
                                                        if (input[14] <= 2.0) {
                                                            if (input[13] <= -2.0) {
                                                                if (input[12] <= 3.0) {
                                                                    if (input[17] <= 17.5) {
                                                                        memcpy(var0, (const double[]){0.62, 0.38}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9614243323442137, 0.03857566765578635}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.9770009199632015, 0.022999080036798528}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[18] <= 0.5) {
                                                                    memcpy(var0, (const double[]){0.9988233954529927, 0.0011766045470072493}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[6] <= 0.5) {
                                                                        memcpy(var0, (const double[]){0.8329048843187661, 0.16709511568123395}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[21] <= 5212.5) {
                                                                            memcpy(var0, (const double[]){0.902542372881356, 0.09745762711864407}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[23] <= 0.5) {
                                                                                memcpy(var0, (const double[]){0.989067055393586, 0.010932944606413994}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.9040247678018576, 0.09597523219814241}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[17] <= 17.5) {
                                                                if (input[4] <= 1240.0) {
                                                                    if (input[8] <= 2.0) {
                                                                        memcpy(var0, (const double[]){0.3915343915343915, 0.6084656084656085}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.8411214953271028, 0.1588785046728972}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.9711538461538461, 0.028846153846153848}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9638854296388543, 0.0361145703611457}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[17] <= 17.5) {
                                                            if (input[5] <= 672.0) {
                                                                if (input[7] <= 2.0) {
                                                                    memcpy(var0, (const double[]){0.3220338983050847, 0.6779661016949152}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.8057553956834532, 0.19424460431654678}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9702970297029703, 0.0297029702970297}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9367088607594937, 0.06329113924050633}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[9] <= 12.0) {
                                                        if (input[17] <= 17.5) {
                                                            if (input[13] <= -14.0) {
                                                                memcpy(var0, (const double[]){0.8654037886340977, 0.1345962113659023}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[15] <= 50.0) {
                                                                    memcpy(var0, (const double[]){0.29770992366412213, 0.7022900763358778}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[4] <= 1504.0) {
                                                                        memcpy(var0, (const double[]){0.5797101449275363, 0.42028985507246375}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9726027397260274, 0.0273972602739726}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[17] <= 18.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.8856304985337243, 0.11436950146627566}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9623536855425499, 0.037646314457450175}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[17] <= 17.5) {
                                                if (input[18] <= 0.5) {
                                                    if (input[10] <= 42.0) {
                                                        if (input[8] <= 14.0) {
                                                            memcpy(var0, (const double[]){0.34026465028355385, 0.6597353497164461}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.6434782608695652, 0.3565217391304348}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.924812030075188, 0.07518796992481203}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.9214175654853621, 0.07858243451463791}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[17] <= 18.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[12] <= 3.0) {
                                                        memcpy(var0, (const double[]){0.8022690437601296, 0.19773095623987033}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.952054794520548, 0.04794520547945205}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[6] <= 0.5) {
                                if (input[17] <= 17.5) {
                                    if (input[20] <= 35.0) {
                                        memcpy(var0, (const double[]){0.32677165354330706, 0.6732283464566929}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.0718562874251497, 0.9281437125748503}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[20] <= 43.0) {
                                        if (input[17] <= 18.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 19.5) {
                                                memcpy(var0, (const double[]){0.35093696763202725, 0.6490630323679727}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 20.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.6772486772486772, 0.32275132275132273}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[5] <= 992.0) {
                                    if (input[19] <= 6.5) {
                                        if (input[17] <= 17.5) {
                                            if (input[18] <= 0.5) {
                                                if (input[16] <= 8.0) {
                                                    if (input[16] <= -8.0) {
                                                        memcpy(var0, (const double[]){0.3351206434316354, 0.6648793565683646}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[15] <= -8.0) {
                                                            memcpy(var0, (const double[]){0.3651685393258427, 0.6348314606741573}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[15] <= 8.0) {
                                                                memcpy(var0, (const double[]){0.9423076923076923, 0.057692307692307696}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[7] <= -56.0) {
                                                                    memcpy(var0, (const double[]){0.8811188811188811, 0.11888111888111888}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.2962962962962963, 0.7037037037037037}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.2735949098621421, 0.7264050901378579}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[20] <= 40.5) {
                                                    memcpy(var0, (const double[]){0.6476293103448276, 0.35237068965517243}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.8372093023255814, 0.16279069767441862}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[17] <= 18.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 19.5) {
                                                    if (input[12] <= 10.0) {
                                                        memcpy(var0, (const double[]){0.6880597014925374, 0.3119402985074627}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.5009708737864078, 0.49902912621359224}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[17] <= 20.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6931246506428173, 0.3068753493571828}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.9474431818181818, 0.052556818181818184}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[17] <= 17.5) {
                            if (input[11] <= 6.5) {
                                memcpy(var0, (const double[]){0.23979591836734693, 0.7602040816326531}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.011090573012939002, 0.988909426987061}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[17] <= 18.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[17] <= 19.5) {
                                    memcpy(var0, (const double[]){0.13485714285714287, 0.8651428571428571}, 2 * sizeof(double));
                                } else {
                                    if (input[17] <= 20.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[20] <= 30.5) {
                                            memcpy(var0, (const double[]){0.5050505050505051, 0.494949494949495}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.20253164556962025, 0.7974683544303798}, 2 * sizeof(double));
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
                if (input[11] <= 23.5) {
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
                                    if (input[6] <= 0.5) {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[13] <= -372.0) {
                                            memcpy(var0, (const double[]){0.17806556050182112, 0.8219344394981789}, 2 * sizeof(double));
                                        } else {
                                            if (input[21] <= -505580160.0) {
                                                memcpy(var0, (const double[]){0.3893805309734513, 0.6106194690265486}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.06890086711975626, 0.9310991328802437}, 2 * sizeof(double));
                                            }
                                        }
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
                                                    if (input[3] <= 2.0) {
                                                        memcpy(var0, (const double[]){0.463664734730272, 0.5363352652697281}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.32413793103448274, 0.6758620689655173}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[12] <= 3.0) {
                                                    if (input[13] <= -854.0) {
                                                        if (input[6] <= 0.5) {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.21486038807382868, 0.7851396119261713}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.07647671477458712, 0.9235232852254129}, 2 * sizeof(double));
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
                                                                    if (input[21] <= 3636.5) {
                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.3786008230452675, 0.6213991769547325}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[2] <= 0.5) {
                                                                        memcpy(var0, (const double[]){0.3399182561307902, 0.6600817438692098}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.45886442641946695, 0.541135573580533}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[10] <= -2.0) {
                                                                    memcpy(var0, (const double[]){0.5321100917431193, 0.46788990825688076}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.8108108108108109, 0.1891891891891892}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.1278928136419001, 0.8721071863580999}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[6] <= 2.5) {
                                                            if (input[12] <= 3.0) {
                                                                if (input[6] <= 0.5) {
                                                                    if (input[21] <= 4235.5) {
                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.17142857142857143, 0.8285714285714286}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[23] <= 0.5) {
                                                                        memcpy(var0, (const double[]){0.18057285180572852, 0.8194271481942715}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.06422607578676943, 0.9357739242132306}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[7] <= -228.0) {
                                                                memcpy(var0, (const double[]){0.41007194244604317, 0.5899280575539568}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.06279434850863422, 0.9372056514913658}, 2 * sizeof(double));
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
                                                                            if (input[21] <= 3144.5) {
                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.42661448140900193, 0.5733855185909981}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[13] <= -812.0) {
                                                                                memcpy(var0, (const double[]){0.5435148792813026, 0.45648512071869735}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[11] <= 11.5) {
                                                                                    memcpy(var0, (const double[]){0.33537568526281847, 0.6646243147371815}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[15] <= 44.0) {
                                                                                        memcpy(var0, (const double[]){0.43478260869565216, 0.5652173913043478}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.7413793103448276, 0.25862068965517243}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.7482993197278912, 0.25170068027210885}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[0] <= 34.5) {
                                                                        if (input[8] <= -50.0) {
                                                                            memcpy(var0, (const double[]){0.010050251256281407, 0.9899497487437185}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.21194029850746268, 0.7880597014925373}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.014669926650366748, 0.9853300733496333}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[6] <= 0.5) {
                                                                    memcpy(var0, (const double[]){0.01338432122370937, 0.9866156787762906}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[13] <= -4272.0) {
                                                                        memcpy(var0, (const double[]){0.4435146443514644, 0.5564853556485355}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.14216701173222912, 0.8578329882677709}, 2 * sizeof(double));
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
                                                                            if (input[21] <= 3266.0) {
                                                                                memcpy(var0, (const double[]){0.01015228426395939, 0.9898477157360406}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.47108307045215564, 0.5289169295478444}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[12] <= 8.0) {
                                                                                if (input[12] <= 3.0) {
                                                                                    if (input[11] <= 13.5) {
                                                                                        memcpy(var0, (const double[]){0.41483771251931995, 0.5851622874806801}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.5765027322404371, 0.42349726775956287}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.7450980392156863, 0.2549019607843137}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[20] <= 40.5) {
                                                                                    if (input[14] <= -36.0) {
                                                                                        memcpy(var0, (const double[]){0.033707865168539325, 0.9662921348314607}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.30363036303630364, 0.6963696369636964}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.02967359050445104, 0.9703264094955489}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[6] <= 0.5) {
                                                                        if (input[21] <= 2770.5) {
                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.2459016393442623, 0.7540983606557377}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.1651521137890162, 0.8348478862109838}, 2 * sizeof(double));
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
                                                                                    if (input[21] <= 2401.0) {
                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[11] <= 10.0) {
                                                                                            memcpy(var0, (const double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.3493552168815944, 0.6506447831184057}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[12] <= 8.0) {
                                                                                        if (input[11] <= 15.5) {
                                                                                            memcpy(var0, (const double[]){0.41614474599860823, 0.5838552540013918}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.6025544703230654, 0.39744552967693464}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[0] <= 34.5) {
                                                                                            memcpy(var0, (const double[]){0.24803149606299213, 0.7519685039370079}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.1305379746835443, 0.8694620253164557}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[17] <= 26.5) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[17] <= 27.5) {
                                                                                if (input[11] <= 18.5) {
                                                                                    if (input[19] <= 6.5) {
                                                                                        if (input[11] <= 17.5) {
                                                                                            if (input[20] <= 44.0) {
                                                                                                if (input[21] <= 1.5) {
                                                                                                    if (input[6] <= 0.5) {
                                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.37660818713450295, 0.623391812865497}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.41311933007676205, 0.586880669923238}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.06808510638297872, 0.9319148936170213}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[6] <= 0.5) {
                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.6252129471890971, 0.3747870528109029}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[6] <= 0.5) {
                                                                                        memcpy(var0, (const double[]){0.010638297872340425, 0.9893617021276596}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[23] <= 1.5) {
                                                                                            memcpy(var0, (const double[]){0.23870220162224798, 0.761297798377752}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.07983193277310924, 0.9201680672268907}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[17] <= 28.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[17] <= 29.5) {
                                                                                        if (input[11] <= 20.5) {
                                                                                            if (input[6] <= 1.5) {
                                                                                                if (input[4] <= 1304.0) {
                                                                                                    memcpy(var0, (const double[]){0.37383177570093457, 0.6261682242990654}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[6] <= 0.5) {
                                                                                                        memcpy(var0, (const double[]){0.0297029702970297, 0.9702970297029703}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.2676923076923077, 0.7323076923076923}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                if (input[11] <= 17.5) {
                                                                                                    memcpy(var0, (const double[]){0.3838056680161943, 0.6161943319838057}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.6690975387420237, 0.3309024612579763}, 2 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.14175257731958762, 0.8582474226804123}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[17] <= 30.5) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[20] <= 44.0) {
                                                                                                if (input[6] <= 1.5) {
                                                                                                    if (input[4] <= 1264.0) {
                                                                                                        if (input[8] <= 186.0) {
                                                                                                            if (input[16] <= 186.0) {
                                                                                                                if (input[21] <= 2864.0) {
                                                                                                                    if (input[6] <= 0.5) {
                                                                                                                        if (input[21] <= 971.0) {
                                                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.4049079754601227, 0.5950920245398773}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        if (input[11] <= 17.5) {
                                                                                                                            memcpy(var0, (const double[]){0.459546925566343, 0.540453074433657}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.7661016949152543, 0.23389830508474577}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[5] <= 672.0) {
                                                                                                                        if (input[17] <= 31.5) {
                                                                                                                            memcpy(var0, (const double[]){0.504930966469428, 0.49506903353057197}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[17] <= 32.5) {
                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[21] <= 18442.0) {
                                                                                                                                    if (input[23] <= -2.5) {
                                                                                                                                        memcpy(var0, (const double[]){0.934375, 0.065625}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){0.7539353769676885, 0.24606462303231152}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    memcpy(var0, (const double[]){0.5975232198142415, 0.4024767801857585}, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.5365853658536586, 0.4634146341463415}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.3224932249322493, 0.6775067750677507}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[16] <= -84.0) {
                                                                                                                memcpy(var0, (const double[]){0.19912152269399708, 0.8008784773060029}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[6] <= 0.5) {
                                                                                                                    if (input[14] <= 300.0) {
                                                                                                                        memcpy(var0, (const double[]){0.647887323943662, 0.352112676056338}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.04878048780487805, 0.9512195121951219}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.678082191780822, 0.3219178082191781}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[6] <= 0.5) {
                                                                                                            if (input[21] <= 2400.5) {
                                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[23] <= -6.5) {
                                                                                                                    memcpy(var0, (const double[]){0.24608501118568232, 0.7539149888143176}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.5603448275862069, 0.4396551724137931}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[22] <= -74.0) {
                                                                                                                memcpy(var0, (const double[]){0.8541666666666666, 0.14583333333333334}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[20] <= 24.5) {
                                                                                                                    memcpy(var0, (const double[]){0.2136986301369863, 0.7863013698630137}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.512, 0.488}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[21] <= 231.0) {
                                                                                                        if (input[17] <= 31.5) {
                                                                                                            if (input[11] <= 21.0) {
                                                                                                                memcpy(var0, (const double[]){0.4268774703557312, 0.5731225296442688}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.7694444444444445, 0.23055555555555557}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[17] <= 32.5) {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[17] <= 33.5) {
                                                                                                                    memcpy(var0, (const double[]){0.5702127659574469, 0.4297872340425532}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[17] <= 34.5) {
                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[17] <= 35.5) {
                                                                                                                            memcpy(var0, (const double[]){0.4489795918367347, 0.5510204081632653}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.8404255319148937, 0.1595744680851064}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[23] <= -15.5) {
                                                                                                            if (input[6] <= 2.5) {
                                                                                                                memcpy(var0, (const double[]){0.5959367945823928, 0.4040632054176072}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[14] <= 180.0) {
                                                                                                                    if (input[8] <= -108.0) {
                                                                                                                        memcpy(var0, (const double[]){0.3065326633165829, 0.6934673366834171}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.7261146496815286, 0.27388535031847133}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.12869565217391304, 0.871304347826087}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[17] <= 31.5) {
                                                                                                                memcpy(var0, (const double[]){0.4046242774566474, 0.5953757225433526}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[17] <= 32.5) {
                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[17] <= 33.5) {
                                                                                                                        memcpy(var0, (const double[]){0.3267605633802817, 0.6732394366197183}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[17] <= 34.5) {
                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.6031021897810219, 0.3968978102189781}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                if (input[10] <= -4.0) {
                                                                                                    memcpy(var0, (const double[]){0.010282776349614395, 0.9897172236503856}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[10] <= 4.0) {
                                                                                                        memcpy(var0, (const double[]){0.575, 0.425}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.07346938775510205, 0.926530612244898}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
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
                    if (input[22] <= -241.5) {
                        if (input[15] <= -132.0) {
                            if (input[15] <= -516.0) {
                                if (input[16] <= -3424.0) {
                                    memcpy(var0, (const double[]){0.974304068522484, 0.02569593147751606}, 2 * sizeof(double));
                                } else {
                                    if (input[22] <= -875.0) {
                                        memcpy(var0, (const double[]){0.9531405782652044, 0.04685942173479561}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.8291605301914581, 0.17083946980854198}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[16] <= -272.0) {
                                    memcpy(var0, (const double[]){0.9152542372881356, 0.0847457627118644}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.21971830985915494, 0.780281690140845}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[5] <= 224.0) {
                                memcpy(var0, (const double[]){0.996191282268303, 0.003808717731696995}, 2 * sizeof(double));
                            } else {
                                if (input[6] <= 2.5) {
                                    if (input[8] <= -708.0) {
                                        memcpy(var0, (const double[]){0.9892650701899257, 0.010734929810074319}, 2 * sizeof(double));
                                    } else {
                                        if (input[22] <= -647.5) {
                                            memcpy(var0, (const double[]){0.99079754601227, 0.009202453987730062}, 2 * sizeof(double));
                                        } else {
                                            if (input[4] <= 456.0) {
                                                memcpy(var0, (const double[]){0.9281767955801105, 0.0718232044198895}, 2 * sizeof(double));
                                            } else {
                                                if (input[5] <= 992.0) {
                                                    if (input[13] <= -4120.0) {
                                                        memcpy(var0, (const double[]){0.9086021505376344, 0.0913978494623656}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.3380281690140845, 0.6619718309859155}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.27672955974842767, 0.7232704402515723}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.9967341606792945, 0.0032658393207054214}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[6] <= 2.5) {
                            if (input[4] <= 216.0) {
                                if (input[7] <= -1958.0) {
                                    if (input[20] <= 30.5) {
                                        memcpy(var0, (const double[]){0.9730077120822622, 0.02699228791773779}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.794392523364486, 0.205607476635514}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[17] <= 52.5) {
                                        if (input[4] <= 72.0) {
                                            if (input[7] <= -838.0) {
                                                memcpy(var0, (const double[]){0.9594034797017399, 0.04059652029826015}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.816017316017316, 0.18398268398268397}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[22] <= 76.5) {
                                                if (input[20] <= 30.5) {
                                                    memcpy(var0, (const double[]){0.7845206684256816, 0.2154793315743184}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.5816831683168316, 0.4183168316831683}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.8806682577565632, 0.11933174224343675}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.4750593824228028, 0.5249406175771971}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[16] <= -62.0) {
                                    if (input[21] <= 3593.0) {
                                        if (input[15] <= -158.0) {
                                            if (input[4] <= 496.0) {
                                                if (input[16] <= -1350.0) {
                                                    memcpy(var0, (const double[]){0.31413612565445026, 0.6858638743455497}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.7650273224043715, 0.23497267759562843}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.7910447761194029, 0.208955223880597}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[5] <= 992.0) {
                                                memcpy(var0, (const double[]){0.8818940005380683, 0.11810599946193166}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.6545454545454545, 0.34545454545454546}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[20] <= 24.5) {
                                            memcpy(var0, (const double[]){0.8941176470588236, 0.10588235294117647}, 2 * sizeof(double));
                                        } else {
                                            if (input[8] <= 6.0) {
                                                if (input[14] <= 18.0) {
                                                    memcpy(var0, (const double[]){0.4607329842931937, 0.5392670157068062}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.9733333333333334, 0.02666666666666667}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[23] <= 6.5) {
                                                    memcpy(var0, (const double[]){0.10256410256410256, 0.8974358974358975}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.49473684210526314, 0.5052631578947369}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[15] <= -558.0) {
                                        if (input[5] <= 608.0) {
                                            if (input[21] <= 1980.0) {
                                                memcpy(var0, (const double[]){0.846820809248555, 0.1531791907514451}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.5098039215686274, 0.49019607843137253}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.6690600522193212, 0.33093994778067887}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[4] <= 1160.0) {
                                            if (input[15] <= 68.0) {
                                                if (input[20] <= 27.0) {
                                                    if (input[5] <= 352.0) {
                                                        if (input[6] <= 0.5) {
                                                            memcpy(var0, (const double[]){0.7838014369693012, 0.2161985630306989}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.534288638689867, 0.4657113613101331}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[6] <= 0.5) {
                                                            if (input[5] <= 992.0) {
                                                                if (input[15] <= 2.0) {
                                                                    if (input[8] <= 234.0) {
                                                                        memcpy(var0, (const double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.04329004329004329, 0.9567099567099567}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.752, 0.248}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6868686868686869, 0.31313131313131315}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.17521902377972465, 0.8247809762202754}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[16] <= -10.0) {
                                                        if (input[15] <= -12.0) {
                                                            memcpy(var0, (const double[]){0.8333333333333334, 0.16666666666666666}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.2476780185758514, 0.7523219814241486}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[17] <= 18.5) {
                                                            memcpy(var0, (const double[]){0.9333333333333333, 0.06666666666666667}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 33.5) {
                                                                if (input[17] <= 32.5) {
                                                                    if (input[17] <= 31.5) {
                                                                        if (input[17] <= 30.5) {
                                                                            if (input[17] <= 29.5) {
                                                                                memcpy(var0, (const double[]){0.48179271708683474, 0.5182072829131653}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.2430939226519337, 0.7569060773480663}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[11] <= 24.5) {
                                                                        memcpy(var0, (const double[]){0.8380952380952381, 0.1619047619047619}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.14285714285714285, 0.8571428571428571}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[17] <= 34.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[17] <= 35.5) {
                                                                        if (input[11] <= 26.5) {
                                                                            memcpy(var0, (const double[]){0.8034188034188035, 0.19658119658119658}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.09302325581395349, 0.9069767441860465}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[17] <= 36.5) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[17] <= 37.5) {
                                                                                if (input[11] <= 29.0) {
                                                                                    memcpy(var0, (const double[]){0.7045454545454546, 0.29545454545454547}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.13114754098360656, 0.8688524590163934}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[17] <= 38.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[17] <= 39.5) {
                                                                                        if (input[11] <= 31.0) {
                                                                                            memcpy(var0, (const double[]){0.6862745098039216, 0.3137254901960784}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.037383177570093455, 0.9626168224299065}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[17] <= 40.5) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[17] <= 41.5) {
                                                                                                if (input[6] <= 0.5) {
                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.5970149253731343, 0.40298507462686567}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[17] <= 42.5) {
                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.6584362139917695, 0.34156378600823045}, 2 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
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
                                                if (input[21] <= 2258.0) {
                                                    memcpy(var0, (const double[]){0.9128668171557562, 0.08713318284424379}, 2 * sizeof(double));
                                                } else {
                                                    if (input[8] <= -374.0) {
                                                        memcpy(var0, (const double[]){0.16267942583732056, 0.8373205741626795}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.5493827160493827, 0.4506172839506173}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[4] <= 3696.0) {
                                                if (input[20] <= 30.5) {
                                                    if (input[5] <= 288.0) {
                                                        if (input[23] <= -195.5) {
                                                            memcpy(var0, (const double[]){0.9857142857142858, 0.014285714285714285}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[5] <= 32.0) {
                                                                memcpy(var0, (const double[]){0.6610738255033557, 0.3389261744966443}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[15] <= -140.0) {
                                                                    if (input[5] <= 160.0) {
                                                                        if (input[8] <= -1830.0) {
                                                                            memcpy(var0, (const double[]){0.8314606741573034, 0.16853932584269662}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.3029045643153527, 0.6970954356846473}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[22] <= 12.0) {
                                                                            memcpy(var0, (const double[]){0.016574585635359115, 0.9834254143646409}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.35294117647058826, 0.6470588235294118}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[17] <= 39.5) {
                                                                        memcpy(var0, (const double[]){0.3723228995057661, 0.627677100494234}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.7483443708609272, 0.25165562913907286}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[4] <= 1840.0) {
                                                            if (input[7] <= 2362.0) {
                                                                if (input[6] <= 0.5) {
                                                                    memcpy(var0, (const double[]){0.5217391304347826, 0.4782608695652174}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[4] <= 1624.0) {
                                                                        memcpy(var0, (const double[]){0.2344186046511628, 0.7655813953488372}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.6534653465346535, 0.3465346534653465}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[14] <= 70.0) {
                                                                if (input[13] <= 1084.0) {
                                                                    if (input[14] <= -2026.0) {
                                                                        memcpy(var0, (const double[]){0.019138755980861243, 0.9808612440191388}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[20] <= 24.5) {
                                                                            memcpy(var0, (const double[]){0.1903323262839879, 0.8096676737160121}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.41368078175895767, 0.5863192182410424}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[4] <= 3544.0) {
                                                                        if (input[20] <= 26.0) {
                                                                            memcpy(var0, (const double[]){0.16666666666666666, 0.8333333333333334}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.8266666666666667, 0.17333333333333334}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9705882352941176, 0.029411764705882353}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[16] <= 308.0) {
                                                                    if (input[0] <= 24.5) {
                                                                        if (input[15] <= 84.0) {
                                                                            memcpy(var0, (const double[]){0.02054054054054054, 0.9794594594594594}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.24, 0.76}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.17094017094017094, 0.8290598290598291}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.39490445859872614, 0.6050955414012739}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[15] <= -366.0) {
                                                        if (input[4] <= 2776.0) {
                                                            memcpy(var0, (const double[]){0.5495327102803739, 0.4504672897196262}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.12222222222222222, 0.8777777777777778}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[4] <= 1264.0) {
                                                            if (input[16] <= -2.0) {
                                                                memcpy(var0, (const double[]){0.061224489795918366, 0.9387755102040817}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6055045871559633, 0.3944954128440367}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7247223845704267, 0.27527761542957335}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[5] <= 608.0) {
                                                    memcpy(var0, (const double[]){0.9803921568627451, 0.0196078431372549}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.48, 0.52}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[21] <= 1436.5) {
                                if (input[17] <= 41.5) {
                                    if (input[17] <= 24.5) {
                                        memcpy(var0, (const double[]){0.9805128205128205, 0.019487179487179488}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.8072592396343886, 0.19274076036561133}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[4] <= 2416.0) {
                                        if (input[17] <= 42.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 43.5) {
                                                if (input[11] <= 35.0) {
                                                    memcpy(var0, (const double[]){0.9123711340206185, 0.08762886597938144}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.2764227642276423, 0.7235772357723578}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[11] <= 37.0) {
                                                    memcpy(var0, (const double[]){0.9839357429718876, 0.01606425702811245}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 45.5) {
                                                        memcpy(var0, (const double[]){0.509090909090909, 0.4909090909090909}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9584026622296173, 0.04159733777038269}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[13] <= 1604.0) {
                                            memcpy(var0, (const double[]){0.8795180722891566, 0.12048192771084337}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.6964285714285714, 0.30357142857142855}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[20] <= 24.5) {
                                    memcpy(var0, (const double[]){0.8747152619589977, 0.1252847380410023}, 2 * sizeof(double));
                                } else {
                                    if (input[16] <= -364.0) {
                                        memcpy(var0, (const double[]){0.2364217252396166, 0.7635782747603834}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.6051080550098232, 0.3948919449901768}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[6] <= 2.5) {
                    if (input[12] <= 10.0) {
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
                            if (input[17] <= 18.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[17] <= 19.5) {
                                    if (input[11] <= 10.0) {
                                        if (input[12] <= 8.0) {
                                            if (input[12] <= 3.0) {
                                                if (input[13] <= -60.0) {
                                                    memcpy(var0, (const double[]){0.3779527559055118, 0.6220472440944882}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.09242618741976893, 0.9075738125802311}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[6] <= 0.5) {
                                                    memcpy(var0, (const double[]){0.38613861386138615, 0.6138613861386139}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.7398373983739838, 0.2601626016260163}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.1294615849969752, 0.8705384150030248}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[11] <= 10.0) {
                                        if (input[17] <= 20.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[12] <= 3.0) {
                                                if (input[17] <= 21.5) {
                                                    memcpy(var0, (const double[]){0.3948497854077253, 0.6051502145922747}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 22.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6525911708253359, 0.3474088291746641}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.7560806115357888, 0.24391938846421127}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[17] <= 20.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[15] <= -18.0) {
                                                memcpy(var0, (const double[]){0.2724795640326976, 0.7275204359673024}, 2 * sizeof(double));
                                            } else {
                                                if (input[6] <= 0.5) {
                                                    if (input[17] <= 21.5) {
                                                        memcpy(var0, (const double[]){0.08768267223382047, 0.9123173277661796}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[0] <= 24.5) {
                                                            memcpy(var0, (const double[]){0.5496009122006842, 0.45039908779931587}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.33171127331711275, 0.6682887266828873}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.5, 0.5}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[20] <= 38.0) {
                            if (input[17] <= 23.5) {
                                memcpy(var0, (const double[]){0.20860927152317882, 0.7913907284768212}, 2 * sizeof(double));
                            } else {
                                if (input[17] <= 24.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[11] <= 12.0) {
                                        if (input[17] <= 25.5) {
                                            memcpy(var0, (const double[]){0.40298507462686567, 0.5970149253731343}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.7107843137254902, 0.28921568627450983}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[17] <= 41.5) {
                                            memcpy(var0, (const double[]){0.2936906756002233, 0.7063093243997767}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.6262626262626263, 0.37373737373737376}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[6] <= 0.5) {
                                if (input[0] <= 34.5) {
                                    if (input[17] <= 43.5) {
                                        memcpy(var0, (const double[]){0.15666456096020215, 0.8433354390397979}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.4690265486725664, 0.5309734513274337}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[13] <= 24.0) {
                                    memcpy(var0, (const double[]){0.2562628336755647, 0.7437371663244353}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.11328671328671329, 0.8867132867132868}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[20] <= 44.0) {
                        if (input[17] <= 33.5) {
                            if (input[17] <= 19.5) {
                                memcpy(var0, (const double[]){0.019029495718363463, 0.9809705042816366}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.139839333531687, 0.860160666468313}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[16] <= -60.0) {
                                memcpy(var0, (const double[]){0.19133034379671152, 0.8086696562032885}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.4069364161849711, 0.5930635838150289}, 2 * sizeof(double));
                            }
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
