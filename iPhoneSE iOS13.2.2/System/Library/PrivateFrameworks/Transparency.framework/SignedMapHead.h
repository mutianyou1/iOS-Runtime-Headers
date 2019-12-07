/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/GPBMessage.h>
#import <Transparency/TransparencyVerifiable.h>

@class TransparencySignatureVerifier, MapHead, NSData, Signature;

@interface SignedMapHead : GPBMessage <TransparencyVerifiable>

@property (retain) TransparencySignatureVerifier * verifier; 
@property (readonly) MapHead * parsedMapHead; 
@property (nonatomic,copy) NSData * mapHead; 
@property (nonatomic,retain) Signature * signature; 
@property (assign,nonatomic) BOOL hasSignature; 
+(id)descriptor;
-(BOOL)verifyWithError:(id*)arg1 ;
-(TransparencySignatureVerifier *)verifier;
-(void)setVerifier:(TransparencySignatureVerifier *)arg1 ;
-(MapHead *)parsedMapHead;
@end
