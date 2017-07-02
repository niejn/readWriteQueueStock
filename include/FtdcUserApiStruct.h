/////////////////////////////////////////////////////////////////////////
///@system ��һ��������ϵͳ
///@company �Ϻ��ڻ���Ϣ�������޹�˾
///@file FtdcUserApiStruct.h
///@brief �����˿ͻ��˽ӿ�ʹ�õ�ҵ�����ݽṹ
///@history 
///20060106	�Ժ��		�������ļ�
/////////////////////////////////////////////////////////////////////////

#if !defined(_FTDCSTRUCT_H)
#define _FTDCSTRUCT_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "FtdcUserApiDataType.h"

///��Ϣ�ַ�
struct CShfeFtdcDisseminationField
{
	///����ϵ�к�
	TShfeFtdcSequenceSeriesType	SequenceSeries;
	///���к�
	TShfeFtdcSequenceNoType	SequenceNo;
};

///��Ӧ��Ϣ
struct CShfeFtdcRspInfoField
{
	///�������
	TShfeFtdcErrorIDType	ErrorID;
	///������Ϣ
	TShfeFtdcErrorMsgType	ErrorMsg;
};

///ͨѶ�׶�
struct CShfeFtdcCommPhaseField
{
	///������
	TShfeFtdcDateType	TradingDay;
	///ͨѶʱ�κ�
	TShfeFtdcCommPhaseNoType	CommPhaseNo;
};

///������������
struct CShfeFtdcExchangeTradingDayField
{
	///������
	TShfeFtdcDateType	TradingDay;
	///����������
	TShfeFtdcExchangeIDType	ExchangeID;
};

///����Ự
struct CShfeFtdcSettlementSessionField
{
	///������
	TShfeFtdcDateType	TradingDay;
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TShfeFtdcSettlementIDType	SettlementID;
};

///��ǰʱ��
struct CShfeFtdcCurrentTimeField
{
	///��ǰ����
	TShfeFtdcDateType	CurrDate;
	///��ǰʱ��
	TShfeFtdcTimeType	CurrTime;
	///��ǰʱ�䣨���룩
	TShfeFtdcMillisecType	CurrMillisec;
};

///�û���¼����
struct CShfeFtdcReqUserLoginField
{
	///������
	TShfeFtdcDateType	TradingDay;
	///�����û�����
	TShfeFtdcUserIDType	UserID;
	///��Ա����
	TShfeFtdcParticipantIDType	ParticipantID;
	///����
	TShfeFtdcPasswordType	Password;
	///�û��˲�Ʒ��Ϣ
	TShfeFtdcProductInfoType	UserProductInfo;
	///�ӿڶ˲�Ʒ��Ϣ
	TShfeFtdcProductInfoType	InterfaceProductInfo;
	///Э����Ϣ
	TShfeFtdcProtocolInfoType	ProtocolInfo;
	///�������Ĵ���
	TShfeFtdcDataCenterIDType	DataCenterID;
};

///�û���¼Ӧ��
struct CShfeFtdcRspUserLoginField
{
	///������
	TShfeFtdcDateType	TradingDay;
	///��¼�ɹ�ʱ��
	TShfeFtdcTimeType	LoginTime;
	///��󱾵ر�����
	TShfeFtdcOrderLocalIDType	MaxOrderLocalID;
	///�����û�����
	TShfeFtdcUserIDType	UserID;
	///��Ա����
	TShfeFtdcParticipantIDType	ParticipantID;
	///����ϵͳ����
	TShfeFtdcTradingSystemNameType	TradingSystemName;
	///�������Ĵ���
	TShfeFtdcDataCenterIDType	DataCenterID;
	///��Ա˽������ǰ����
	TShfeFtdcSequenceNoType	PrivateFlowSize;
	///����Ա˽������ǰ����
	TShfeFtdcSequenceNoType	UserFlowSize;
};

///�û��ǳ�����
struct CShfeFtdcReqUserLogoutField
{
	///�����û�����
	TShfeFtdcUserIDType	UserID;
	///��Ա����
	TShfeFtdcParticipantIDType	ParticipantID;
};

///�û��ǳ�Ӧ��
struct CShfeFtdcRspUserLogoutField
{
	///�����û�����
	TShfeFtdcUserIDType	UserID;
	///��Ա����
	TShfeFtdcParticipantIDType	ParticipantID;
};

///���뱨��
struct CShfeFtdcInputOrderField
{
	///�������
	TShfeFtdcOrderSysIDType	OrderSysID;
	///��Ա����
	TShfeFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TShfeFtdcClientIDType	ClientID;
	///�����û�����
	TShfeFtdcUserIDType	UserID;
	///��Լ����
	TShfeFtdcInstrumentIDType	InstrumentID;
	///�����۸�����
	TShfeFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TShfeFtdcDirectionType	Direction;
	///��Ͽ�ƽ��־
	TShfeFtdcCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TShfeFtdcCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TShfeFtdcPriceType	LimitPrice;
	///����
	TShfeFtdcVolumeType	VolumeTotalOriginal;
	///��Ч������
	TShfeFtdcTimeConditionType	TimeCondition;
	///GTD����
	TShfeFtdcDateType	GTDDate;
	///�ɽ�������
	TShfeFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TShfeFtdcVolumeType	MinVolume;
	///��������
	TShfeFtdcContingentConditionType	ContingentCondition;
	///ֹ���
	TShfeFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TShfeFtdcForceCloseReasonType	ForceCloseReason;
	///���ر������
	TShfeFtdcOrderLocalIDType	OrderLocalID;
	///�Զ������־
	TShfeFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TShfeFtdcBusinessUnitType	BusinessUnit;
};

///��������
struct CShfeFtdcOrderActionField
{
	///�������
	TShfeFtdcOrderSysIDType	OrderSysID;
	///���ر������
	TShfeFtdcOrderLocalIDType	OrderLocalID;
	///����������־
	TShfeFtdcActionFlagType	ActionFlag;
	///��Ա����
	TShfeFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TShfeFtdcClientIDType	ClientID;
	///�����û�����
	TShfeFtdcUserIDType	UserID;
	///�۸�
	TShfeFtdcPriceType	LimitPrice;
	///�����仯
	TShfeFtdcVolumeType	VolumeChange;
	///�������ر��
	TShfeFtdcOrderLocalIDType	ActionLocalID;
	///ҵ��Ԫ
	TShfeFtdcBusinessUnitType	BusinessUnit;
};

///OTC����
struct CShfeFtdcOTCOrderField
{
	///������
	TShfeFtdcDateType	TradingDay;
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TShfeFtdcSettlementIDType	SettlementID;
	///OTC�������
	TShfeFtdcOTCOrderSysIDType	OTCOrderSysID;
	///��Ա����
	TShfeFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TShfeFtdcClientIDType	ClientID;
	///�����û�����
	TShfeFtdcUserIDType	UserID;
	///��Լ����
	TShfeFtdcInstrumentIDType	InstrumentID;
	///��������
	TShfeFtdcDirectionType	Direction;
	///��ƽ��־
	TShfeFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TShfeFtdcHedgeFlagType	HedgeFlag;
	///�۸�
	TShfeFtdcPriceType	Price;
	///����
	TShfeFtdcVolumeType	Volume;
	///���ַ���Ա����
	TShfeFtdcParticipantIDType	OtherParticipantID;
	///���ַ��ͻ�����
	TShfeFtdcClientIDType	OtherClientID;
	///���ַ������û�����
	TShfeFtdcUserIDType	OtherUserID;
	///���ַ���ƽ��־
	TShfeFtdcOffsetFlagType	OtherOffsetFlag;
	///���ַ��ױ���־
	TShfeFtdcHedgeFlagType	OtherHedgeFlag;
	///����OTC�������
	TShfeFtdcOrderLocalIDType	OTCOrderLocalID;
	///OTC����״̬
	TShfeFtdcOTCOrderStatusType	OTCOrderStatus;
	///����ʱ��
	TShfeFtdcTimeType	InsertTime;
	///����ʱ��
	TShfeFtdcTimeType	CancelTime;
	///�����Ա���
	TShfeFtdcParticipantIDType	ClearingPartID;
	///���ַ������Ա���
	TShfeFtdcParticipantIDType	OtherClearingPartID;
};

