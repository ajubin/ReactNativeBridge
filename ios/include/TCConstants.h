//
//  TCConstants.h
//  TagCommander
//
//  Created by Jean-Julien ZEIL on 10/02/14.
//  Copyright (c) 2014 TagCommander. All rights reserved.
//

#ifndef TagCommander_TCConstants_h
#define TagCommander_TCConstants_h

#import <Foundation/Foundation.h>

#define TC_UNIT_TESTS
#define TC_FUNCTIONAL_TESTS

#pragma mark generated constants

#pragma mark - misc
extern NSString *const kTCFileOfflineHits;
extern NSString *const kTCLogger_LogFileName;
extern NSString *const kTCFilePrivateDocuments;

extern NSString *const kTCArrayFormat;

extern unsigned long long const kTCVisitDurationDefaultValue;

extern NSString *const kTCManufacturerName;

// Special values created for ComScore
extern NSString *const kTCTimeSinceLastMeasurement;
extern NSString *const kTCSessionStartTimestamp;
extern NSString *const kTCLastSessionStartTimestamp;
extern NSString *const kTCExitTimestamp;
extern NSString *const kTCUsageDuration;
extern NSString *const kTCLastForegroundTime;
extern NSString *const kTCLastBackgroundTime;

#pragma mark HTTP Hit Notifications
extern NSString *const kTCNotification_HitSent;
extern NSString *const kTCNotification_HitExecute;
extern NSString *const kTCNotification_HitError;

#pragma mark HTTP Request Notifications
extern NSString *const kTCNotification_HTTPRequest;
extern NSString *const kTCNotification_HTTPRequestSent;
extern NSString *const kTCNotification_HTTPRequestError;
extern NSString *const kTCNotification_HTTPResponse;

#pragma mark Internet Notifications
extern NSString *const kTCNotification_InternetUp;
extern NSString *const kTCNotification_InternetDown;
extern NSString *const kTCNotification_InternetChanged;

#pragma mark Location Notifications
extern NSString *const kTCNotification_LocationAvailable;
extern NSString *const kTCNotification_LocationUnavailable;

#pragma mark Battery Notifications
extern NSString *const kTCNotification_LowBattery;
extern NSString *const kTCNotification_BatteryAvailable;

#pragma mark Background / Foreground notifications
extern NSString *const kTCNotification_OnBackground;
extern NSString *const kTCNotification_OnForeground;

#pragma mark Misc Notifications
extern NSString *const kTCNotification_Unknown;

#pragma mark - network
extern NSTimeInterval const kTCNetworkDefaultTimeout;
extern NSURLRequestCachePolicy kTCNetworkDefaultRequestCachePolicy;

#pragma mark - configuration
extern NSString *const kTCServerSideURL;

#pragma mark - notification userInfo
extern NSString *const kTCUserInfo_DataKey;
extern NSString *const kTCUserInfo_URLKey;
extern NSString *const kTCUserInfo_POSTData;
extern NSString *const kTCUserInfo_ResponseKey;
extern NSString *const kTCUserInfo_ErrorKey;
extern NSString *const kTCUserInfo_RequestType;
extern NSString *const kTCUserInfo_ContentKey;
extern NSString *const kTCUserInfo_RequestID;

#pragma mark - Message
extern NSString *const kTCErrorMessageInvalidURL;

#pragma mark - predefined dynamic variables
extern NSString *const kTCPredefinedVariable_IP;
extern NSString *const kTCPredefinedVariable_Empty;
extern NSString *const kTCPredefinedVariable_Random;

extern NSString *const kTCPredefinedVariable_Language;
extern NSString *const kTCPredefinedVariable_LanguageGA;
extern NSString *const kTCPredefinedVariable_LanguageCS;
extern NSString *const kTCPredefinedVariable_SystemName;
extern NSString *const kTCPredefinedVariable_SystemVersion;
extern NSString *const kTCPredefinedVariable_Model;
extern NSString *const kTCPredefinedVariable_ModelAndVersion;
extern NSString *const kTCPredefinedVariable_Connexion;
extern NSString *const kTCPredefinedVariable_Device;

extern NSString *const kTCPredefinedVariable_ScreenResolution;
extern NSString *const kTCPredefinedVariable_Charset;
extern NSString *const kTCPredefinedVariable_CurrencyCode;
extern NSString *const kTCPredefinedVariable_CurrencySymbol;
extern NSString *const kTCPredefinedVariable_ApplicationVersion;
extern NSString *const kTCPredefinedVariable_ApplicationPreviousVersion;
extern NSString *const kTCPredefinedVariable_ApplicationBuild;
extern NSString *const kTCPredefinedVariable_TagCommanderVersion;
extern NSString *const kTCPredefinedVariable_Manufacturer;
extern NSString *const kTCPredefinedVariable_UserAgent;

