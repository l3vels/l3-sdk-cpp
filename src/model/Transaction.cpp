/**
 * L3vels Api
 * L3vels API for Game developers
 *
 * The version of the OpenAPI document: 0.3
 * Contact: support@l3vels.xyz
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.5.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/Transaction.h"

namespace models {



Transaction::Transaction()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Status = utility::conversions::to_string_t("");
    m_StatusIsSet = false;
    m_From = utility::conversions::to_string_t("");
    m_FromIsSet = false;
    m_To = utility::conversions::to_string_t("");
    m_ToIsSet = false;
    m_Contract_id = utility::conversions::to_string_t("");
    m_Contract_idIsSet = false;
    m_Contract_address = utility::conversions::to_string_t("");
    m_Contract_addressIsSet = false;
    m_Blockchain = utility::conversions::to_string_t("");
    m_BlockchainIsSet = false;
    m_Chain_name = utility::conversions::to_string_t("");
    m_Chain_nameIsSet = false;
    m_Chain_id = 0.0;
    m_Chain_idIsSet = false;
    m_Environment = utility::conversions::to_string_t("");
    m_EnvironmentIsSet = false;
    m_Transaction_hash = utility::conversions::to_string_t("");
    m_Transaction_hashIsSet = false;
    m_Block_number = 0.0;
    m_Block_numberIsSet = false;
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
    m_Method = utility::conversions::to_string_t("");
    m_MethodIsSet = false;
    m_EventsIsSet = false;
    m_Game_id = utility::conversions::to_string_t("");
    m_Game_idIsSet = false;
    m_Collection_id = utility::conversions::to_string_t("");
    m_Collection_idIsSet = false;
    m_Account_id = utility::conversions::to_string_t("");
    m_Account_idIsSet = false;
    m_Created_on = utility::datetime();
    m_Created_onIsSet = false;
    m_Modified_on = utility::datetime();
    m_Modified_onIsSet = false;
    m_Created_by = utility::conversions::to_string_t("");
    m_Created_byIsSet = false;
    m_Modified_by = utility::conversions::to_string_t("");
    m_Modified_byIsSet = false;
}

Transaction::~Transaction()
{
}

void Transaction::validate()
{
    // TODO: implement validation
}

web::json::value Transaction::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t(U("status"))] = ModelBase::toJson(m_Status);
    }
    if(m_FromIsSet)
    {
        val[utility::conversions::to_string_t(U("from"))] = ModelBase::toJson(m_From);
    }
    if(m_ToIsSet)
    {
        val[utility::conversions::to_string_t(U("to"))] = ModelBase::toJson(m_To);
    }
    if(m_Contract_idIsSet)
    {
        val[utility::conversions::to_string_t(U("contract_id"))] = ModelBase::toJson(m_Contract_id);
    }
    if(m_Contract_addressIsSet)
    {
        val[utility::conversions::to_string_t(U("contract_address"))] = ModelBase::toJson(m_Contract_address);
    }
    if(m_BlockchainIsSet)
    {
        val[utility::conversions::to_string_t(U("blockchain"))] = ModelBase::toJson(m_Blockchain);
    }
    if(m_Chain_nameIsSet)
    {
        val[utility::conversions::to_string_t(U("chain_name"))] = ModelBase::toJson(m_Chain_name);
    }
    if(m_Chain_idIsSet)
    {
        val[utility::conversions::to_string_t(U("chain_id"))] = ModelBase::toJson(m_Chain_id);
    }
    if(m_EnvironmentIsSet)
    {
        val[utility::conversions::to_string_t(U("environment"))] = ModelBase::toJson(m_Environment);
    }
    if(m_Transaction_hashIsSet)
    {
        val[utility::conversions::to_string_t(U("transaction_hash"))] = ModelBase::toJson(m_Transaction_hash);
    }
    if(m_Block_numberIsSet)
    {
        val[utility::conversions::to_string_t(U("block_number"))] = ModelBase::toJson(m_Block_number);
    }
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t(U("type"))] = ModelBase::toJson(m_Type);
    }
    if(m_MethodIsSet)
    {
        val[utility::conversions::to_string_t(U("method"))] = ModelBase::toJson(m_Method);
    }
    if(m_EventsIsSet)
    {
        val[utility::conversions::to_string_t(U("events"))] = ModelBase::toJson(m_Events);
    }
    if(m_Game_idIsSet)
    {
        val[utility::conversions::to_string_t(U("game_id"))] = ModelBase::toJson(m_Game_id);
    }
    if(m_Collection_idIsSet)
    {
        val[utility::conversions::to_string_t(U("collection_id"))] = ModelBase::toJson(m_Collection_id);
    }
    if(m_Account_idIsSet)
    {
        val[utility::conversions::to_string_t(U("account_id"))] = ModelBase::toJson(m_Account_id);
    }
    if(m_Created_onIsSet)
    {
        val[utility::conversions::to_string_t(U("created_on"))] = ModelBase::toJson(m_Created_on);
    }
    if(m_Modified_onIsSet)
    {
        val[utility::conversions::to_string_t(U("modified_on"))] = ModelBase::toJson(m_Modified_on);
    }
    if(m_Created_byIsSet)
    {
        val[utility::conversions::to_string_t(U("created_by"))] = ModelBase::toJson(m_Created_by);
    }
    if(m_Modified_byIsSet)
    {
        val[utility::conversions::to_string_t(U("modified_by"))] = ModelBase::toJson(m_Modified_by);
    }

    return val;
}

bool Transaction::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setId);
            setId(refVal_setId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("status")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStatus);
            setStatus(refVal_setStatus);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("from"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("from")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setFrom;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFrom);
            setFrom(refVal_setFrom);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("to"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("to")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setTo;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTo);
            setTo(refVal_setTo);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("contract_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("contract_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setContractId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setContractId);
            setContractId(refVal_setContractId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("contract_address"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("contract_address")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setContractAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_setContractAddress);
            setContractAddress(refVal_setContractAddress);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("blockchain"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("blockchain")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setBlockchain;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBlockchain);
            setBlockchain(refVal_setBlockchain);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("chain_name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("chain_name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setChainName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setChainName);
            setChainName(refVal_setChainName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("chain_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("chain_id")));
        if(!fieldValue.is_null())
        {
            double refVal_setChainId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setChainId);
            setChainId(refVal_setChainId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("environment"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("environment")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setEnvironment;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEnvironment);
            setEnvironment(refVal_setEnvironment);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("transaction_hash"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("transaction_hash")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setTransactionHash;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTransactionHash);
            setTransactionHash(refVal_setTransactionHash);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("block_number"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("block_number")));
        if(!fieldValue.is_null())
        {
            double refVal_setBlockNumber;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBlockNumber);
            setBlockNumber(refVal_setBlockNumber);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setType);
            setType(refVal_setType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("method"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("method")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setMethod;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMethod);
            setMethod(refVal_setMethod);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("events"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("events")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setEvents;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEvents);
            setEvents(refVal_setEvents);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("game_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("game_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setGameId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGameId);
            setGameId(refVal_setGameId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("collection_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("collection_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCollectionId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCollectionId);
            setCollectionId(refVal_setCollectionId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("account_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("account_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAccountId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAccountId);
            setAccountId(refVal_setAccountId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("created_on"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("created_on")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setCreatedOn;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCreatedOn);
            setCreatedOn(refVal_setCreatedOn);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("modified_on"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("modified_on")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setModifiedOn;
            ok &= ModelBase::fromJson(fieldValue, refVal_setModifiedOn);
            setModifiedOn(refVal_setModifiedOn);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("created_by"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("created_by")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCreatedBy;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCreatedBy);
            setCreatedBy(refVal_setCreatedBy);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("modified_by"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("modified_by")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setModifiedBy;
            ok &= ModelBase::fromJson(fieldValue, refVal_setModifiedBy);
            setModifiedBy(refVal_setModifiedBy);
        }
    }
    return ok;
}

void Transaction::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("status")), m_Status));
    }
    if(m_FromIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("from")), m_From));
    }
    if(m_ToIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("to")), m_To));
    }
    if(m_Contract_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("contract_id")), m_Contract_id));
    }
    if(m_Contract_addressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("contract_address")), m_Contract_address));
    }
    if(m_BlockchainIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("blockchain")), m_Blockchain));
    }
    if(m_Chain_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("chain_name")), m_Chain_name));
    }
    if(m_Chain_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("chain_id")), m_Chain_id));
    }
    if(m_EnvironmentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("environment")), m_Environment));
    }
    if(m_Transaction_hashIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("transaction_hash")), m_Transaction_hash));
    }
    if(m_Block_numberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("block_number")), m_Block_number));
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("type")), m_Type));
    }
    if(m_MethodIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("method")), m_Method));
    }
    if(m_EventsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("events")), m_Events));
    }
    if(m_Game_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("game_id")), m_Game_id));
    }
    if(m_Collection_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("collection_id")), m_Collection_id));
    }
    if(m_Account_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("account_id")), m_Account_id));
    }
    if(m_Created_onIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("created_on")), m_Created_on));
    }
    if(m_Modified_onIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("modified_on")), m_Modified_on));
    }
    if(m_Created_byIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("created_by")), m_Created_by));
    }
    if(m_Modified_byIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("modified_by")), m_Modified_by));
    }
}

bool Transaction::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("status"))))
    {
        utility::string_t refVal_setStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("status"))), refVal_setStatus );
        setStatus(refVal_setStatus);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("from"))))
    {
        utility::string_t refVal_setFrom;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("from"))), refVal_setFrom );
        setFrom(refVal_setFrom);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("to"))))
    {
        utility::string_t refVal_setTo;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("to"))), refVal_setTo );
        setTo(refVal_setTo);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("contract_id"))))
    {
        utility::string_t refVal_setContractId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("contract_id"))), refVal_setContractId );
        setContractId(refVal_setContractId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("contract_address"))))
    {
        utility::string_t refVal_setContractAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("contract_address"))), refVal_setContractAddress );
        setContractAddress(refVal_setContractAddress);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("blockchain"))))
    {
        utility::string_t refVal_setBlockchain;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("blockchain"))), refVal_setBlockchain );
        setBlockchain(refVal_setBlockchain);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("chain_name"))))
    {
        utility::string_t refVal_setChainName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("chain_name"))), refVal_setChainName );
        setChainName(refVal_setChainName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("chain_id"))))
    {
        double refVal_setChainId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("chain_id"))), refVal_setChainId );
        setChainId(refVal_setChainId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("environment"))))
    {
        utility::string_t refVal_setEnvironment;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("environment"))), refVal_setEnvironment );
        setEnvironment(refVal_setEnvironment);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("transaction_hash"))))
    {
        utility::string_t refVal_setTransactionHash;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("transaction_hash"))), refVal_setTransactionHash );
        setTransactionHash(refVal_setTransactionHash);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("block_number"))))
    {
        double refVal_setBlockNumber;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("block_number"))), refVal_setBlockNumber );
        setBlockNumber(refVal_setBlockNumber);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("type"))))
    {
        utility::string_t refVal_setType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("type"))), refVal_setType );
        setType(refVal_setType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("method"))))
    {
        utility::string_t refVal_setMethod;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("method"))), refVal_setMethod );
        setMethod(refVal_setMethod);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("events"))))
    {
        std::vector<utility::string_t> refVal_setEvents;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("events"))), refVal_setEvents );
        setEvents(refVal_setEvents);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("game_id"))))
    {
        utility::string_t refVal_setGameId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("game_id"))), refVal_setGameId );
        setGameId(refVal_setGameId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("collection_id"))))
    {
        utility::string_t refVal_setCollectionId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("collection_id"))), refVal_setCollectionId );
        setCollectionId(refVal_setCollectionId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("account_id"))))
    {
        utility::string_t refVal_setAccountId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("account_id"))), refVal_setAccountId );
        setAccountId(refVal_setAccountId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("created_on"))))
    {
        utility::datetime refVal_setCreatedOn;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("created_on"))), refVal_setCreatedOn );
        setCreatedOn(refVal_setCreatedOn);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("modified_on"))))
    {
        utility::datetime refVal_setModifiedOn;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("modified_on"))), refVal_setModifiedOn );
        setModifiedOn(refVal_setModifiedOn);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("created_by"))))
    {
        utility::string_t refVal_setCreatedBy;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("created_by"))), refVal_setCreatedBy );
        setCreatedBy(refVal_setCreatedBy);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("modified_by"))))
    {
        utility::string_t refVal_setModifiedBy;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("modified_by"))), refVal_setModifiedBy );
        setModifiedBy(refVal_setModifiedBy);
    }
    return ok;
}

utility::string_t Transaction::getId() const
{
    return m_Id;
}

void Transaction::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Transaction::idIsSet() const
{
    return m_IdIsSet;
}

void Transaction::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t Transaction::getStatus() const
{
    return m_Status;
}

void Transaction::setStatus(const utility::string_t& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool Transaction::statusIsSet() const
{
    return m_StatusIsSet;
}

void Transaction::unsetStatus()
{
    m_StatusIsSet = false;
}
utility::string_t Transaction::getFrom() const
{
    return m_From;
}

void Transaction::setFrom(const utility::string_t& value)
{
    m_From = value;
    m_FromIsSet = true;
}

bool Transaction::fromIsSet() const
{
    return m_FromIsSet;
}

void Transaction::unsetFrom()
{
    m_FromIsSet = false;
}
utility::string_t Transaction::getTo() const
{
    return m_To;
}

void Transaction::setTo(const utility::string_t& value)
{
    m_To = value;
    m_ToIsSet = true;
}

bool Transaction::toIsSet() const
{
    return m_ToIsSet;
}

void Transaction::unsetTo()
{
    m_ToIsSet = false;
}
utility::string_t Transaction::getContractId() const
{
    return m_Contract_id;
}

void Transaction::setContractId(const utility::string_t& value)
{
    m_Contract_id = value;
    m_Contract_idIsSet = true;
}

bool Transaction::contractIdIsSet() const
{
    return m_Contract_idIsSet;
}

void Transaction::unsetContract_id()
{
    m_Contract_idIsSet = false;
}
utility::string_t Transaction::getContractAddress() const
{
    return m_Contract_address;
}

void Transaction::setContractAddress(const utility::string_t& value)
{
    m_Contract_address = value;
    m_Contract_addressIsSet = true;
}

bool Transaction::contractAddressIsSet() const
{
    return m_Contract_addressIsSet;
}

void Transaction::unsetContract_address()
{
    m_Contract_addressIsSet = false;
}
utility::string_t Transaction::getBlockchain() const
{
    return m_Blockchain;
}

void Transaction::setBlockchain(const utility::string_t& value)
{
    m_Blockchain = value;
    m_BlockchainIsSet = true;
}

bool Transaction::blockchainIsSet() const
{
    return m_BlockchainIsSet;
}

void Transaction::unsetBlockchain()
{
    m_BlockchainIsSet = false;
}
utility::string_t Transaction::getChainName() const
{
    return m_Chain_name;
}

void Transaction::setChainName(const utility::string_t& value)
{
    m_Chain_name = value;
    m_Chain_nameIsSet = true;
}

bool Transaction::chainNameIsSet() const
{
    return m_Chain_nameIsSet;
}

void Transaction::unsetChain_name()
{
    m_Chain_nameIsSet = false;
}
double Transaction::getChainId() const
{
    return m_Chain_id;
}

void Transaction::setChainId(double value)
{
    m_Chain_id = value;
    m_Chain_idIsSet = true;
}

bool Transaction::chainIdIsSet() const
{
    return m_Chain_idIsSet;
}

void Transaction::unsetChain_id()
{
    m_Chain_idIsSet = false;
}
utility::string_t Transaction::getEnvironment() const
{
    return m_Environment;
}

void Transaction::setEnvironment(const utility::string_t& value)
{
    m_Environment = value;
    m_EnvironmentIsSet = true;
}

bool Transaction::environmentIsSet() const
{
    return m_EnvironmentIsSet;
}

void Transaction::unsetEnvironment()
{
    m_EnvironmentIsSet = false;
}
utility::string_t Transaction::getTransactionHash() const
{
    return m_Transaction_hash;
}

void Transaction::setTransactionHash(const utility::string_t& value)
{
    m_Transaction_hash = value;
    m_Transaction_hashIsSet = true;
}

bool Transaction::transactionHashIsSet() const
{
    return m_Transaction_hashIsSet;
}

void Transaction::unsetTransaction_hash()
{
    m_Transaction_hashIsSet = false;
}
double Transaction::getBlockNumber() const
{
    return m_Block_number;
}

void Transaction::setBlockNumber(double value)
{
    m_Block_number = value;
    m_Block_numberIsSet = true;
}

bool Transaction::blockNumberIsSet() const
{
    return m_Block_numberIsSet;
}

void Transaction::unsetBlock_number()
{
    m_Block_numberIsSet = false;
}
utility::string_t Transaction::getType() const
{
    return m_Type;
}

void Transaction::setType(const utility::string_t& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool Transaction::typeIsSet() const
{
    return m_TypeIsSet;
}

void Transaction::unsetType()
{
    m_TypeIsSet = false;
}
utility::string_t Transaction::getMethod() const
{
    return m_Method;
}

void Transaction::setMethod(const utility::string_t& value)
{
    m_Method = value;
    m_MethodIsSet = true;
}

bool Transaction::methodIsSet() const
{
    return m_MethodIsSet;
}

void Transaction::unsetMethod()
{
    m_MethodIsSet = false;
}
std::vector<utility::string_t>& Transaction::getEvents()
{
    return m_Events;
}

void Transaction::setEvents(const std::vector<utility::string_t>& value)
{
    m_Events = value;
    m_EventsIsSet = true;
}

bool Transaction::eventsIsSet() const
{
    return m_EventsIsSet;
}

void Transaction::unsetEvents()
{
    m_EventsIsSet = false;
}
utility::string_t Transaction::getGameId() const
{
    return m_Game_id;
}

void Transaction::setGameId(const utility::string_t& value)
{
    m_Game_id = value;
    m_Game_idIsSet = true;
}

bool Transaction::gameIdIsSet() const
{
    return m_Game_idIsSet;
}

void Transaction::unsetGame_id()
{
    m_Game_idIsSet = false;
}
utility::string_t Transaction::getCollectionId() const
{
    return m_Collection_id;
}

void Transaction::setCollectionId(const utility::string_t& value)
{
    m_Collection_id = value;
    m_Collection_idIsSet = true;
}

bool Transaction::collectionIdIsSet() const
{
    return m_Collection_idIsSet;
}

void Transaction::unsetCollection_id()
{
    m_Collection_idIsSet = false;
}
utility::string_t Transaction::getAccountId() const
{
    return m_Account_id;
}

void Transaction::setAccountId(const utility::string_t& value)
{
    m_Account_id = value;
    m_Account_idIsSet = true;
}

bool Transaction::accountIdIsSet() const
{
    return m_Account_idIsSet;
}

void Transaction::unsetAccount_id()
{
    m_Account_idIsSet = false;
}
utility::datetime Transaction::getCreatedOn() const
{
    return m_Created_on;
}

void Transaction::setCreatedOn(const utility::datetime& value)
{
    m_Created_on = value;
    m_Created_onIsSet = true;
}

bool Transaction::createdOnIsSet() const
{
    return m_Created_onIsSet;
}

void Transaction::unsetCreated_on()
{
    m_Created_onIsSet = false;
}
utility::datetime Transaction::getModifiedOn() const
{
    return m_Modified_on;
}

void Transaction::setModifiedOn(const utility::datetime& value)
{
    m_Modified_on = value;
    m_Modified_onIsSet = true;
}

bool Transaction::modifiedOnIsSet() const
{
    return m_Modified_onIsSet;
}

void Transaction::unsetModified_on()
{
    m_Modified_onIsSet = false;
}
utility::string_t Transaction::getCreatedBy() const
{
    return m_Created_by;
}

void Transaction::setCreatedBy(const utility::string_t& value)
{
    m_Created_by = value;
    m_Created_byIsSet = true;
}

bool Transaction::createdByIsSet() const
{
    return m_Created_byIsSet;
}

void Transaction::unsetCreated_by()
{
    m_Created_byIsSet = false;
}
utility::string_t Transaction::getModifiedBy() const
{
    return m_Modified_by;
}

void Transaction::setModifiedBy(const utility::string_t& value)
{
    m_Modified_by = value;
    m_Modified_byIsSet = true;
}

bool Transaction::modifiedByIsSet() const
{
    return m_Modified_byIsSet;
}

void Transaction::unsetModified_by()
{
    m_Modified_byIsSet = false;
}
}


