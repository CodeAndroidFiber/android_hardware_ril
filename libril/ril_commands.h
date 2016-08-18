/* //device/libs/telephony/ril_commands.h
**
** Copyright 2006, The Android Open Source Project
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/
    {0, NULL, NULL},                   //none
    {RIL_REQUEST_GET_SIM_STATUS, dispatchVoid, responseSimStatus},
    {RIL_REQUEST_ENTER_SIM_PIN, dispatchStrings, responseInts},
    {RIL_REQUEST_ENTER_SIM_PUK, dispatchStrings, responseInts},
    {RIL_REQUEST_ENTER_SIM_PIN2, dispatchStrings, responseInts},
    {RIL_REQUEST_ENTER_SIM_PUK2, dispatchStrings, responseInts},
    {RIL_REQUEST_CHANGE_SIM_PIN, dispatchStrings, responseInts},
    {RIL_REQUEST_CHANGE_SIM_PIN2, dispatchStrings, responseInts},
    {RIL_REQUEST_ENTER_NETWORK_DEPERSONALIZATION, dispatchStrings, responseInts},
    {RIL_REQUEST_GET_CURRENT_CALLS, dispatchVoid, responseCallList},
    {RIL_REQUEST_DIAL, dispatchDial, responseVoid},
    {RIL_REQUEST_GET_IMSI, dispatchStrings, responseString},
    {RIL_REQUEST_HANGUP, dispatchInts, responseVoid},
    {RIL_REQUEST_HANGUP_WAITING_OR_BACKGROUND, dispatchVoid, responseVoid},
    {RIL_REQUEST_HANGUP_FOREGROUND_RESUME_BACKGROUND, dispatchVoid, responseVoid},
    {RIL_REQUEST_SWITCH_WAITING_OR_HOLDING_AND_ACTIVE, dispatchVoid, responseVoid},
    {RIL_REQUEST_CONFERENCE, dispatchVoid, responseVoid},
    {RIL_REQUEST_UDUB, dispatchVoid, responseVoid},
    {RIL_REQUEST_LAST_CALL_FAIL_CAUSE, dispatchVoid, responseFailCause},
    {RIL_REQUEST_SIGNAL_STRENGTH, dispatchVoid, responseRilSignalStrength},
    {RIL_REQUEST_VOICE_REGISTRATION_STATE, dispatchVoid, responseStrings},
    {RIL_REQUEST_DATA_REGISTRATION_STATE, dispatchVoid, responseStrings},
    {RIL_REQUEST_OPERATOR, dispatchVoid, responseStrings},
    {RIL_REQUEST_RADIO_POWER, dispatchInts, responseVoid},
    {RIL_REQUEST_DTMF, dispatchString, responseVoid},
    {RIL_REQUEST_SEND_SMS, dispatchStrings, responseSMS},
    {RIL_REQUEST_SEND_SMS_EXPECT_MORE, dispatchStrings, responseSMS},
    {RIL_REQUEST_SETUP_DATA_CALL, dispatchDataCall, responseSetupDataCall},
    {RIL_REQUEST_SIM_IO, dispatchSIM_IO, responseSIM_IO},
    {RIL_REQUEST_SEND_USSD, dispatchString, responseVoid},
    {RIL_REQUEST_CANCEL_USSD, dispatchVoid, responseVoid},
    {RIL_REQUEST_GET_CLIR, dispatchVoid, responseInts},
    {RIL_REQUEST_SET_CLIR, dispatchInts, responseVoid},
    {RIL_REQUEST_QUERY_CALL_FORWARD_STATUS, dispatchCallForward, responseCallForwards},
    {RIL_REQUEST_SET_CALL_FORWARD, dispatchCallForward, responseVoid},
    {RIL_REQUEST_QUERY_CALL_WAITING, dispatchInts, responseInts},
    {RIL_REQUEST_SET_CALL_WAITING, dispatchInts, responseVoid},
    {RIL_REQUEST_SMS_ACKNOWLEDGE, dispatchInts, responseVoid},
    {RIL_REQUEST_GET_IMEI, dispatchVoid, responseString},
    {RIL_REQUEST_GET_IMEISV, dispatchVoid, responseString},
    {RIL_REQUEST_ANSWER,dispatchVoid, responseVoid},
    {RIL_REQUEST_DEACTIVATE_DATA_CALL, dispatchStrings, responseVoid},
    {RIL_REQUEST_QUERY_FACILITY_LOCK, dispatchStrings, responseInts},
    {RIL_REQUEST_SET_FACILITY_LOCK, dispatchStrings, responseInts},
    {RIL_REQUEST_CHANGE_BARRING_PASSWORD, dispatchStrings, responseVoid},
    {RIL_REQUEST_QUERY_NETWORK_SELECTION_MODE, dispatchVoid, responseInts},
    {RIL_REQUEST_SET_NETWORK_SELECTION_AUTOMATIC, dispatchVoid, responseVoid},
#ifdef VENDOR_EDIT 
	//dql@OnLineRD.AirService.RIL, 2013/09/03, Modify for NW select by RAT.
	{RIL_REQUEST_SET_NETWORK_SELECTION_MANUAL, dispatchStrings, responseVoid},
#else  /* VENDOR_EDIT */
	{RIL_REQUEST_SET_NETWORK_SELECTION_MANUAL, dispatchString, responseVoid},
