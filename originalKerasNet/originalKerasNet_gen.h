/*
 *  Copyright 2018 Digital Media Professionals Inc.

 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at

 *      http://www.apache.org/licenses/LICENSE-2.0

 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.

 *  This source code was generated using DMP-DV700 tools.
 */
#pragma once

#include "dmp_network.h"

class CoriginalKerasNet : public CDMP_Network {
 private:
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 0 | FPGA-Layer | Convolution | (224, 224, 3) | (112, 112, 32) | - | - |
  | 0-0 | conv1 | Convolution | (224, 224, 3) | (112, 112, 32) | - | 4672 |

  */
  void Layer_0();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 1 | FPGA-Layer | Convolution | (112, 112, 32) | (112, 112, 32) | - | - |
  | 1-0 | conv_dw_1 | Convolution | (112, 112, 32) | (112, 112, 32) | - | 4672 |

  */
  void Layer_1();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 2 | FPGA-Layer | Convolution | (112, 112, 32) | (112, 112, 64) | - | - |
  | 2-0 | conv_pw_1 | Convolution | (112, 112, 32) | (112, 112, 64) | - | 9344 |

  */
  void Layer_2();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 3 | FPGA-Layer | Convolution | (112, 112, 64) | (56, 56, 64) | - | - |
  | 3-0 | conv_dw_2 | Convolution | (112, 112, 64) | (56, 56, 64) | - | 9344 |

  */
  void Layer_3();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 4 | FPGA-Layer | Convolution | (56, 56, 64) | (56, 56, 128) | - | - |
  | 4-0 | conv_pw_2 | Convolution | (56, 56, 64) | (56, 56, 128) | - | 18688 |

  */
  void Layer_4();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 5 | FPGA-Layer | Convolution | (56, 56, 128) | (56, 56, 128) | - | - |
  | 5-0 | conv_dw_3 | Convolution | (56, 56, 128) | (56, 56, 128) | - | 18688 |

  */
  void Layer_5();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 6 | FPGA-Layer | Convolution | (56, 56, 128) | (56, 56, 128) | - | - |
  | 6-0 | conv_pw_3 | Convolution | (56, 56, 128) | (56, 56, 128) | - | 37120 |

  */
  void Layer_6();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 7 | FPGA-Layer | Convolution | (56, 56, 128) | (28, 28, 128) | - | - |
  | 7-0 | conv_dw_4 | Convolution | (56, 56, 128) | (28, 28, 128) | - | 18688 |

  */
  void Layer_7();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 8 | FPGA-Layer | Convolution | (28, 28, 128) | (28, 28, 256) | - | - |
  | 8-0 | conv_pw_4 | Convolution | (28, 28, 128) | (28, 28, 256) | - | 74240 |

  */
  void Layer_8();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 9 | FPGA-Layer | Convolution | (28, 28, 256) | (28, 28, 256) | - | - |
  | 9-0 | conv_dw_5 | Convolution | (28, 28, 256) | (28, 28, 256) | - | 37376 |

  */
  void Layer_9();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 10 | FPGA-Layer | Convolution | (28, 28, 256) | (28, 28, 256) | - | - |
  | 10-0 | conv_pw_5 | Convolution | (28, 28, 256) | (28, 28, 256) | - | 147968 |

  */
  void Layer_10();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 11 | FPGA-Layer | Convolution | (28, 28, 256) | (14, 14, 256) | - | - |
  | 11-0 | conv_dw_6 | Convolution | (28, 28, 256) | (14, 14, 256) | - | 37376 |

  */
  void Layer_11();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 12 | FPGA-Layer | Convolution | (14, 14, 256) | (14, 14, 512) | - | - |
  | 12-0 | conv_pw_6 | Convolution | (14, 14, 256) | (14, 14, 512) | - | 295936 |

  */
  void Layer_12();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 13 | FPGA-Layer | Convolution | (14, 14, 512) | (14, 14, 512) | - | - |
  | 13-0 | conv_dw_7 | Convolution | (14, 14, 512) | (14, 14, 512) | - | 74752 |

  */
  void Layer_13();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 14 | FPGA-Layer | Convolution | (14, 14, 512) | (14, 14, 512) | - | - |
  | 14-0 | conv_pw_7 | Convolution | (14, 14, 512) | (14, 14, 512) | - | 590848 |

  */
  void Layer_14();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 15 | FPGA-Layer | Convolution | (14, 14, 512) | (14, 14, 512) | - | - |
  | 15-0 | conv_dw_8 | Convolution | (14, 14, 512) | (14, 14, 512) | - | 74752 |