///���뱨��
struct CShfeFtdcInputQuoteField
{
	///���۱��
	TShfeFtdcQuoteSysIDType	QuoteSysID;
	///��Ա����
	TShfeFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TShfeFtdcClientIDType	ClientID;
	///�����û�����
	TShfeFtdcUserIDType	UserID;
	///����
	TShfeFtdcVolumeType	Volume;
	///��Լ����
	TShfeFtdcInstrumentIDType	InstrumentID;
	///���ر��۱��
	TShfeFtdcOrderLocalIDType	QuoteLocalID;
	///ҵ��Ԫ
	TShfeFtdcBusinessUnitType	BusinessUnit;
	///����Ͽ�ƽ��־
	TShfeFtdcCombOffsetFlagType	BidCombOffsetFlag;
	///������ױ���־
	TShfeFtdcCombHedgeFlagType	BidCombHedgeFlag;
	///�򷽼۸�
	TShfeFtdcPriceType	BidPrice;
	///������Ͽ�ƽ��־
	TShfeFtdcCombOffsetFlagType	AskCombOffsetFlag;
	///��������ױ���־
	TShfeFtdcCombHedgeFlagType	AskCombHedgeFlag;
	///�����۸�
	TShfeFtdcPriceType	AskPrice;
};

///���۲���
struct CShfeFtdcQuoteActionField
{
	///���۱��
	TShfeFtdcQuoteSysIDType	QuoteSysID;
	///���ر��۱��
	TShfeFtdcOrderLocalIDType	QuoteLocalID;
	///����������־
	TShfeFtdcActionFlagType	ActionFlag;
	///��Ա����
	TShfeFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TShfeFtdcClientIDType	ClientID;
	///�����û�����
	TShfeFtdcUserIDType	UserID;
	///�������ر��
	TShfeFtdcOrderLocalIDType	ActionLocalID;
	///ҵ��Ԫ
	TShfeFtdcBusinessUnitType	BusinessUnit;
};

///����ִ������
struct CShfeFtdcInputExecOrderField
{
	///��Լ���
	TShfeFtdcInstrumentIDType	InstrumentID;
	///��Ա����
	TShfeFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TShfeFtdcClientIDType	ClientID;
	///�����û�����
	TShfeFtdcUserIDType	UserID;
	///����ִ��������
	TShfeFtdcOrderLocalIDType	ExecOrderLocalID;
	///����
	TShfeFtdcVolumeType	Volume;
	///ҵ��Ԫ
	TShfeFtdcBusinessUnitType	BusinessUnit;
};

///ִ���������
struct CShfeFtdcExecOrderActionField
{
	///ִ��������
	TShfeFtdcExecOrderSysIDType	ExecOrderSysID;
	///����ִ��������
	TShfeFtdcOrderLocalIDType	ExecOrderLocalID;
	///����������־
	TShfeFtdcActionFlagType	ActionFlag;
	///��Ա����
	TShfeFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TShfeFtdcClientIDType	ClientID;
	///�����û�����
	TShfeFtdcUserIDType	UserID;
	///�������ر��
	TShfeFtdcOrderLocalIDType	ActionLocalID;
	///ҵ��Ԫ
	TShfeFtdcBusinessUnitType	BusinessUnit;
};

///�û���¼�˳�
struct CShfeFtdcUserLogoutField
{
	///�����û�����
	TShfeFtdcUserIDType	UserID;
	///��Ա����
	TShfeFtdcParticipantIDType	ParticipantID;
};

///�û������޸�
struct CShfeFtdcUserPasswordUpdateField
{
	///�����û�����
	TShfeFtdcUserIDType	UserID;
	///��Ա����
	TShfeFtdcParticipantIDType	ParticipantID;
	///������
	TShfeFtdcPasswordType	OldPassword;
	///������
	TShfeFtdcPasswordType	NewPassword;
};

///����Ǳ���ϱ���
struct CShfeFtdcInputCombOrderField
{
	///��ϱ������
	TShfeFtdcOrderSysIDType	CombOrderSysID;
	///��Ա����
	TShfeFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TShfeFtdcClientIDType	ClientID;
	///�����û�����
	TShfeFtdcUserIDType	UserID;
	///�۸�
	TShfeFtdcPriceType	LimitPrice;
	///����
	TShfeFtdcVolumeType	VolumeTotalOriginal;
	///���ر������
	TShfeFtdcOrderLocalIDType	CombOrderLocalID;
	///ҵ��Ԫ
	TShfeFtdcBusinessUnitType	BusinessUnit;
	///��Լ����1
	TShfeFtdcInstrumentIDType	InstrumentID1;
	///��������1
	TShfeFtdcDirectionType	Direction1;
	///���ȳ���1
	TShfeFtdcLegMultipleType	LegMultiple1;
	///��ƽ��־1
	TShfeFtdcOffsetFlagType	OffsetFlag1;
	///Ͷ���ױ���־1
	TShfeFtdcHedgeFlagType	HedgeFlag1;
	///��Լ����2
	TShfeFtdcInstrumentIDType	InstrumentID2;
	///��������2
	TShfeFtdcDirectionType	Direction2;
	///���ȳ���2
	TShfeFtdcLegMultipleType	LegMultiple2;
	///��ƽ��־2
	TShfeFtdcOffsetFlagType	OffsetFlag2;
	///Ͷ���ױ���־2
	TShfeFtdcHedgeFlagType	HedgeFlag2;
	///��Լ����3
	TShfeFtdcInstrumentIDType	InstrumentID3;
	///��������3
	TShfeFtdcDirectionType	Direction3;
	///���ȳ���3
	TShfeFtdcLegMultipleType	LegMultiple3;
	///��ƽ��־3
	TShfeFtdcOffsetFlagType	OffsetFlag3;
	///Ͷ���ױ���־3
	TShfeFtdcHedgeFlagType	HedgeFlag3;
	///��Լ����4
	TShfeFtdcInstrumentIDType	InstrumentID4;
	///��������4
	TShfeFtdcDirectionType	Direction4;
	///���ȳ���4
	TShfeFtdcLegMultipleType	LegMultiple4;
	///��ƽ��־4
	TShfeFtdcOffsetFlagType	OffsetFlag4;
	///Ͷ���ױ���־4
	TShfeFtdcHedgeFlagType	HedgeFlag4;
};

///ǿ���û��˳�
struct CShfeFtdcForceUserExitField
{
	///��Ա����
	TShfeFtdcParticipantIDType	ParticipantID;
	///�����û�����
	TShfeFtdcUserIDType	UserID;
};

///��Ա�ʽ��ʻ����
struct CShfeFtdcAccountDepositField
{
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
	///�ʽ��˺�
	TShfeFtdcAccountIDType	Account;
	///�����
	TShfeFtdcMoneyType	Deposit;
};

///������ѯ
struct CShfeFtdcQryOrderField
{
	///��ʼ��Ա����
	TShfeFtdcParticipantIDType	PartIDStart;
	///������Ա����
	TShfeFtdcParticipantIDType	PartIDEnd;
	///�������
	TShfeFtdcOrderSysIDType	OrderSysID;
	///��Լ����
	TShfeFtdcInstrumentIDType	InstrumentID;
	///�ͻ�����
	TShfeFtdcClientIDType	ClientID;
	///�����û�����
	TShfeFtdcUserIDType	UserID;
	///��ʼʱ��
	TShfeFtdcTimeType	TimeStart;
	///����ʱ��
	TShfeFtdcTimeType	TimeEnd;
};

///���۲�ѯ
struct CShfeFtdcQryQuoteField
{
	///��ʼ��Ա����
	TShfeFtdcParticipantIDType	PartIDStart;
	///������Ա����
	TShfeFtdcParticipantIDType	PartIDEnd;
	///���۱��
	TShfeFtdcQuoteSysIDType	QuoteSysID;
	///�ͻ�����
	TShfeFtdcClientIDType	ClientID;
	///��Լ����
	TShfeFtdcInstrumentIDType	InstrumentID;
	///�����û�����
	TShfeFtdcUserIDType	UserID;
};

///�ɽ���ѯ
struct CShfeFtdcQryTradeField
{
	///��ʼ��Ա����
	TShfeFtdcParticipantIDType	PartIDStart;
	///������Ա����
	TShfeFtdcParticipantIDType	PartIDEnd;
	///��ʼ��Լ����
	TShfeFtdcInstrumentIDType	InstIDStart;
	///������Լ����
	TShfeFtdcInstrumentIDType	InstIDEnd;
	///�ɽ����
	TShfeFtdcTradeIDType	TradeID;
	///�ͻ�����
	TShfeFtdcClientIDType	ClientID;
	///�����û�����
	TShfeFtdcUserIDType	UserID;
	///��ʼʱ��
	TShfeFtdcTimeType	TimeStart;
	///����ʱ��
	TShfeFtdcTimeType	TimeEnd;
};

