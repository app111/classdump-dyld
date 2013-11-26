/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStore/ISOperation.h>

@class StoreKitClientIdentity, NSString, NSNumber;

@interface FinishMicroPaymentOperation : ISOperation {

	StoreKitClientIdentity* _clientIdentity;
	NSString* _transactionIdentifier;
	NSNumber* _userDSID;

}

@property (copy) StoreKitClientIdentity * clientIdentity; 
@property (copy) NSString * transactionIdentifier; 
@property (retain) NSNumber * userDSID; 
-(id)userDSID;
-(void)setUserDSID:(id)arg1 ;
-(id)clientIdentity;
-(void)setClientIdentity:(id)arg1 ;
-(BOOL)_parseResponse:(id)arg1 returningError:(id*)arg2 ;
-(void)dealloc;
-(void)run;
-(void)setTransactionIdentifier:(id)arg1 ;
-(id)transactionIdentifier;
@end
