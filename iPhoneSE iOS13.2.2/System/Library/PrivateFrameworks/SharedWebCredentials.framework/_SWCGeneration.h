/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SharedWebCredentials/SharedWebCredentials-Structs.h>
#import <libobjc.A.dylib/SWCRedactedDescription.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _SWCGeneration : NSObject <SWCRedactedDescription, NSCopying, NSSecureCoding> {

	int _processIdentifier;
	int _processIdentifierVersion;
	unsigned long long _tick;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)generationByIncrementingSelf;
-(id)initWithPID:(int)arg1 version:(int)arg2 tick:(unsigned long long)arg3 ;
@end