///�����ѯ
struct CShfeFtdcQryMarketDataField
{
	///��Ʒ����
	TShfeFtdcProductIDType	ProductID;
	///��Լ����
	TShfeFtdcInstrumentIDType	InstrumentID;
};

///�ͻ���ѯ
struct CShfeFtdcQryClientField
{
	///��ʼ��Ա����
	TShfeFtdcParticipantIDType	PartIDStart;
	///������Ա����
	TShfeFtdcParticipantIDType	PartIDEnd;
	///��ʼ�ͻ�����
	TShfeFtdcClientIDType	ClientIDStart;
	///�����ͻ�����
	TShfeFtdcClientIDType	ClientIDEnd;
};

///��Ա�ֲֲ�ѯ
struct CShfeFtdcQryPartPositionField
{
	///��ʼ��Ա����
	TShfeFtdcParticipantIDType	PartIDStart;
	///������Ա����
	TShfeFtdcParticipantIDType	PartIDEnd;
	///��ʼ��Լ����
	TShfeFtdcInstrumentIDType	InstIDStart;
	///������Լ����
	TShfeFtdcInstrumentIDType	InstIDEnd;
};

///�ͻ��ֲֲ�ѯ
struct CShfeFtdcQryClientPositionField
{
	///��ʼ��Ա����
	TShfeFtdcParticipantIDType	PartIDStart;
	///������Ա����
	TShfeFtdcParticipantIDType	PartIDEnd;
	///��ʼ�ͻ�����
	TShfeFtdcClientIDType	ClientIDStart;
	///�����ͻ�����
	TShfeFtdcClientIDType	ClientIDEnd;
	///��ʼ��Լ����
	TShfeFtdcInstrumentIDType	InstIDStart;
	///������Լ����
	TShfeFtdcInstrumentIDType	InstIDEnd;
	///�ͻ�����
	TShfeFtdcClientTypeType	ClientType;
};

///�����ʽ��ѯ
struct CShfeFtdcQryPartAccountField
{
	///��ʼ��Ա����
	TShfeFtdcParticipantIDType	PartIDStart;
	///������Ա����
	TShfeFtdcParticipantIDType	PartIDEnd;
	///�ʽ��ʺ�
	TShfeFtdcAccountIDType	AccountID;
};

///��Լ��ѯ
struct CShfeFtdcQryInstrumentField
{
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
	///��Ʒ�����
	TShfeFtdcProductGroupIDType	ProductGroupID;
	///��Ʒ����
	TShfeFtdcProductIDType	ProductID;
	///��Լ����
	TShfeFtdcInstrumentIDType	InstrumentID;
};

///��Լ״̬��ѯ
struct CShfeFtdcQryInstrumentStatusField
{
	///��ʼ��Լ����
	TShfeFtdcInstrumentIDType	InstIDStart;
	///������Լ����
	TShfeFtdcInstrumentIDType	InstIDEnd;
};

///������״̬��ѯ
struct CShfeFtdcQrySGDataSyncStatusField
{
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
};

///�û����߲�ѯ
struct CShfeFtdcQryUserSessionField
{
	///��ʼ�����û�����
	TShfeFtdcUserIDType	UserIDStart;
	///���������û�����
	TShfeFtdcUserIDType	UserIDEnd;
};

///�û���ѯ
struct CShfeFtdcQryUserField
{
	///��ʼ�����û�����
	TShfeFtdcUserIDType	UserIDStart;
	///���������û�����
	TShfeFtdcUserIDType	UserIDEnd;
};

///�����ѯ
struct CShfeFtdcQryBulletinField
{
	///������
	TShfeFtdcDateType	TradingDay;
	///�г�����
	TShfeFtdcMarketIDType	MarketID;
	///������
	TShfeFtdcBulletinIDType	BulletinID;
	///��������
	TShfeFtdcNewsTypeType	NewsType;
	///�����̶�
	TShfeFtdcNewsUrgencyType	NewsUrgency;
};

///��Ա��ѯ
struct CShfeFtdcQryParticipantField
{
	///��ʼ��Ա����
	TShfeFtdcParticipantIDType	PartIDStart;
	///������Ա����
	TShfeFtdcParticipantIDType	PartIDEnd;
};

///��ֵ��Ȳ�ѯ
struct CShfeFtdcQryHedgeVolumeField
{
	///��ʼ��Ա����
	TShfeFtdcParticipantIDType	PartIDStart;
	///������Ա����
	TShfeFtdcParticipantIDType	PartIDEnd;
	///��ʼ�ͻ�����
	TShfeFtdcClientIDType	ClientIDStart;
	///�����ͻ�����
	TShfeFtdcClientIDType	ClientIDEnd;
	///��ʼ��Լ����
	TShfeFtdcInstrumentIDType	InstIDStart;
	///������Լ����
	TShfeFtdcInstrumentIDType	InstIDEnd;
};

///��Լ��λ��ѯ
struct CShfeFtdcQryMBLMarketDataField
{
	///��ʼ��Լ����
	TShfeFtdcInstrumentIDType	InstIDStart;
	///������Լ����
	TShfeFtdcInstrumentIDType	InstIDEnd;
	///��������
	TShfeFtdcDirectionType	Direction;
};

///�����޶��ѯ
struct CShfeFtdcQryCreditLimitField
{
	///���׻�Ա���
	TShfeFtdcParticipantIDType	ParticipantID;
	///�����Ա���
	TShfeFtdcParticipantIDType	ClearingPartID;
};

///�Ǳ���ϱ�����ѯ
struct CShfeFtdcQryCombOrderField
{
	///��ʼ��Ա����
	TShfeFtdcParticipantIDType	PartIDStart;
	///������Ա����
	TShfeFtdcParticipantIDType	PartIDEnd;
	///��ϱ������
	TShfeFtdcOrderSysIDType	CombOrderSysID;
	///�ͻ�����
	TShfeFtdcClientIDType	ClientID;
	///�����û�����
	TShfeFtdcUserIDType	UserID;
};

///��Ա�ʽ�Ӧ��
struct CShfeFtdcRspPartAccountField
{
	///������
	TShfeFtdcDateType	TradingDay;
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TShfeFtdcSettlementIDType	SettlementID;
	///�ϴν���׼����
	TShfeFtdcMoneyType	PreBalance;
	///��ǰ��֤���ܶ�
	TShfeFtdcMoneyType	CurrMargin;
	///ƽ��ӯ��
	TShfeFtdcMoneyType	CloseProfit;
	///��ȨȨ������֧
	TShfeFtdcMoneyType	Premium;
	///�����
	TShfeFtdcMoneyType	Deposit;
	///������
	TShfeFtdcMoneyType	Withdraw;
	///�ڻ�����׼����
	TShfeFtdcMoneyType	Balance;
	///�����ʽ�
	TShfeFtdcMoneyType	Available;
	///�ʽ��ʺ�
	TShfeFtdcAccountIDType	AccountID;
	///����ı�֤��
	TShfeFtdcMoneyType	FrozenMargin;
	///�����Ȩ����
	TShfeFtdcMoneyType	FrozenPremium;
	///����׼����
	TShfeFtdcMoneyType	BaseReserve;
};

///��Ա�ֲ�Ӧ��
struct CShfeFtdcRspPartPositionField
{
	///������
	TShfeFtdcDateType	TradingDay;
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TShfeFtdcSettlementIDType	SettlementID;
	///Ͷ���ױ���־
	TShfeFtdcHedgeFlagType	HedgeFlag;
	///�ֲֶ�շ���
	TShfeFtdcPosiDirectionType	PosiDirection;
	///���ճֲ�
	TShfeFtdcVolumeType	YdPosition;
	///���ճֲ�
	TShfeFtdcVolumeType	Position;
	///��ͷ����
	TShfeFtdcVolumeType	LongFrozen;
	///��ͷ����
	TShfeFtdcVolumeType	ShortFrozen;
	///���ն�ͷ����
	TShfeFtdcVolumeType	YdLongFrozen;
	///���տ�ͷ����
	TShfeFtdcVolumeType	YdShortFrozen;
	///��Լ����
	TShfeFtdcInstrumentIDType	InstrumentID;
	///��Ա����
	TShfeFtdcParticipantIDType	ParticipantID;
	///���׽�ɫ
	TShfeFtdcTradingRoleType	TradingRole;
};