#endif /* VENDOR_EDIT */
    {RIL_REQUEST_QUERY_AVAILABLE_NETWORKS , dispatchVoid, responseStrings},
    {RIL_REQUEST_DTMF_START, dispatchString, responseVoid},
    {RIL_REQUEST_DTMF_STOP, dispatchVoid, responseVoid},
    {RIL_REQUEST_BASEBAND_VERSION, dispatchVoid, responseString},
    {RIL_REQUEST_SEPARATE_CONNECTION, dispatchInts, responseVoid},
    {RIL_REQUEST_SET_MUTE, dispatchInts, responseVoid},
    {RIL_REQUEST_GET_MUTE, dispatchVoid, responseInts},
    {RIL_REQUEST_QUERY_CLIP, dispatchVoid, responseInts},
    {RIL_REQUEST_LAST_DATA_CALL_FAIL_CAUSE, dispatchVoid, responseInts},
    {RIL_REQUEST_DATA_CALL_LIST, dispatchVoid, responseDataCallList},
    {RIL_REQUEST_RESET_RADIO, dispatchVoid, responseVoid},
    {RIL_REQUEST_OEM_HOOK_RAW, dispatchRaw, responseRaw},
    {RIL_REQUEST_OEM_HOOK_STRINGS, dispatchStrings, responseStrings},
    {RIL_REQUEST_SCREEN_STATE, dispatchInts, responseVoid},
    {RIL_REQUEST_SET_SUPP_SVC_NOTIFICATION, dispatchInts, responseVoid},
    {RIL_REQUEST_WRITE_SMS_TO_SIM, dispatchSmsWrite, responseInts},
    {RIL_REQUEST_DELETE_SMS_ON_SIM, dispatchInts, responseVoid},
    {RIL_REQUEST_SET_BAND_MODE, dispatchInts, responseVoid},
    {RIL_REQUEST_QUERY_AVAILABLE_BAND_MODE, dispatchVoid, responseInts},
    {RIL_REQUEST_STK_GET_PROFILE, dispatchVoid, responseString},
    {RIL_REQUEST_STK_SET_PROFILE, dispatchString, responseVoid},
    {RIL_REQUEST_STK_SEND_ENVELOPE_COMMAND, dispatchString, responseString},
    {RIL_REQUEST_STK_SEND_TERMINAL_RESPONSE, dispatchString, responseVoid},
    {RIL_REQUEST_STK_HANDLE_CALL_SETUP_REQUESTED_FROM_SIM, dispatchInts, responseVoid},
    {RIL_REQUEST_EXPLICIT_CALL_TRANSFER, dispatchVoid, responseVoid},
    {RIL_REQUEST_SET_PREFERRED_NETWORK_TYPE, dispatchInts, responseVoid},
    {RIL_REQUEST_GET_PREFERRED_NETWORK_TYPE, dispatchVoid, responseInts},
    {RIL_REQUEST_GET_NEIGHBORING_CELL_IDS, dispatchVoid, responseCellList},
    {RIL_REQUEST_SET_LOCATION_UPDATES, dispatchInts, responseVoid},
    {RIL_REQUEST_CDMA_SET_SUBSCRIPTION_SOURCE, dispatchInts, responseVoid},
    {RIL_REQUEST_CDMA_SET_ROAMING_PREFERENCE, dispatchInts, responseVoid},
    {RIL_REQUEST_CDMA_QUERY_ROAMING_PREFERENCE, dispatchVoid, responseInts},
    {RIL_REQUEST_SET_TTY_MODE, dispatchInts, responseVoid},
    {RIL_REQUEST_QUERY_TTY_MODE, dispatchVoid, responseInts},
    {RIL_REQUEST_CDMA_SET_PREFERRED_VOICE_PRIVACY_MODE, dispatchInts, responseVoid},
    {RIL_REQUEST_CDMA_QUERY_PREFERRED_VOICE_PRIVACY_MODE, dispatchVoid, responseInts},
    {RIL_REQUEST_CDMA_FLASH, dispatchString, responseVoid},
    {RIL_REQUEST_CDMA_BURST_DTMF, dispatchStrings, responseVoid},
    {RIL_REQUEST_CDMA_VALIDATE_AND_WRITE_AKEY, dispatchString, responseVoid},
    {RIL_REQUEST_CDMA_SEND_SMS, dispatchCdmaSms, responseSMS},
    {RIL_REQUEST_CDMA_SMS_ACKNOWLEDGE, dispatchCdmaSmsAck, responseVoid},
    {RIL_REQUEST_GSM_GET_BROADCAST_SMS_CONFIG, dispatchVoid, responseGsmBrSmsCnf},
    {RIL_REQUEST_GSM_SET_BROADCAST_SMS_CONFIG, dispatchGsmBrSmsCnf, responseVoid},
    {RIL_REQUEST_GSM_SMS_BROADCAST_ACTIVATION, dispatchInts, responseVoid},
    {RIL_REQUEST_CDMA_GET_BROADCAST_SMS_CONFIG, dispatchVoid, responseCdmaBrSmsCnf},
    {RIL_REQUEST_CDMA_SET_BROADCAST_SMS_CONFIG, dispatchCdmaBrSmsCnf, responseVoid},
    {RIL_REQUEST_CDMA_SMS_BROADCAST_ACTIVATION, dispatchInts, responseVoid},
    {RIL_REQUEST_CDMA_SUBSCRIPTION, dispatchVoid, responseStrings},
    {RIL_REQUEST_CDMA_WRITE_SMS_TO_RUIM, dispatchRilCdmaSmsWriteArgs, responseInts},
    {RIL_REQUEST_CDMA_DELETE_SMS_ON_RUIM, dispatchInts, responseVoid},
    {RIL_REQUEST_DEVICE_IDENTITY, dispatchVoid, responseStrings},
    {RIL_REQUEST_EXIT_EMERGENCY_CALLBACK_MODE, dispatchVoid, responseVoid},
    {RIL_REQUEST_GET_SMSC_ADDRESS, dispatchVoid, responseString},
    {RIL_REQUEST_SET_SMSC_ADDRESS, dispatchString, responseVoid},
    {RIL_REQUEST_REPORT_SMS_MEMORY_STATUS, dispatchInts, responseVoid},
    {RIL_REQUEST_REPORT_STK_SERVICE_IS_RUNNING, dispatchVoid, responseVoid},
    {RIL_REQUEST_CDMA_GET_SUBSCRIPTION_SOURCE, dispatchCdmaSubscriptionSource, responseInts},
    {RIL_REQUEST_ISIM_AUTHENTICATION, dispatchString, responseString},
    {RIL_REQUEST_ACKNOWLEDGE_INCOMING_GSM_SMS_WITH_PDU, dispatchStrings, responseVoid},
    {RIL_REQUEST_STK_SEND_ENVELOPE_WITH_STATUS, dispatchString, responseSIM_IO},
    {RIL_REQUEST_VOICE_RADIO_TECH, dispatchVoiceRadioTech, responseInts},
    {RIL_REQUEST_GET_CELL_INFO_LIST, dispatchVoid, responseCellInfoList},
    {RIL_REQUEST_SET_UNSOL_CELL_INFO_LIST_RATE, dispatchInts, responseVoid},
    {RIL_REQUEST_SET_INITIAL_ATTACH_APN, dispatchSetInitialAttachApn, responseVoid},
    {RIL_REQUEST_IMS_REGISTRATION_STATE, dispatchVoid, responseInts},
    {RIL_REQUEST_IMS_SEND_SMS, dispatchImsSms, responseSMS},
    {RIL_REQUEST_SIM_TRANSMIT_APDU_BASIC, dispatchSIM_APDU, responseSIM_IO},
    {RIL_REQUEST_SIM_OPEN_CHANNEL, dispatchString, responseInts},
    {RIL_REQUEST_SIM_CLOSE_CHANNEL, dispatchInts, responseVoid},
    {RIL_REQUEST_SIM_TRANSMIT_APDU_CHANNEL, dispatchSIM_APDU, responseSIM_IO},
    {RIL_REQUEST_NV_READ_ITEM, dispatchNVReadItem, responseString},
    {RIL_REQUEST_NV_WRITE_ITEM, dispatchNVWriteItem, responseVoid},
    {RIL_REQUEST_NV_WRITE_CDMA_PRL, dispatchRaw, responseVoid},
    {RIL_REQUEST_NV_RESET_CONFIG, dispatchInts, responseVoid},
    {RIL_REQUEST_SET_UICC_SUBSCRIPTION, dispatchUiccSubscripton, responseVoid},
    {RIL_REQUEST_ALLOW_DATA, dispatchInts, responseVoid},
    {RIL_REQUEST_GET_HARDWARE_CONFIG, dispatchVoid, responseHardwareConfig},
    {RIL_REQUEST_SIM_AUTHENTICATION, dispatchSimAuthentication, responseSIM_IO},
    {RIL_REQUEST_GET_DC_RT_INFO, dispatchVoid, responseDcRtInfo},
    {RIL_REQUEST_SET_DC_RT_INFO_RATE, dispatchInts, responseVoid},
    {RIL_REQUEST_SET_DATA_PROFILE, dispatchDataProfile, responseVoid},
    {RIL_REQUEST_SHUTDOWN, dispatchVoid, responseVoid},
    {RIL_REQUEST_GET_RADIO_CAPABILITY, dispatchVoid, responseRadioCapability},
    {RIL_REQUEST_SET_RADIO_CAPABILITY, dispatchRadioCapability, responseRadioCapability},
    {RIL_REQUEST_START_LCE, dispatchInts, responseLceStatus},
    {RIL_REQUEST_STOP_LCE, dispatchVoid, responseLceStatus},
    {RIL_REQUEST_PULL_LCEDATA, dispatchVoid, responseLceData},
    {RIL_REQUEST_GET_ACTIVITY_INFO, dispatchVoid, responseActivityData},
    {RIL_REQUEST_SIM_GET_ATR, dispatchInts, responseString},
