<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

namespace hack\fixtures;

module hack.module.internal;
/**
 * Original thrift enum:-
 * FooEnum
 */
enum FooEnum: int {
}

class FooEnum_TEnumStaticMetadata implements \IThriftEnumStaticMetadata {
  public static function getEnumMetadata()[]: \tmeta_ThriftEnum {
    return \tmeta_ThriftEnum::fromShape(
      shape(
        "name" => "module.FooEnum",
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TEnumAnnotations {
    return shape(
      'enum' => dict[
        '\facebook\thrift\annotation\hack\ModuleInternal' => \facebook\thrift\annotation\hack\ModuleInternal::fromShape(
          shape(
          )
        ),
      ],
      'constants' => dict[
      ],
    );
  }
}

/**
 * Original thrift struct:-
 * Foo
 */
class Foo implements \IThriftSyncStruct, \IThriftStructMetadata {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
    1 => shape(
      'var' => 'i_field',
      'type' => \TType::I32,
    ),
    2 => shape(
      'var' => 'str_field',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'i_field' => 1,
    'str_field' => 2,
  ];

  const type TConstructorShape = shape(
    ?'i_field' => ?int,
    ?'str_field' => ?string,
  );

  const int STRUCTURAL_ID = 7422449121106253639;
  /**
   * Original thrift field:-
   * 1: i32 i_field
   */
  public int $i_field;
  /**
   * Original thrift field:-
   * 2: string str_field
   */
  public string $str_field;

  public function __construct(?int $i_field = null, ?string $str_field = null)[] {
    $this->i_field = $i_field ?? 0;
    $this->str_field = $str_field ?? '';
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'i_field'),
      Shapes::idx($shape, 'str_field'),
    );
  }

  public function getName()[]: string {
    return 'Foo';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.Foo",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                )
              ),
              "name" => "i_field",
            )
          ),
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "str_field",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\facebook\thrift\annotation\hack\ModuleInternal' => \facebook\thrift\annotation\hack\ModuleInternal::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
        'str_field' => shape(
          'field' => dict[
            '\facebook\thrift\annotation\hack\ModuleInternal' => \facebook\thrift\annotation\hack\ModuleInternal::fromShape(
              shape(
              )
            ),
          ],
          'type' => dict[],
        ),
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

enum FooUnionEnum: int {
  _EMPTY_ = 0;
  int_field = 1;
  str_field = 2;
}

/**
 * Original thrift struct:-
 * FooUnion
 */
class FooUnion implements \IThriftSyncStruct, \IThriftStructMetadata, \IThriftUnion<\hack\fixtures\FooUnionEnum> {
  use \ThriftUnionSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
    1 => shape(
      'var' => 'int_field',
      'union' => true,
      'type' => \TType::I32,
    ),
    2 => shape(
      'var' => 'str_field',
      'union' => true,
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'int_field' => 1,
    'str_field' => 2,
  ];

  const type TConstructorShape = shape(
    ?'int_field' => ?int,
    ?'str_field' => ?string,
  );

  const int STRUCTURAL_ID = 3905905529819142594;
  /**
   * Original thrift field:-
   * 1: i32 int_field
   */
  public ?int $int_field;
  /**
   * Original thrift field:-
   * 2: string str_field
   */
  public ?string $str_field;
  protected \hack\fixtures\FooUnionEnum $_type = \hack\fixtures\FooUnionEnum::_EMPTY_;

  public function __construct(?int $int_field = null, ?string $str_field = null)[] {
    $this->_type = \hack\fixtures\FooUnionEnum::_EMPTY_;
    if ($int_field !== null) {
      $this->int_field = $int_field;
      $this->_type = \hack\fixtures\FooUnionEnum::int_field;
    }
    if ($str_field !== null) {
      $this->str_field = $str_field;
      $this->_type = \hack\fixtures\FooUnionEnum::str_field;
    }
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'int_field'),
      Shapes::idx($shape, 'str_field'),
    );
  }

  public function getName()[]: string {
    return 'FooUnion';
  }

  public function getType()[]: \hack\fixtures\FooUnionEnum {
    return $this->_type;
  }

  public function reset()[write_props]: void {
    switch ($this->_type) {
      case \hack\fixtures\FooUnionEnum::int_field:
        $this->int_field = null;
        break;
      case \hack\fixtures\FooUnionEnum::str_field:
        $this->str_field = null;
        break;
      case \hack\fixtures\FooUnionEnum::_EMPTY_:
        break;
    }
    $this->_type = \hack\fixtures\FooUnionEnum::_EMPTY_;
  }

  public function set_int_field(int $int_field)[write_props]: this {
    $this->reset();
    $this->_type = \hack\fixtures\FooUnionEnum::int_field;
    $this->int_field = $int_field;
    return $this;
  }

  public function get_int_field()[]: ?int {
    return $this->int_field;
  }

  public function getx_int_field()[]: int {
    invariant(
      $this->_type === \hack\fixtures\FooUnionEnum::int_field,
      'get_int_field called on an instance of FooUnion whose current type is %s',
      (string)$this->_type,
    );
    return $this->int_field as nonnull;
  }

  public function set_str_field(string $str_field)[write_props]: this {
    $this->reset();
    $this->_type = \hack\fixtures\FooUnionEnum::str_field;
    $this->str_field = $str_field;
    return $this;
  }

  public function get_str_field()[]: ?string {
    return $this->str_field;
  }

  public function getx_str_field()[]: string {
    invariant(
      $this->_type === \hack\fixtures\FooUnionEnum::str_field,
      'get_str_field called on an instance of FooUnion whose current type is %s',
      (string)$this->_type,
    );
    return $this->str_field as nonnull;
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.FooUnion",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                )
              ),
              "name" => "int_field",
            )
          ),
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "str_field",
            )
          ),
        ],
        "is_union" => true,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\facebook\thrift\annotation\hack\ModuleInternal' => \facebook\thrift\annotation\hack\ModuleInternal::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}
