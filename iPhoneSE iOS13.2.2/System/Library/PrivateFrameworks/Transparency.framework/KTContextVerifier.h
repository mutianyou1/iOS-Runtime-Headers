/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class KTApplicationPublicKeyStore, TransparencyManagedDataStore, NSString, KTLogClient;

@interface KTContextVerifier : NSObject {

	KTApplicationPublicKeyStore* _applicationKeyStore;
	TransparencyManagedDataStore* _dataStore;
	NSString* _applicationID;
	KTLogClient* _logClient;

}

@property (retain) KTApplicationPublicKeyStore * applicationKeyStore;              //@synthesize applicationKeyStore=_applicationKeyStore - In the implementation block
@property (retain) TransparencyManagedDataStore * dataStore;                       //@synthesize dataStore=_dataStore - In the implementation block
@property (retain) NSString * applicationID;                                       //@synthesize applicationID=_applicationID - In the implementation block
@property (retain) KTLogClient * logClient;                                        //@synthesize logClient=_logClient - In the implementation block
+(BOOL)verifyServerLoggableDatas:(id)arg1 againstSyncedLoggableDatas:(id)arg2 error:(id*)arg3 ;
+(void)addDeviceIdVRFOutput:(id)arg1 toLoggableDatas:(id)arg2 forDeviceId:(id)arg3 ;
+(void)addClientDataVRFOutput:(id)arg1 toLoggableDatas:(id)arg2 forClientData:(id)arg3 ;
+(BOOL)verifyReceivedWitnessesForLoggableDatas:(id)arg1 error:(id*)arg2 ;
-(TransparencyManagedDataStore *)dataStore;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(NSString *)applicationID;
-(void)setApplicationID:(NSString *)arg1 ;
-(void)setApplicationKeyStore:(KTApplicationPublicKeyStore *)arg1 ;
-(void)setLogClient:(KTLogClient *)arg1 ;
-(id)initWithApplicationKeyStore:(id)arg1 dataStore:(id)arg2 applicationID:(id)arg3 ;
-(BOOL)verifyDeviceWitnesses:(id)arg1 requestDevices:(id)arg2 loggableDatas:(id)arg3 uriVRFOutput:(id)arg4 error:(id*)arg5 ;
-(BOOL)verifyUriWitness:(id)arg1 uri:(id)arg2 error:(id*)arg3 ;
-(BOOL)verifyResponseAccountId:(id)arg1 requestAccountId:(id)arg2 error:(id*)arg3 ;
-(BOOL)verifySMTs:(id)arg1 request:(id)arg2 error:(id*)arg3 ;
-(BOOL)verifyInclusionProof:(id)arg1 mapLeaf:(id*)arg2 error:(id*)arg3 ;
-(BOOL)verifyDeviceWitness:(id)arg1 deviceId:(id)arg2 uriVRFOutput:(id)arg3 error:(id*)arg4 ;
-(BOOL)verifyClientDataWitness:(id)arg1 clientData:(id)arg2 uriVRFOutput:(id)arg3 error:(id*)arg4 ;
-(KTApplicationPublicKeyStore *)applicationKeyStore;
-(void)failSMTsIfOverMMD:(id)arg1 proof:(id)arg2 underlyingError:(id)arg3 errorCode:(long long)arg4 ;
-(void)verifyKTSMTsMerged:(id)arg1 queryResponse:(id)arg2 uri:(id)arg3 accountId:(id)arg4 ;
-(void)verifyKTSMTs:(id)arg1 ;
-(KTLogClient *)logClient;
-(void)reportVerifySMTFailure:(id)arg1 error:(id)arg2 ;
-(void)deleteSMT:(id)arg1 error:(id)arg2 ;
-(BOOL)verifyClientDataWitnesses:(id)arg1 clientDatas:(id)arg2 loggableDatas:(id)arg3 uriVRFOutput:(id)arg4 error:(id*)arg5 ;
@end
