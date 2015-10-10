/* Autogenerated with kurento-module-creator */

#ifndef __HLSCONVERTOR_IMPL_FACTORY_HPP__
#define __HLSCONVERTOR_IMPL_FACTORY_HPP__

#include "HLSConvertorImpl.hpp"
#include "FilterImplFactory.hpp"
#include <MediaObjectImpl.hpp>
#include <boost/property_tree/ptree.hpp>

namespace kurento
{
namespace module
{
namespace hlsconvertor
{

class HLSConvertorImplFactory : public virtual FilterImplFactory
{
public:
  HLSConvertorImplFactory () {};

  virtual std::string getName () const {
    return "HLSConvertor";
  };

private:

  virtual MediaObjectImpl *createObjectPointer (const boost::property_tree::ptree &conf, const Json::Value &params) const;

  MediaObjectImpl *createObject (const boost::property_tree::ptree &conf, std::shared_ptr<MediaPipeline> mediaPipeline) const;
};

} /* hlsconvertor */
} /* module */
} /* kurento */

#endif /*  __HLSCONVERTOR_IMPL_FACTORY_HPP__ */