///�ͻ��ֲ�Ӧ��
struct CShfeFtdcRspClientPositionField
{
	///������
	TShfeFtdcDateType	TradingDay;
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TShfeFtdcSettlementIDType	SettlementID;
	///Ͷ���ױ���־
	TShfeFtdcHedgeFlagType	HedgeFlag;
	///�ֲֶ�շ���
	TShfeFtdcPosiDirectionType	PosiDirection;
	///���ճֲ�
	TShfeFtdcVolumeType	YdPosition;
	///���ճֲ�
	TShfeFtdcVolumeType	Position;
	///��ͷ����
	TShfeFtdcVolumeType	LongFrozen;
	///��ͷ����
	TShfeFtdcVolumeType	ShortFrozen;
	///���ն�ͷ����
	TShfeFtdcVolumeType	YdLongFrozen;
	///���տ�ͷ����
	TShfeFtdcVolumeType	YdShortFrozen;
	///������ɽ���
	TShfeFtdcVolumeType	BuyTradeVolume;
	///�������ɽ���
	TShfeFtdcVolumeType	SellTradeVolume;
	///�ֲֳɱ�
	TShfeFtdcMoneyType	PositionCost;
	///���ճֲֳɱ�
	TShfeFtdcMoneyType	YdPositionCost;
	///ռ�õı�֤��
	TShfeFtdcMoneyType	UseMargin;
	///����ı�֤��
	TShfeFtdcMoneyType	FrozenMargin;
	///��ͷ����ı�֤��
	TShfeFtdcMoneyType	LongFrozenMargin;
	///��ͷ����ı�֤��
	TShfeFtdcMoneyType	ShortFrozenMargin;
	///�����Ȩ����
	TShfeFtdcMoneyType	FrozenPremium;
	///��Լ����
	TShfeFtdcInstrumentIDType	InstrumentID;
	///��Ա����
	TShfeFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TShfeFtdcClientIDType	ClientID;
};

///��Լ��ѯӦ��
struct CShfeFtdcRspInstrumentField
{
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
	///��Ʒ����
	TShfeFtdcProductIDType	ProductID;
	///��Ʒ�����
	TShfeFtdcProductGroupIDType	ProductGroupID;
	///������Ʒ����
	TShfeFtdcInstrumentIDType	UnderlyingInstrID;
	///��Ʒ����
	TShfeFtdcProductClassType	ProductClass;
	///�ֲ�����
	TShfeFtdcPositionTypeType	PositionType;
	///ִ�м�
	TShfeFtdcPriceType	StrikePrice;
	///��Ȩ����
	TShfeFtdcOptionsTypeType	OptionsType;
	///��Լ��������
	TShfeFtdcVolumeMultipleType	VolumeMultiple;
	///��Լ������Ʒ����
	TShfeFtdcUnderlyingMultipleType	UnderlyingMultiple;
	///��Լ����
	TShfeFtdcInstrumentIDType	InstrumentID;
	///��Լ����
	TShfeFtdcInstrumentNameType	InstrumentName;
	///�������
	TShfeFtdcYearType	DeliveryYear;
	///������
	TShfeFtdcMonthType	DeliveryMonth;
	///��ǰ�·�
	TShfeFtdcAdvanceMonthType	AdvanceMonth;
	///��ǰ�Ƿ���
	TShfeFtdcBoolType	IsTrading;
	///������
	TShfeFtdcDateType	CreateDate;
	///������
	TShfeFtdcDateType	OpenDate;
	///������
	TShfeFtdcDateType	ExpireDate;
	///��ʼ������
	TShfeFtdcDateType	StartDelivDate;
	///��󽻸���
	TShfeFtdcDateType	EndDelivDate;
	///���ƻ�׼��
	TShfeFtdcPriceType	BasisPrice;
	///�м۵�����µ���
	TShfeFtdcVolumeType	MaxMarketOrderVolume;
	///�м۵���С�µ���
	TShfeFtdcVolumeType	MinMarketOrderVolume;
	///�޼۵�����µ���
	TShfeFtdcVolumeType	MaxLimitOrderVolume;
	///�޼۵���С�µ���
	TShfeFtdcVolumeType	MinLimitOrderVolume;
	///��С�䶯��λ
	TShfeFtdcPriceType	PriceTick;
	///��������Ȼ�˿���
	TShfeFtdcMonthCountType	AllowDelivPersonOpen;
};

///��Ϣ��ѯ
struct CShfeFtdcQryInformationField
{
	///��ʼ��Ϣ����
	TShfeFtdcInformationIDType	InformationIDStart;
	///������Ϣ����
	TShfeFtdcInformationIDType	InformationIDEnd;
};

///��Ϣ��ѯ
struct CShfeFtdcInformationField
{
	///��Ϣ���
	TShfeFtdcInformationIDType	InformationID;
	///���к�
	TShfeFtdcSequenceNoType	SequenceNo;
	///��Ϣ����
	TShfeFtdcContentType	Content;
	///���ĳ���
	TShfeFtdcContentLengthType	ContentLength;
	///�Ƿ����
	TShfeFtdcBoolType	IsAccomplished;
};

///�����޶�
struct CShfeFtdcCreditLimitField
{
	///������
	TShfeFtdcDateType	TradingDay;
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TShfeFtdcSettlementIDType	SettlementID;
	///�ϴν���׼����
	TShfeFtdcMoneyType	PreBalance;
	///��ǰ��֤���ܶ�
	TShfeFtdcMoneyType	CurrMargin;
	///ƽ��ӯ��
	TShfeFtdcMoneyType	CloseProfit;
	///��ȨȨ������֧
	TShfeFtdcMoneyType	Premium;
	///�����
	TShfeFtdcMoneyType	Deposit;
	///������
	TShfeFtdcMoneyType	Withdraw;
	///�ڻ�����׼����
	TShfeFtdcMoneyType	Balance;
	///�����ʽ�
	TShfeFtdcMoneyType	Available;
	///���׻�Ա���
	TShfeFtdcParticipantIDType	ParticipantID;
	///�����Ա���
	TShfeFtdcParticipantIDType	ClearingPartID;
	///����ı�֤��
	TShfeFtdcMoneyType	FrozenMargin;
	///�����Ȩ����
	TShfeFtdcMoneyType	FrozenPremium;
};

///�ͻ���ѯӦ��
struct CShfeFtdcRspClientField
{
	///�ͻ�����
	TShfeFtdcClientIDType	ClientID;
	///�ͻ�����
	TShfeFtdcPartyNameType	ClientName;
	///֤������
	TShfeFtdcIdCardTypeType	IdentifiedCardType;
	///ԭ֤������
	TShfeFtdcIdentifiedCardNoV1Type	UseLess;
	///���׽�ɫ
	TShfeFtdcTradingRoleType	TradingRole;
	///�ͻ�����
	TShfeFtdcClientTypeType	ClientType;
	///�Ƿ��Ծ
	TShfeFtdcBoolType	IsActive;
	///��Ա��
	TShfeFtdcParticipantIDType	ParticipantID;
	///֤������
	TShfeFtdcIdentifiedCardNoType	IdentifiedCardNo;
};

///����������
struct CShfeFtdcFlowMessageCancelField
{
	///����ϵ�к�
	TShfeFtdcSequenceSeriesType	SequenceSeries;
	///������
	TShfeFtdcDateType	TradingDay;
	///�������Ĵ���
	TShfeFtdcDataCenterIDType	DataCenterID;
	///������ʼ���к�
	TShfeFtdcSequenceNoType	StartSequenceNo;
	///���˽������к�
	TShfeFtdcSequenceNoType	EndSequenceNo;
};

///��Ա
struct CShfeFtdcParticipantField
{
	///��Ա����
	TShfeFtdcParticipantIDType	ParticipantID;
	///��Ա����
	TShfeFtdcParticipantNameType	ParticipantName;
	///��Ա���
	TShfeFtdcParticipantAbbrType	ParticipantAbbr;
	///��Ա����
	TShfeFtdcMemberTypeType	MemberType;
	///�Ƿ��Ծ
	TShfeFtdcBoolType	IsActive;
};

///�û�
struct CShfeFtdcUserField
{
	///��Ա����
	TShfeFtdcParticipantIDType	ParticipantID;
	///�����û�����
	TShfeFtdcUserIDType	UserID;
	///�����û�����
	TShfeFtdcUserTypeType	UserType;
	///����
	TShfeFtdcPasswordType	Password;
	///����ԱȨ��
	TShfeFtdcUserActiveType	IsActive;
};