//add by xufei
    {0, NULL, NULL}, 
    {RIL_REQUEST_FACTORY_MODE_NV_PROCESS, dispatchInts, responseVoid}, 
    //add end
    #ifdef VENDOR_EDIT
	//TongJing.Shi@EXP.DataComm.Phone, 2013.08.31, Modify for
	{RIL_REQUEST_FACTORY_MODE_MODEM_GPIO,  dispatchInts, responseVoid},
    //DuYuanHua@OnLineRD.AirService.RIL, 2012/09/26, Add for EngineerMode
    {RIL_REQUEST_GET_BAND_MODE, dispatchVoid, responseInts},
    //Zhengpeng.Tan@OnlineRD.AirService.Module, 2013/11/15, Add for report nv_restore when bootup	
    {RIL_REQUEST_REPORT_BOOTUPNVRESTOR_STATE,  dispatchVoid, responseVoid},
	//Wenlong.Cai@OnlineRD.AirService.Module, 2013/12/09, Add for get rffe device information
    {RIL_REQUEST_GET_RFFE_DEV_INFO,  dispatchInts, responseInts},

    //zhunn@OnLineRD.AirService.Framework, 2013/02/19, add for skip RIL_REQUEST_OEM_BASE+6
    {0, NULL, NULL},                   

    
	//dengql@OnLineRD.AirService.RIL, 2012/09/26, Add for NFC E-wallet
    {RIL_REQUEST_SIM_TRANSMIT_BASIC, dispatchSIM_IO, responseSIM_IO},
 //add for test
    {0, NULL, NULL},                   
    {0, NULL, NULL},                   
    {RIL_REQUEST_SIM_TRANSMIT_CHANNEL, dispatchSIM_IO, responseSIM_IO},
    #endif /* VENDOR_EDIT */
//yangli@OnlineRD.AirService.Module, 2014/05/20, Add for send msg to make modem reset, {
#ifdef VENDOR_EDIT
    {RIL_REQUEST_GO_TO_ERROR_FATAL, dispatchVoid, responseVoid},
    {RIL_REQUEST_GET_MDM_BASEBAND, dispatchVoid, responseString},
    //yangli@OnlineRD.AirService.Module, 2014/09/22, Add for set only tdd-lte    
    {RIL_REQUEST_SET_TDD_LTE, dispatchInts, responseVoid},
#endif /* VENDOR_EDIT */
    {RIL_REQUEST_CAF_SIM_OPEN_CHANNEL_WITH_P2, dispatchOpenChannelWithP2, responseInts},
