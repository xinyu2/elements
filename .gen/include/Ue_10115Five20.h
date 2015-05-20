/**                                      -*- mode:C++ -*- */

/***********************         DO NOT EDIT        ******************************
*
* Five2.h - Element header for ULAM
*
**********************************************************************************
* This code is generated by the ULAM programming language compilation system.
*
* The ULAM programming language compilation system is free software:
* you can redistribute it and/or modify it under the terms of the GNU
* General Public License as published by the Free Software
* Foundation, either version 3 of the License, or (at your option)
* any later version.
*
* The ULAM programming language compilation system is distributed in
* the hope that it will be useful, but WITHOUT ANY WARRANTY; without
* even the implied warranty of MERCHANTABILITY or FITNESS FOR A
* PARTICULAR PURPOSE.  See the GNU General Public License for more
* details.
*
* You should have received a copy of the GNU General Public License
* along with the ULAM programming language compilation system
* software.  If not, see <http://www.gnu.org/licenses/>.
*
* @license GPL-3.0+ <http://spdx.org/licenses/GPL-3.0+>
*/

#ifndef UE_10115FIVE20_H
#define UE_10115FIVE20_H

#include "UlamDefs.h"

#include "Ue_10115Five20_Types.h"

namespace MFM { template <class EC> struct Ue_102335Fifth0; }  //FORWARD
namespace MFM { template <class EC, u32 POS> struct Uq_10109211EventWindow0; }  //FORWARD
namespace MFM { template <class EC> struct Ue_10105First0; }  //FORWARD
namespace MFM { template <class EC> struct Ue_10114Five0; }  //FORWARD
namespace MFM { template <class EC> struct Ue_10104Four0; }  //FORWARD
namespace MFM { template <class EC> struct Ue_10106Second0; }  //FORWARD
namespace MFM { template <class EC> struct Ue_10105Third0; }  //FORWARD
namespace MFM { template <class EC, u32 POS> struct Uq_102323C2D0; }  //FORWARD
namespace MFM { template <class EC, u32 POS> struct Uq_1010919AtomUtils0; }  //FORWARD
namespace MFM { template <class EC> struct Ue_10105Empty0; }  //FORWARD

namespace MFM{

  template<class EC>
  class Ue_10115Five20 : public UlamElement<EC>  {
    // Extract short names for parameter types
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };
    typedef BitVector<BPA> BV;


  public:

    static Ue_10115Five20 THE_INSTANCE;

    //! Five2.ulam:8:   Bool xFlip;
    typedef AtomicParameterType<EC, VD::BOOL, 1, 25> Up_Um_5xFlip;

    Ue_10115Five20();
    ~Ue_10115Five20();


    //! Five2.ulam:9:   Bool getFlip(){
    Ui_Ut_10111b Uf_7getFlip(UlamContext<EC>& uc, T& Uv_4self) const;


    //! Five2.ulam:12:   Void setFlip(Bool inFlip){
    void Uf_7setFlip(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10111b Uv_6inFlip) const;


    //! Five2.ulam:16:   Void behave(){
    void Uf_6behave(UlamContext<EC>& uc, T& Uv_4self) const;

    //helper method not called directly
    s32 PositionOfDataMemberType(const char * namearg) const;

    //helper method not called directly
    bool internalCMethodImplementingIs(const T& targ) const;

  };

  template<class EC>
  Ue_10115Five20<EC> Ue_10115Five20<EC>::THE_INSTANCE;

} //MFM

#include "Ue_10115Five20.tcc"

#endif //UE_10115FIVE20_H