///�ͻ�
struct CShfeFtdcClientField
{
	///�ͻ�����
	TShfeFtdcClientIDType	ClientID;
	///�ͻ�����
	TShfeFtdcPartyNameType	ClientName;
	///֤������
	TShfeFtdcIdCardTypeType	IdentifiedCardType;
	///֤������
	TShfeFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///���׽�ɫ
	TShfeFtdcTradingRoleType	TradingRole;
	///�ͻ�����
	TShfeFtdcClientTypeType	ClientType;
	///�Ƿ��Ծ
	TShfeFtdcBoolType	IsActive;
};

///�û��Ự
struct CShfeFtdcUserSessionField
{
	///ǰ�ñ��
	TShfeFtdcFrontIDType	FrontID;
	///�����û�����
	TShfeFtdcUserIDType	UserID;
	///�����û�����
	TShfeFtdcUserTypeType	UserType;
	///�Ự���
	TShfeFtdcSessionIDType	SessionID;
	///��¼ʱ��
	TShfeFtdcTimeType	LoginTime;
	///��Ա����
	TShfeFtdcParticipantIDType	ParticipantID;
	///IP��ַ
	TShfeFtdcIPAddressType	IPAddress;
	///�û��˲�Ʒ��Ϣ
	TShfeFtdcProductInfoType	UserProductInfo;
	///�ӿڶ˲�Ʒ��Ϣ
	TShfeFtdcProductInfoType	InterfaceProductInfo;
	///Э����Ϣ
	TShfeFtdcProtocolInfoType	ProtocolInfo;
};

///��Ʒ��
struct CShfeFtdcProductGroupField
{
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
	///��Ʒ�����
	TShfeFtdcProductGroupIDType	ProductGroupID;
	///��Ʒ������
	TShfeFtdcProductGroupNameType	ProductGroupName;
	///��Ʒ����
	TShfeFtdcCommodityIDType	CommodityID;
};

///��Ʒ
struct CShfeFtdcProductField
{
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
	///��Ʒ����
	TShfeFtdcProductIDType	ProductID;
	///��Ʒ�����
	TShfeFtdcProductGroupIDType	ProductGroupID;
	///��Ʒ����
	TShfeFtdcProductNameType	ProductName;
	///��Ʒ����
	TShfeFtdcProductClassType	ProductClass;
};

///��Լ
struct CShfeFtdcInstrumentField
{
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
	///��Ʒ����
	TShfeFtdcProductIDType	ProductID;
	///��Ʒ�����
	TShfeFtdcProductGroupIDType	ProductGroupID;
	///������Ʒ����
	TShfeFtdcInstrumentIDType	UnderlyingInstrID;
	///��Ʒ����
	TShfeFtdcProductClassType	ProductClass;
	///�ֲ�����
	TShfeFtdcPositionTypeType	PositionType;
	///ִ�м�
	TShfeFtdcPriceType	StrikePrice;
	///��Ȩ����
	TShfeFtdcOptionsTypeType	OptionsType;
	///��Լ��������
	TShfeFtdcVolumeMultipleType	VolumeMultiple;
	///��Լ������Ʒ����
	TShfeFtdcUnderlyingMultipleType	UnderlyingMultiple;
	///��Լ����
	TShfeFtdcInstrumentIDType	InstrumentID;
	///��Լ����
	TShfeFtdcInstrumentNameType	InstrumentName;
	///�������
	TShfeFtdcYearType	DeliveryYear;
	///������
	TShfeFtdcMonthType	DeliveryMonth;
	///��ǰ�·�
	TShfeFtdcAdvanceMonthType	AdvanceMonth;
	///��ǰ�Ƿ���
	TShfeFtdcBoolType	IsTrading;
};

///��Ͻ��׺�Լ�ĵ���
struct CShfeFtdcCombinationLegField
{
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
	///��Ϻ�Լ����
	TShfeFtdcInstrumentIDType	CombInstrumentID;
	///���ȱ��
	TShfeFtdcLegIDType	LegID;
	///���Ⱥ�Լ����
	TShfeFtdcInstrumentIDType	LegInstrumentID;
	///��������
	TShfeFtdcDirectionType	Direction;
	///���ȳ���
	TShfeFtdcLegMultipleType	LegMultiple;
	///�Ƶ�����
	TShfeFtdcImplyLevelType	ImplyLevel;
};

///�˻��ʽ���Ϣ
struct CShfeFtdcAccountInfoField
{
	///������
	TShfeFtdcDateType	TradingDay;
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TShfeFtdcSettlementIDType	SettlementID;
	///�ϴν���׼����
	TShfeFtdcMoneyType	PreBalance;
	///��ǰ��֤���ܶ�
	TShfeFtdcMoneyType	CurrMargin;
	///ƽ��ӯ��
	TShfeFtdcMoneyType	CloseProfit;
	///��ȨȨ������֧
	TShfeFtdcMoneyType	Premium;
	///�����
	TShfeFtdcMoneyType	Deposit;
	///������
	TShfeFtdcMoneyType	Withdraw;
	///�ڻ�����׼����
	TShfeFtdcMoneyType	Balance;
	///�����ʽ�
	TShfeFtdcMoneyType	Available;
	///��������
	TShfeFtdcDateType	DateAccountOpen;
	///�ϴν��������
	TShfeFtdcDateType	PreDate;
	///�Ͻ���ı��
	TShfeFtdcSettlementIDType	PreSettlementID;
	///�ϴα�֤���ܶ�
	TShfeFtdcMoneyType	PreMargin;
	///�ڻ���֤��
	TShfeFtdcMoneyType	FuturesMargin;
	///��Ȩ��֤��
	TShfeFtdcMoneyType	OptionsMargin;
	///�ֲ�ӯ��
	TShfeFtdcMoneyType	PositionProfit;
	///����ӯ��
	TShfeFtdcMoneyType	Profit;
	///��Ϣ����
	TShfeFtdcMoneyType	Interest;
	///������
	TShfeFtdcMoneyType	Fee;
	///����Ѻ���
	TShfeFtdcMoneyType	TotalCollateral;
	///����Ѻ�ֵı�֤����
	TShfeFtdcMoneyType	CollateralForMargin;
	///�ϴ��ʽ���Ϣ����
	TShfeFtdcMoneyType	PreAccmulateInterest;
	///�ʽ���Ϣ����
	TShfeFtdcMoneyType	AccumulateInterest;
	///��Ѻ�����ѻ���
	TShfeFtdcMoneyType	AccumulateFee;
	///�����ʽ�
	TShfeFtdcMoneyType	ForzenDeposit;
	///�ʻ�״̬
	TShfeFtdcAccountStatusType	AccountStatus;
	///�ʽ��ʺ�
	TShfeFtdcAccountIDType	AccountID;
};

///��Ա��Լ�ֲ�
struct CShfeFtdcPartPositionField
{
	///������
	TShfeFtdcDateType	TradingDay;
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TShfeFtdcSettlementIDType	SettlementID;
	///Ͷ���ױ���־
	TShfeFtdcHedgeFlagType	HedgeFlag;
	///�ֲֶ�շ���
	TShfeFtdcPosiDirectionType	PosiDirection;
	///���ճֲ�
	TShfeFtdcVolumeType	YdPosition;
	///���ճֲ�
	TShfeFtdcVolumeType	Position;
	///��ͷ����
	TShfeFtdcVolumeType	LongFrozen;
	///��ͷ����
	TShfeFtdcVolumeType	ShortFrozen;
	///���ն�ͷ����
	TShfeFtdcVolumeType	YdLongFrozen;
	///���տ�ͷ����
	TShfeFtdcVolumeType	YdShortFrozen;
	///��Լ����
	TShfeFtdcInstrumentIDType	InstrumentID;
	///��Ա����
	TShfeFtdcParticipantIDType	ParticipantID;
	///���׽�ɫ
	TShfeFtdcTradingRoleType	TradingRole;
};

