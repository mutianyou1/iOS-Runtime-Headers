/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/EditScript.framework/EditScript
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ESEditScriptData <NSObject>
@required
+(id)EditScriptDataWithString:(id)arg1 chunkSize:(long long)arg2;
+(id)EditScriptDataWithArray:(id)arg1;
-(long long)length;
-(id)stringValue;
-(id)stringAtIndex:(long long)arg1;
-(long long)lengthOfItem:(long long)arg1;
-(long long)characterIndexForItem:(long long)arg1;
-(long long)indexOfFirstDifferenceWithOtherData:(id)arg1 shouldReverseIterate:(BOOL)arg2 fallsOnWordBoundary:(BOOL*)arg3;

@end

