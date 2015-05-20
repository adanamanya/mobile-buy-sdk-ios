//
//  BUYGiftCard.h
//  Checkout
//
//  Created by Shopify.
//  Copyright (c) 2015 Shopify Inc. All rights reserved.
//

#import "BUYObject.h"
#import "BUYSerializable.h"

@class BUYCheckout;

@interface BUYGiftCard : BUYObject <BUYSerializable>

@property (nonatomic, readonly, copy) NSString *code;
@property (nonatomic, readonly, copy) NSString *lastCharacters;
@property (nonatomic, readonly, strong) NSDecimalNumber *balance;
@property (nonatomic, readonly, strong) NSDecimalNumber *amountUsed;
@property (nonatomic, readonly, strong) BUYCheckout *checkout;

@end