///�ͻ���Լ�ֲ�
struct CShfeFtdcClientPositionField
{
	///������
	TShfeFtdcDateType	TradingDay;
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TShfeFtdcSettlementIDType	SettlementID;
	///Ͷ���ױ���־
	TShfeFtdcHedgeFlagType	HedgeFlag;
	///�ֲֶ�շ���
	TShfeFtdcPosiDirectionType	PosiDirection;
	///���ճֲ�
	TShfeFtdcVolumeType	YdPosition;
	///���ճֲ�
	TShfeFtdcVolumeType	Position;
	///��ͷ����
	TShfeFtdcVolumeType	LongFrozen;
	///��ͷ����
	TShfeFtdcVolumeType	ShortFrozen;
	///���ն�ͷ����
	TShfeFtdcVolumeType	YdLongFrozen;
	///���տ�ͷ����
	TShfeFtdcVolumeType	YdShortFrozen;
	///������ɽ���
	TShfeFtdcVolumeType	BuyTradeVolume;
	///�������ɽ���
	TShfeFtdcVolumeType	SellTradeVolume;
	///�ֲֳɱ�
	TShfeFtdcMoneyType	PositionCost;
	///���ճֲֳɱ�
	TShfeFtdcMoneyType	YdPositionCost;
	///ռ�õı�֤��
	TShfeFtdcMoneyType	UseMargin;
	///����ı�֤��
	TShfeFtdcMoneyType	FrozenMargin;
	///��ͷ����ı�֤��
	TShfeFtdcMoneyType	LongFrozenMargin;
	///��ͷ����ı�֤��
	TShfeFtdcMoneyType	ShortFrozenMargin;
	///�����Ȩ����
	TShfeFtdcMoneyType	FrozenPremium;
	///��Լ����
	TShfeFtdcInstrumentIDType	InstrumentID;
	///��Ա����
	TShfeFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TShfeFtdcClientIDType	ClientID;
};

///��ֵ�����
struct CShfeFtdcHedgeVolumeField
{
	///������
	TShfeFtdcDateType	TradingDay;
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TShfeFtdcSettlementIDType	SettlementID;
	///��Ա����
	TShfeFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TShfeFtdcClientIDType	ClientID;
	///��Լ����
	TShfeFtdcInstrumentIDType	InstrumentID;
	///��ͷ��ֵ������������
	TShfeFtdcVolumeType	LongVolumeOriginal;
	///��ͷ��ֵ������������
	TShfeFtdcVolumeType	ShortVolumeOriginal;
	///��ͷ��ֵ���
	TShfeFtdcVolumeType	LongVolume;
	///��ͷ��ֵ���
	TShfeFtdcVolumeType	ShortVolume;
};

///�г�����
struct CShfeFtdcMarketDataField
{
	///������
	TShfeFtdcDateType	TradingDay;
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TShfeFtdcSettlementIDType	SettlementID;
	///���¼�
	TShfeFtdcPriceType	LastPrice;
	///�����
	TShfeFtdcPriceType	PreSettlementPrice;
	///������
	TShfeFtdcPriceType	PreClosePrice;
	///��ֲ���
	TShfeFtdcLargeVolumeType	PreOpenInterest;
	///����
	TShfeFtdcPriceType	OpenPrice;
	///��߼�
	TShfeFtdcPriceType	HighestPrice;
	///��ͼ�
	TShfeFtdcPriceType	LowestPrice;
	///����
	TShfeFtdcVolumeType	Volume;
	///�ɽ����
	TShfeFtdcMoneyType	Turnover;
	///�ֲ���
	TShfeFtdcLargeVolumeType	OpenInterest;
	///������
	TShfeFtdcPriceType	ClosePrice;
	///�����
	TShfeFtdcPriceType	SettlementPrice;
	///��ͣ���
	TShfeFtdcPriceType	UpperLimitPrice;
	///��ͣ���
	TShfeFtdcPriceType	LowerLimitPrice;
	///����ʵ��
	TShfeFtdcRatioType	PreDelta;
	///����ʵ��
	TShfeFtdcRatioType	CurrDelta;
	///����޸�ʱ��
	TShfeFtdcTimeType	UpdateTime;
	///����޸ĺ���
	TShfeFtdcMillisecType	UpdateMillisec;
	///��Լ����
	TShfeFtdcInstrumentIDType	InstrumentID;
};

///����г�����
struct CShfeFtdcDepthMarketDataField
{
	///������
	TShfeFtdcDateType	TradingDay;
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TShfeFtdcSettlementIDType	SettlementID;
	///���¼�
	TShfeFtdcPriceType	LastPrice;
	///�����
	TShfeFtdcPriceType	PreSettlementPrice;
	///������
	TShfeFtdcPriceType	PreClosePrice;
	///��ֲ���
	TShfeFtdcLargeVolumeType	PreOpenInterest;
	///����
	TShfeFtdcPriceType	OpenPrice;
	///��߼�
	TShfeFtdcPriceType	HighestPrice;
	///��ͼ�
	TShfeFtdcPriceType	LowestPrice;
	///����
	TShfeFtdcVolumeType	Volume;
	///�ɽ����
	TShfeFtdcMoneyType	Turnover;
	///�ֲ���
	TShfeFtdcLargeVolumeType	OpenInterest;
	///������
	TShfeFtdcPriceType	ClosePrice;
	///�����
	TShfeFtdcPriceType	SettlementPrice;
	///��ͣ���
	TShfeFtdcPriceType	UpperLimitPrice;
	///��ͣ���
	TShfeFtdcPriceType	LowerLimitPrice;
	///����ʵ��
	TShfeFtdcRatioType	PreDelta;
	///����ʵ��
	TShfeFtdcRatioType	CurrDelta;
	///����޸�ʱ��
	TShfeFtdcTimeType	UpdateTime;
	///����޸ĺ���
	TShfeFtdcMillisecType	UpdateMillisec;
	///��Լ����
	TShfeFtdcInstrumentIDType	InstrumentID;
	///�����һ
	TShfeFtdcPriceType	BidPrice1;
	///������һ
	TShfeFtdcVolumeType	BidVolume1;
	///������һ
	TShfeFtdcPriceType	AskPrice1;
	///������һ
	TShfeFtdcVolumeType	AskVolume1;
	///����۶�
	TShfeFtdcPriceType	BidPrice2;
	///��������
	TShfeFtdcVolumeType	BidVolume2;
	///�����۶�
	TShfeFtdcPriceType	AskPrice2;
	///��������
	TShfeFtdcVolumeType	AskVolume2;
	///�������
	TShfeFtdcPriceType	BidPrice3;
	///��������
	TShfeFtdcVolumeType	BidVolume3;
	///��������
	TShfeFtdcPriceType	AskPrice3;
	///��������
	TShfeFtdcVolumeType	AskVolume3;
	///�������
	TShfeFtdcPriceType	BidPrice4;
	///��������
	TShfeFtdcVolumeType	BidVolume4;
	///��������
	TShfeFtdcPriceType	AskPrice4;
	///��������
	TShfeFtdcVolumeType	AskVolume4;
	///�������
	TShfeFtdcPriceType	BidPrice5;
	///��������
	TShfeFtdcVolumeType	BidVolume5;
	///��������
	TShfeFtdcPriceType	AskPrice5;
	///��������
	TShfeFtdcVolumeType	AskVolume5;
};

///�ּ۱�
struct CShfeFtdcMBLMarketDataField
{
	///��Լ����
	TShfeFtdcInstrumentIDType	InstrumentID;
	///��������
	TShfeFtdcDirectionType	Direction;
	///�۸�
	TShfeFtdcPriceType	Price;
	///����
	TShfeFtdcVolumeType	Volume;
};

///��������
struct CShfeFtdcAliasDefineField
{
	///��ʼλ��
	TShfeFtdcStartPosType	StartPos;
	///����
	TShfeFtdcAliasType	Alias;
	///ԭ��
	TShfeFtdcOriginalTextType	OriginalText;
};

///�����������
struct CShfeFtdcMarketDataBaseField
{
	///������
	TShfeFtdcDateType	TradingDay;
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TShfeFtdcSettlementIDType	SettlementID;
	///�����
	TShfeFtdcPriceType	PreSettlementPrice;
	///������
	TShfeFtdcPriceType	PreClosePrice;
	///��ֲ���
	TShfeFtdcLargeVolumeType	PreOpenInterest;
	///����ʵ��
	TShfeFtdcRatioType	PreDelta;
};

///���龲̬����
struct CShfeFtdcMarketDataStaticField
{
	///����
	TShfeFtdcPriceType	OpenPrice;
	///��߼�
	TShfeFtdcPriceType	HighestPrice;
	///��ͼ�
	TShfeFtdcPriceType	LowestPrice;
	///������
	TShfeFtdcPriceType	ClosePrice;
	///��ͣ���
	TShfeFtdcPriceType	UpperLimitPrice;
	///��ͣ���
	TShfeFtdcPriceType	LowerLimitPrice;
	///�����
	TShfeFtdcPriceType	SettlementPrice;
	///����ʵ��
	TShfeFtdcRatioType	CurrDelta;
};