  */
  void Layer_15();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 16 | FPGA-Layer | Convolution | (14, 14, 512) | (14, 14, 512) | - | - |
  | 16-0 | conv_pw_8 | Convolution | (14, 14, 512) | (14, 14, 512) | - | 590848 |

  */
  void Layer_16();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 17 | FPGA-Layer | Convolution | (14, 14, 512) | (14, 14, 512) | - | - |
  | 17-0 | conv_dw_9 | Convolution | (14, 14, 512) | (14, 14, 512) | - | 74752 |

  */
  void Layer_17();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 18 | FPGA-Layer | Convolution | (14, 14, 512) | (14, 14, 512) | - | - |
  | 18-0 | conv_pw_9 | Convolution | (14, 14, 512) | (14, 14, 512) | - | 590848 |

  */
  void Layer_18();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 19 | FPGA-Layer | Convolution | (14, 14, 512) | (14, 14, 512) | - | - |
  | 19-0 | conv_dw_10 | Convolution | (14, 14, 512) | (14, 14, 512) | - | 74752 |

  */
  void Layer_19();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 20 | FPGA-Layer | Convolution | (14, 14, 512) | (14, 14, 512) | - | - |
  | 20-0 | conv_pw_10 | Convolution | (14, 14, 512) | (14, 14, 512) | - | 590848 |

  */
  void Layer_20();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 21 | FPGA-Layer | Convolution | (14, 14, 512) | (14, 14, 512) | - | - |
  | 21-0 | conv_dw_11 | Convolution | (14, 14, 512) | (14, 14, 512) | - | 74752 |

  */
  void Layer_21();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 22 | FPGA-Layer | Convolution | (14, 14, 512) | (14, 14, 512) | - | - |
  | 22-0 | conv_pw_11 | Convolution | (14, 14, 512) | (14, 14, 512) | - | 590848 |

  */
  void Layer_22();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 23 | FPGA-Layer | Convolution | (14, 14, 512) | (7, 7, 512) | - | - |
  | 23-0 | conv_dw_12 | Convolution | (14, 14, 512) | (7, 7, 512) | - | 74752 |

  */
  void Layer_23();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 24 | FPGA-Layer | Convolution | (7, 7, 512) | (7, 7, 1024) | - | - |
  | 24-0 | conv_pw_12 | Convolution | (7, 7, 512) | (7, 7, 1024) | - | 1181696 |

  */
  void Layer_24();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 25 | FPGA-Layer | Convolution | (7, 7, 1024) | (7, 7, 1024) | - | - |
  | 25-0 | conv_dw_13 | Convolution | (7, 7, 1024) | (7, 7, 1024) | - | 149504 |

  */
  void Layer_25();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 26 | FPGA-Layer | Convolution | (7, 7, 1024) | (3, 3, 1024) | - | - |
  | 26-0 | conv_pw_13 | Convolution | (7, 7, 1024) | (7, 7, 1024) | - | 2361344 |
  | 26-0 | max_pooling2d_1 | Pooling | (7, 7, 1024) | (3, 3, 1024) | - | - |

  */
  void Layer_26();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 27 | FPGA-Layer | Flatten | (3, 3, 1024) | (9216,) | - | - |

  */
  void Layer_27();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 28 | FPGA-Layer | Convolution | (1, 1, 9216) | (1, 1, 512) | - | - |
  | 28-0 | dense_1 | InnerProduct | (1, 1, 9216) | (1, 1, 512) | - | 10617856 |

  */
  void Layer_28();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 29 | FPGA-Layer | Convolution | (1, 1, 512) | (1, 1, 512) | - | - |
  | 29-0 | dense_2 | InnerProduct | (1, 1, 512) | (1, 1, 512) | - | 590848 |

  */
  void Layer_29();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 30 | FPGA-Layer | Convolution | (1, 1, 512) | (1, 1, 2) | - | - |
  | 30-0 | dense_3 | InnerProduct | (1, 1, 512) | (1, 1, 2) | - | 2320 |

  */
  void Layer_30();
  /*!

  Layer description

  | ID | Layers | Type | Dim In | Dim Out | Param | Mem |
  | :- | :- | :-: | :-: | :-: | :-: | :-: |
  | 31 | FPGA-Layer | SoftMax | (1, 1, 2) | (1, 1, 2) | - | - |

  */
  void Layer_31();

 public:
  virtual bool Initialize();
  CoriginalKerasNet();
  virtual ~CoriginalKerasNet();
};
