/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/GPBMessage.h>
#import <Transparency/TransparencyVerifiable.h>

@class TransparencyLogEntryVerifier, TransparencyManagedDataStore, SignedLogHead, NSMutableArray, NSData;

@interface LogEntry : GPBMessage <TransparencyVerifiable>

@property (retain) TransparencyLogEntryVerifier * verifier; 
@property (retain) TransparencyManagedDataStore * dataStore; 
@property (assign,nonatomic) int logType; 
@property (nonatomic,retain) SignedLogHead * slh; 
@property (assign,nonatomic) BOOL hasSlh; 
@property (nonatomic,retain) NSMutableArray * hashesOfPeersInPathToRootArray; 
@property (nonatomic,readonly) unsigned long long hashesOfPeersInPathToRootArray_Count; 
@property (nonatomic,copy) NSData * nodeBytes; 
@property (assign,nonatomic) unsigned long long nodePosition; 
+(id)descriptor;
-(TransparencyManagedDataStore *)dataStore;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(BOOL)verifyWithError:(id*)arg1 ;
-(TransparencyLogEntryVerifier *)verifier;
-(void)setVerifier:(TransparencyLogEntryVerifier *)arg1 ;
-(BOOL)verifyTLTEntryForPerApplicationLogHead:(id)arg1 error:(id*)arg2 ;
@end