///�������³ɽ�����
struct CShfeFtdcMarketDataLastMatchField
{
	///���¼�
	TShfeFtdcPriceType	LastPrice;
	///����
	TShfeFtdcVolumeType	Volume;
	///�ɽ����
	TShfeFtdcMoneyType	Turnover;
	///�ֲ���
	TShfeFtdcLargeVolumeType	OpenInterest;
};

///�������ż�����
struct CShfeFtdcMarketDataBestPriceField
{
	///�����һ
	TShfeFtdcPriceType	BidPrice1;
	///������һ
	TShfeFtdcVolumeType	BidVolume1;
	///������һ
	TShfeFtdcPriceType	AskPrice1;
	///������һ
	TShfeFtdcVolumeType	AskVolume1;
};

///�����������������
struct CShfeFtdcMarketDataBid23Field
{
	///����۶�
	TShfeFtdcPriceType	BidPrice2;
	///��������
	TShfeFtdcVolumeType	BidVolume2;
	///�������
	TShfeFtdcPriceType	BidPrice3;
	///��������
	TShfeFtdcVolumeType	BidVolume3;
};

///������������������
struct CShfeFtdcMarketDataAsk23Field
{
	///�����۶�
	TShfeFtdcPriceType	AskPrice2;
	///��������
	TShfeFtdcVolumeType	AskVolume2;
	///��������
	TShfeFtdcPriceType	AskPrice3;
	///��������
	TShfeFtdcVolumeType	AskVolume3;
};

///���������ġ�������
struct CShfeFtdcMarketDataBid45Field
{
	///�������
	TShfeFtdcPriceType	BidPrice4;
	///��������
	TShfeFtdcVolumeType	BidVolume4;
	///�������
	TShfeFtdcPriceType	BidPrice5;
	///��������
	TShfeFtdcVolumeType	BidVolume5;
};

///���������ġ�������
struct CShfeFtdcMarketDataAsk45Field
{
	///��������
	TShfeFtdcPriceType	AskPrice4;
	///��������
	TShfeFtdcVolumeType	AskVolume4;
	///��������
	TShfeFtdcPriceType	AskPrice5;
	///��������
	TShfeFtdcVolumeType	AskVolume5;
};

///�������ʱ������
struct CShfeFtdcMarketDataUpdateTimeField
{
	///��Լ����
	TShfeFtdcInstrumentIDType	InstrumentID;
	///����޸�ʱ��
	TShfeFtdcTimeType	UpdateTime;
	///����޸ĺ���
	TShfeFtdcMillisecType	UpdateMillisec;
};

///����
struct CShfeFtdcQuoteField
{
	///������
	TShfeFtdcDateType	TradingDay;
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TShfeFtdcSettlementIDType	SettlementID;
	///���۱��
	TShfeFtdcQuoteSysIDType	QuoteSysID;
	///��Ա����
	TShfeFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TShfeFtdcClientIDType	ClientID;
	///�����û�����
	TShfeFtdcUserIDType	UserID;
	///����
	TShfeFtdcVolumeType	Volume;
	///��Լ����
	TShfeFtdcInstrumentIDType	InstrumentID;
	///���ر��۱��
	TShfeFtdcOrderLocalIDType	QuoteLocalID;
	///ҵ��Ԫ
	TShfeFtdcBusinessUnitType	BusinessUnit;
	///����Ͽ�ƽ��־
	TShfeFtdcCombOffsetFlagType	BidCombOffsetFlag;
	///������ױ���־
	TShfeFtdcCombHedgeFlagType	BidCombHedgeFlag;
	///�򷽼۸�
	TShfeFtdcPriceType	BidPrice;
	///������Ͽ�ƽ��־
	TShfeFtdcCombOffsetFlagType	AskCombOffsetFlag;
	///��������ױ���־
	TShfeFtdcCombHedgeFlagType	AskCombHedgeFlag;
	///�����۸�
	TShfeFtdcPriceType	AskPrice;
	///����ʱ��
	TShfeFtdcTimeType	InsertTime;
	///����ʱ��
	TShfeFtdcTimeType	CancelTime;
	///�ɽ�ʱ��
	TShfeFtdcTimeType	TradeTime;
	///�򷽱������
	TShfeFtdcOrderSysIDType	BidOrderSysID;
	///�����������
	TShfeFtdcOrderSysIDType	AskOrderSysID;
	///�����Ա���
	TShfeFtdcParticipantIDType	ClearingPartID;
};

///�ɽ�
struct CShfeFtdcTradeField
{
	///������
	TShfeFtdcDateType	TradingDay;
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TShfeFtdcSettlementIDType	SettlementID;
	///�ɽ����
	TShfeFtdcTradeIDType	TradeID;
	///��������
	TShfeFtdcDirectionType	Direction;
	///�������
	TShfeFtdcOrderSysIDType	OrderSysID;
	///��Ա����
	TShfeFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TShfeFtdcClientIDType	ClientID;
	///���׽�ɫ
	TShfeFtdcTradingRoleType	TradingRole;
	///�ʽ��ʺ�
	TShfeFtdcAccountIDType	AccountID;
	///��Լ����
	TShfeFtdcInstrumentIDType	InstrumentID;
	///��ƽ��־
	TShfeFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TShfeFtdcHedgeFlagType	HedgeFlag;
	///�۸�
	TShfeFtdcPriceType	Price;
	///����
	TShfeFtdcVolumeType	Volume;
	///�ɽ�ʱ��
	TShfeFtdcTimeType	TradeTime;
	///�ɽ�����
	TShfeFtdcTradeTypeType	TradeType;
	///�ɽ�����Դ
	TShfeFtdcPriceSourceType	PriceSource;
	///�����û�����
	TShfeFtdcUserIDType	UserID;
	///���ر������
	TShfeFtdcOrderLocalIDType	OrderLocalID;
	///�����Ա���
	TShfeFtdcParticipantIDType	ClearingPartID;
	///ҵ��Ԫ
	TShfeFtdcBusinessUnitType	BusinessUnit;
};

///����
struct CShfeFtdcOrderField
{
	///������
	TShfeFtdcDateType	TradingDay;
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TShfeFtdcSettlementIDType	SettlementID;
	///�������
	TShfeFtdcOrderSysIDType	OrderSysID;
	///��Ա����
	TShfeFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TShfeFtdcClientIDType	ClientID;
	///�����û�����
	TShfeFtdcUserIDType	UserID;
	///��Լ����
	TShfeFtdcInstrumentIDType	InstrumentID;
	///�����۸�����
	TShfeFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TShfeFtdcDirectionType	Direction;
	///��Ͽ�ƽ��־
	TShfeFtdcCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TShfeFtdcCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TShfeFtdcPriceType	LimitPrice;
	///����
	TShfeFtdcVolumeType	VolumeTotalOriginal;
	///��Ч������
	TShfeFtdcTimeConditionType	TimeCondition;
	///GTD����
	TShfeFtdcDateType	GTDDate;
	///�ɽ�������
	TShfeFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TShfeFtdcVolumeType	MinVolume;
	///��������
	TShfeFtdcContingentConditionType	ContingentCondition;
	///ֹ���
	TShfeFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TShfeFtdcForceCloseReasonType	ForceCloseReason;
	///���ر������
	TShfeFtdcOrderLocalIDType	OrderLocalID;
	///�Զ������־
	TShfeFtdcBoolType	IsAutoSuspend;
	///������Դ
	TShfeFtdcOrderSourceType	OrderSource;
	///����״̬
	TShfeFtdcOrderStatusType	OrderStatus;
	///��������
	TShfeFtdcOrderTypeType	OrderType;
	///��ɽ�����
	TShfeFtdcVolumeType	VolumeTraded;
	///ʣ������
	TShfeFtdcVolumeType	VolumeTotal;
	///��������
	TShfeFtdcDateType	InsertDate;
	///����ʱ��
	TShfeFtdcTimeType	InsertTime;
	///����ʱ��
	TShfeFtdcTimeType	ActiveTime;
	///����ʱ��
	TShfeFtdcTimeType	SuspendTime;
	///����޸�ʱ��
	TShfeFtdcTimeType	UpdateTime;
	///����ʱ��
	TShfeFtdcTimeType	CancelTime;
	///����޸Ľ����û�����
	TShfeFtdcUserIDType	ActiveUserID;
	///����Ȩ
	TShfeFtdcPriorityType	Priority;
	///��ʱ���Ŷӵ����
	TShfeFtdcTimeSortIDType	TimeSortID;
	///�����Ա���
	TShfeFtdcParticipantIDType	ClearingPartID;
	///ҵ��Ԫ
	TShfeFtdcBusinessUnitType	BusinessUnit;
};