extern NSString *const kTCPredefinedVariable_JailBroken;
extern NSString *const kTCPredefinedVariable_ColdStarts;
extern NSString *const kTCPredefinedVariable_ForegroundTransitions;
extern NSString *const kTCPredefinedVariable_ForegroundTime;
extern NSString *const kTCPredefinedVariable_DeltaForegroundTime;
extern NSString *const kTCPredefinedVariable_BackgroundTime;
extern NSString *const kTCPredefinedVariable_DeltaBackgroundTime;
extern NSString *const kTCPredefinedVariable_BackgroundUxTime;
extern NSString *const kTCPredefinedVariable_DeltaBackgroundUxTime;

extern NSString *const kTCPredefinedVariable_CurrentCall;
extern NSString *const kTCPredefinedVariable_CurrentCallMs;
extern NSString *const kTCPredefinedVariable_LastCall;
extern NSString *const kTCPredefinedVariable_LastCallMs;
extern NSString *const kTCPredefinedVariable_LastSessionStartMs;
extern NSString *const kTCPredefinedVariable_LastSessionLastHit;
extern NSString *const kTCPredefinedVariable_LastSessionLastHitMs;

extern NSString *const kTCPredefinedVariable_Now;
extern NSString *const kTCPredefinedVariable_NowMs;

extern NSString *const kTCPredefinedVariable_UniqueID;
extern NSString *const kTCPredefinedVariable_IDFA;
extern NSString *const kTCPredefinedVariable_IDFV;

/** opposite of TC_LIMIT_USER_TRACKING_ENABLED by definition */
extern NSString *const kTCPredefinedVariable_isTrackingEnabled;
extern NSString *const kTCPredefinedVariable_LimitUserTrackingEnabled;

extern NSString *const kTCPredefinedVariable_Longitude;
extern NSString *const kTCPredefinedVariable_Latitude;

extern NSString *const kTCPredefinedVariable_BundleID;
extern NSString *const kTCPredefinedVariable_ApplicationName;
extern NSString *const kTCPredefinedVariable_RuntimeName;

extern NSString *const kTCUserDefaultsKey_UniqueID;

extern NSString *const kTCPredefinedVariable_FirstVisit;
extern NSString *const kTCPredefinedVariable_FirstVisitMs;
extern NSString *const kTCPredefinedVariable_LastVisit;
extern NSString *const kTCPredefinedVariable_LastVisitMs;
extern NSString *const kTCPredefinedVariable_CurrentVisit;
extern NSString *const kTCPredefinedVariable_CurrentSession;
extern NSString *const kTCPredefinedVariable_CurrentVisitMs;
extern NSString *const kTCPredefinedVariable_CurrentSessionMs;
extern NSString *const kTCPredefinedVariable_SessionDuration;
extern NSString *const kTCPredefinedVariable_SessionDurationMs;
extern NSString *const kTCPredefinedVariable_CurVersionFirstVisitMs;

extern NSString *const kTCPredefinedVariable_NumberVisits;
extern NSString *const kTCPredefinedVariable_NumberSessions;

extern NSString *const kTCPredefinedVariable_IsNewSession;
extern NSString *const kTCPredefinedVariable_UserSessionDurationMs;
extern NSString *const kTCPredefinedVariable_UsageSessionDurationMs;
extern NSString *const kTCPredefinedVariable_AccumulatedBackgroundTime;
extern NSString *const kTCPredefinedVariable_TimeSinceLastExit;
extern NSString *const kTCPredefinedVariable_AccumulatedForegroundTimeWithoutMeasurement;
extern NSString *const kTCPredefinedVariable_LastForegroundTimeWithoutMeasurement;

extern NSString *const kTCPredefinedVariable_EmptyVariableRemoveEqual;

#pragma mark - Timestamp formats
extern NSString *const kTCDateFirstVisitFormat;
extern NSString *const kTCDateLastVisitFormat;
extern NSString *const kTCDateCurrentVisitFormat;
extern NSString *const kTCNumberColdStarts;
extern NSString *const kTCNumberVisitsFormat;
extern NSString *const kTCLastPID;

#pragma mark - Battery level
extern const float kTCLowBatteryWarningLevel;
extern const float kTCBatteryAvailableWarningLevel;

#pragma mark - Regexps
extern NSString *const kTCRegexpDynamicVariable;

extern NSString *const kTCRegexpIP;
extern NSString *const kTCRegexpAppleLocale;
extern NSString *const kTCRegexpScreenResolution;
extern NSString *const kTCRegexpSoftwareVersion;
extern NSString *const kTCRegexpUUID;

#endif
