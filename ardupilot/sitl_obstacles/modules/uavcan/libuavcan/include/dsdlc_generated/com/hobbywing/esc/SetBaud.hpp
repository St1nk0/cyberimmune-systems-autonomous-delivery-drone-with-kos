/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/user/cyberimmune-systems-autonomous-delivery-drone-with-kos-contest/modules/DroneCAN/DSDL/com/hobbywing/esc/211.SetBaud.uavcan
 */

#ifndef COM_HOBBYWING_ESC_SETBAUD_HPP_INCLUDED
#define COM_HOBBYWING_ESC_SETBAUD_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
OVERRIDE_SIGNATURE 0xada98653b52de435

uint8 BAUD_1MBPS = 0
uint8 BAUD_500KBPS = 1
uint8 BAUD_250KBPS = 2
uint8 BAUD_200KBPS = 3
uint8 BAUD_100KBPS = 4
uint8 BAUD_50KBPS = 5
uint8 baud

---
******************************************************************************/

/********************* DSDL signature source definition ***********************
com.hobbywing.esc.SetBaud
saturated uint8 baud
---
******************************************************************************/

#undef baud
#undef BAUD_1MBPS
#undef BAUD_500KBPS
#undef BAUD_250KBPS
#undef BAUD_200KBPS
#undef BAUD_100KBPS
#undef BAUD_50KBPS

namespace com
{
namespace hobbywing
{
namespace esc
{

struct UAVCAN_EXPORT SetBaud_
{
    template <int _tmpl>
    struct Request_
    {
        typedef const Request_<_tmpl>& ParameterType;
        typedef Request_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > BAUD_1MBPS;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > BAUD_500KBPS;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > BAUD_250KBPS;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > BAUD_200KBPS;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > BAUD_100KBPS;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > BAUD_50KBPS;
        };

        struct FieldTypes
        {
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > baud;
        };

        enum
        {
            MinBitLen
                = FieldTypes::baud::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::baud::MaxBitLen
        };

        // Constants
        static const typename ::uavcan::StorageType< typename ConstantTypes::BAUD_1MBPS >::Type BAUD_1MBPS; // 0
        static const typename ::uavcan::StorageType< typename ConstantTypes::BAUD_500KBPS >::Type BAUD_500KBPS; // 1
        static const typename ::uavcan::StorageType< typename ConstantTypes::BAUD_250KBPS >::Type BAUD_250KBPS; // 2
        static const typename ::uavcan::StorageType< typename ConstantTypes::BAUD_200KBPS >::Type BAUD_200KBPS; // 3
        static const typename ::uavcan::StorageType< typename ConstantTypes::BAUD_100KBPS >::Type BAUD_100KBPS; // 4
        static const typename ::uavcan::StorageType< typename ConstantTypes::BAUD_50KBPS >::Type BAUD_50KBPS; // 5

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::baud >::Type baud;

        Request_()
            : baud()
        {
            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<8 == MaxBitLen>::check();
    #endif
        }

        bool operator==(ParameterType rhs) const;
        bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

        /**
         * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
         * floating point fields at any depth.
         */
        bool isClose(ParameterType rhs) const;

        static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

        static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    };

    template <int _tmpl>
    struct Response_
    {
        typedef const Response_<_tmpl>& ParameterType;
        typedef Response_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
        };

        struct FieldTypes
        {
        };

        enum
        {
            MinBitLen
        };

        enum
        {
            MaxBitLen
        };

        // Constants

        // Fields

        Response_()
        {
            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<0 == MaxBitLen>::check();
    #endif
        }

        bool operator==(ParameterType rhs) const;
        bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

        /**
         * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
         * floating point fields at any depth.
         */
        bool isClose(ParameterType rhs) const;

        static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

        static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    };

    typedef Request_<0> Request;
    typedef Response_<0> Response;

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindService };
    enum { DefaultDataTypeID = 211 };

    static const char* getDataTypeFullName()
    {
        return "com.hobbywing.esc.SetBaud";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

private:
    SetBaud_(); // Don't create objects of this type. Use Request/Response instead.
};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool SetBaud_::Request_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        baud == rhs.baud;
}