///ִ������
struct CShfeFtdcExecOrderField
{
	///������
	TShfeFtdcDateType	TradingDay;
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TShfeFtdcSettlementIDType	SettlementID;
	///��Լ���
	TShfeFtdcInstrumentIDType	InstrumentID;
	///��Ա����
	TShfeFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TShfeFtdcClientIDType	ClientID;
	///�����û�����
	TShfeFtdcUserIDType	UserID;
	///����ִ��������
	TShfeFtdcOrderLocalIDType	ExecOrderLocalID;
	///����
	TShfeFtdcVolumeType	Volume;
	///ҵ��Ԫ
	TShfeFtdcBusinessUnitType	BusinessUnit;
	///ִ��������
	TShfeFtdcExecOrderSysIDType	ExecOrderSysID;
	///��������
	TShfeFtdcDateType	InsertDate;
	///����ʱ��
	TShfeFtdcTimeType	InsertTime;
	///����ʱ��
	TShfeFtdcTimeType	CancelTime;
	///ִ�н��
	TShfeFtdcExecResultType	ExecResult;
	///�����Ա���
	TShfeFtdcParticipantIDType	ClearingPartID;
};

///�Ǳ���ϱ���
struct CShfeFtdcCombOrderField
{
	///������
	TShfeFtdcDateType	TradingDay;
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TShfeFtdcSettlementIDType	SettlementID;
	///��ϱ������
	TShfeFtdcOrderSysIDType	CombOrderSysID;
	///��Ա����
	TShfeFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TShfeFtdcClientIDType	ClientID;
	///�����û�����
	TShfeFtdcUserIDType	UserID;
	///�۸�
	TShfeFtdcPriceType	LimitPrice;
	///����
	TShfeFtdcVolumeType	VolumeTotalOriginal;
	///���ر������
	TShfeFtdcOrderLocalIDType	CombOrderLocalID;
	///ҵ��Ԫ
	TShfeFtdcBusinessUnitType	BusinessUnit;
	///��Լ����1
	TShfeFtdcInstrumentIDType	InstrumentID1;
	///��������1
	TShfeFtdcDirectionType	Direction1;
	///���ȳ���1
	TShfeFtdcLegMultipleType	LegMultiple1;
	///��ƽ��־1
	TShfeFtdcOffsetFlagType	OffsetFlag1;
	///Ͷ���ױ���־1
	TShfeFtdcHedgeFlagType	HedgeFlag1;
	///��Լ����2
	TShfeFtdcInstrumentIDType	InstrumentID2;
	///��������2
	TShfeFtdcDirectionType	Direction2;
	///���ȳ���2
	TShfeFtdcLegMultipleType	LegMultiple2;
	///��ƽ��־2
	TShfeFtdcOffsetFlagType	OffsetFlag2;
	///Ͷ���ױ���־2
	TShfeFtdcHedgeFlagType	HedgeFlag2;
	///��Լ����3
	TShfeFtdcInstrumentIDType	InstrumentID3;
	///��������3
	TShfeFtdcDirectionType	Direction3;
	///���ȳ���3
	TShfeFtdcLegMultipleType	LegMultiple3;
	///��ƽ��־3
	TShfeFtdcOffsetFlagType	OffsetFlag3;
	///Ͷ���ױ���־3
	TShfeFtdcHedgeFlagType	HedgeFlag3;
	///��Լ����4
	TShfeFtdcInstrumentIDType	InstrumentID4;
	///��������4
	TShfeFtdcDirectionType	Direction4;
	///���ȳ���4
	TShfeFtdcLegMultipleType	LegMultiple4;
	///��ƽ��־4
	TShfeFtdcOffsetFlagType	OffsetFlag4;
	///Ͷ���ױ���־4
	TShfeFtdcHedgeFlagType	HedgeFlag4;
	///������Դ
	TShfeFtdcOrderSourceType	OrderSource;
	///��ɽ�����
	TShfeFtdcVolumeType	VolumeTraded;
	///ʣ������
	TShfeFtdcVolumeType	VolumeTotal;
	///��������
	TShfeFtdcDateType	InsertDate;
	///����ʱ��
	TShfeFtdcTimeType	InsertTime;
	///�����Ա���
	TShfeFtdcParticipantIDType	ClearingPartID;
};

///��������
struct CShfeFtdcAdminOrderField
{
	///��Լ����
	TShfeFtdcInstrumentIDType	InstrumentID;
	///������������
	TShfeFtdcAdminOrderCommandFlagType	AdminOrderCommand;
	///�����Ա���
	TShfeFtdcParticipantIDType	ClearingPartID;
	///���׻�Ա���
	TShfeFtdcParticipantIDType	ParticipantID;
	///���
	TShfeFtdcMoneyType	Amount;
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
};

///������������
struct CShfeFtdcInputAdminOrderField
{
	///��Լ����
	TShfeFtdcInstrumentIDType	InstrumentID;
	///������������
	TShfeFtdcAdminOrderCommandFlagType	AdminOrderCommand;
	///�����Ա���
	TShfeFtdcParticipantIDType	ClearingPartID;
	///���׻�Ա���
	TShfeFtdcParticipantIDType	ParticipantID;
	///���
	TShfeFtdcMoneyType	Amount;
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
};

///����
struct CShfeFtdcBulletinField
{
	///������
	TShfeFtdcDateType	TradingDay;
	///������
	TShfeFtdcBulletinIDType	BulletinID;
	///���к�
	TShfeFtdcSequenceNoType	SequenceNo;
	///��������
	TShfeFtdcNewsTypeType	NewsType;
	///�����̶�
	TShfeFtdcNewsUrgencyType	NewsUrgency;
	///����ʱ��
	TShfeFtdcTimeType	SendTime;
	///��ϢժҪ
	TShfeFtdcAbstractType	Abstract;
	///��Ϣ��Դ
	TShfeFtdcComeFromType	ComeFrom;
	///��Ϣ����
	TShfeFtdcContentType	Content;
	///WEB��ַ
	TShfeFtdcURLLinkType	URLLink;
	///�г�����
	TShfeFtdcMarketIDType	MarketID;
};

///����������ͬ��״̬
struct CShfeFtdcExchangeDataSyncStatusField
{
	///������
	TShfeFtdcDateType	TradingDay;
	///����������
	TShfeFtdcExchangeIDType	ExchangeID;
	///����������ͬ��״̬
	TShfeFtdcExchangeDataSyncStatusType	ExchangeDataSyncStatus;
};

///����������ͬ��״̬
struct CShfeFtdcSGDataSyncStatusField
{
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TShfeFtdcDateType	TradingDay;
	///������
	TShfeFtdcSettlementIDType	SettlementID;
	///����������ͬ��״̬
	TShfeFtdcSGDataSyncStatusType	SGDataSyncStatus;
};

///��Լ״̬
struct CShfeFtdcInstrumentStatusField
{
	///���������
	TShfeFtdcSettlementGroupIDType	SettlementGroupID;
	///��Լ����
	TShfeFtdcInstrumentIDType	InstrumentID;
	///��Լ����״̬
	TShfeFtdcInstrumentStatusType	InstrumentStatus;
	///���׽׶α��
	TShfeFtdcTradingSegmentSNType	TradingSegmentSN;
	///���뱾״̬ʱ��
	TShfeFtdcTimeType	EnterTime;
	///���뱾״̬ԭ��
	TShfeFtdcInstStatusEnterReasonType	EnterReason;
};

///�ͻ��ֲֲ�ѯ
struct CShfeFtdcQryClientPositionV1Field
{
	///��ʼ��Ա����
	TShfeFtdcParticipantIDType	PartIDStart;
	///������Ա����
	TShfeFtdcParticipantIDType	PartIDEnd;
	///��ʼ�ͻ�����
	TShfeFtdcClientIDType	ClientIDStart;
	///�����ͻ�����
	TShfeFtdcClientIDType	ClientIDEnd;
	///��ʼ��Լ����
	TShfeFtdcInstrumentIDType	InstIDStart;
	///������Լ����
	TShfeFtdcInstrumentIDType	InstIDEnd;
};



#endif