template <int _tmpl>
bool SetBaud_::Request_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(baud, rhs.baud);
}

template <int _tmpl>
int SetBaud_::Request_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::baud::encode(self.baud, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int SetBaud_::Request_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::baud::decode(self.baud, codec,  tao_mode);
    return res;
}

template <int _tmpl>
bool SetBaud_::Response_<_tmpl>::operator==(ParameterType rhs) const
{
    (void)rhs;
    return true;
}

template <int _tmpl>
bool SetBaud_::Response_<_tmpl>::isClose(ParameterType rhs) const
{
    (void)rhs;
    return true;
}

template <int _tmpl>
int SetBaud_::Response_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    return res;
}

template <int _tmpl>
int SetBaud_::Response_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    return res;
}

/*
 * Out of line type method definitions
 */
inline ::uavcan::DataTypeSignature SetBaud_::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0xADA98653B52DE435ULL);

    Request::FieldTypes::baud::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

template <int _tmpl>
const typename ::uavcan::StorageType< typename SetBaud_::Request_<_tmpl>::ConstantTypes::BAUD_1MBPS >::Type
    SetBaud_::Request_<_tmpl>::BAUD_1MBPS = 0U; // 0

template <int _tmpl>
const typename ::uavcan::StorageType< typename SetBaud_::Request_<_tmpl>::ConstantTypes::BAUD_500KBPS >::Type
    SetBaud_::Request_<_tmpl>::BAUD_500KBPS = 1U; // 1

template <int _tmpl>
const typename ::uavcan::StorageType< typename SetBaud_::Request_<_tmpl>::ConstantTypes::BAUD_250KBPS >::Type
    SetBaud_::Request_<_tmpl>::BAUD_250KBPS = 2U; // 2

template <int _tmpl>
const typename ::uavcan::StorageType< typename SetBaud_::Request_<_tmpl>::ConstantTypes::BAUD_200KBPS >::Type
    SetBaud_::Request_<_tmpl>::BAUD_200KBPS = 3U; // 3

template <int _tmpl>
const typename ::uavcan::StorageType< typename SetBaud_::Request_<_tmpl>::ConstantTypes::BAUD_100KBPS >::Type
    SetBaud_::Request_<_tmpl>::BAUD_100KBPS = 4U; // 4

template <int _tmpl>
const typename ::uavcan::StorageType< typename SetBaud_::Request_<_tmpl>::ConstantTypes::BAUD_50KBPS >::Type
    SetBaud_::Request_<_tmpl>::BAUD_50KBPS = 5U; // 5

/*
 * Final typedef
 */
typedef SetBaud_ SetBaud;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::com::hobbywing::esc::SetBaud > _uavcan_gdtr_registrator_SetBaud;

}

} // Namespace esc
} // Namespace hobbywing
} // Namespace com

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::com::hobbywing::esc::SetBaud::Request >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::com::hobbywing::esc::SetBaud::Request::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::com::hobbywing::esc::SetBaud::Request >::stream(Stream& s, ::com::hobbywing::esc::SetBaud::Request::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "baud: ";
    YamlStreamer< ::com::hobbywing::esc::SetBaud::Request::FieldTypes::baud >::stream(s, obj.baud, level + 1);
}

template <>
class UAVCAN_EXPORT YamlStreamer< ::com::hobbywing::esc::SetBaud::Response >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::com::hobbywing::esc::SetBaud::Response::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::com::hobbywing::esc::SetBaud::Response >::stream(Stream& s, ::com::hobbywing::esc::SetBaud::Response::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
}

}

namespace com
{
namespace hobbywing
{
namespace esc
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::com::hobbywing::esc::SetBaud::Request::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::com::hobbywing::esc::SetBaud::Request >::stream(s, obj, 0);
    return s;
}

template <typename Stream>
inline Stream& operator<<(Stream& s, ::com::hobbywing::esc::SetBaud::Response::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::com::hobbywing::esc::SetBaud::Response >::stream(s, obj, 0);
    return s;
}

} // Namespace esc
} // Namespace hobbywing
} // Namespace com

#endif // COM_HOBBYWING_ESC_SETBAUD_HPP_INCLUDED